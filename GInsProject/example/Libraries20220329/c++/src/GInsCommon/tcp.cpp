//========================================================================
// Include
//========================================================================
#include "tcp.h"

#if defined(_WIN32)
#include "WinSockDll.h"
#else
#include <sys/ioctl.h>
#include <net/if.h>
#include <unistd.h>
#include <fcntl.h>
#ifdef _USE_PTHREAD
#include <pthread.h>
#endif
#endif // #if defined(_WIN32)

#include "ginsstate.h"
#include "ginsportabletrace.h"

//========================================================================
// Debugoptionen
//========================================================================
//#define _DEBUG_TCP

#if defined(_WIN32)
//========================================================================
//
//========================================================================
CWinSockDll& Winsock()
{
    // Die einzige Instanz!
    static CWinSockDll _WinSockDll("WS2_32.dll");

    return _WinSockDll;
}

#else
#ifdef _USE_PTHREAD
//========================================================================
// CTCP_Cleanup
//========================================================================
void CTCP_Cleanup(void *arg)
{
#ifdef _DEBUG_TCP
    TRACE("CTCP_Cleanup!\n");
#endif
    if (arg != NULL) {
        // Alle Sockets schließen!
        ((CTCP *) arg)->clear();
    }
}

static void CU_CloseSocket(void *arg)
{
    if (arg != NULL) {
        SOCKET s = *((SOCKET *) arg);

        if (s != INVALID_SOCKET) {
            close(s);
            TRACE("TCP CU_CloseSocket hat zugeschlagen!!!\n");
            *((SOCKET *) arg) = INVALID_SOCKET;
        }
    }
}

#endif // #ifdef _USE_PTHREAD
#endif // #if defined(_WIN32)

//========================================================================
// CTCP
//========================================================================
CTCP::CTCP() :
    m_dwReceivedBytes(0),
    m_dwSentBytes(0),
    m_SocketListen(INVALID_SOCKET),
    m_Socket(INVALID_SOCKET),
    m_iMaxConnectRequests(0)
{
#if defined(_WIN32)
    memset(&m_WinSockData, 0, sizeof(m_WinSockData));
    // Call WSAStartup(), ask for version 2.2
    m_iStartupError = Winsock().WSAStartup(0x0202, &m_WinSockData);

    if (m_iStartupError != 0) {
        m_iStartupError = TEnumGInsStateType::eGInsStateType__NET_INIT_WINSOCK;
    }
    else {
#ifdef _DEBUG
        TRACE("CTCP: CTOR, WinSockData.wVersion = 0x%x.\n", m_WinSockData.wVersion);
        TRACE("CTCP: CTOR, WinSockData.wHighVersion = 0x%x.\n", m_WinSockData.wHighVersion);
        TRACE("CTCP: CTOR, WinSockData.iMaxSockets = 0x%x.\n", m_WinSockData.iMaxSockets);
#endif
        if (LOBYTE(m_WinSockData.wVersion) != 2 || HIBYTE(m_WinSockData.wVersion) != 2) {
            Winsock().WSACleanup();
            m_iStartupError = TEnumGInsStateType::eGInsStateType__NET_INIT_WINSOCK;
        }
    }
#endif // #if defined(_WIN32)
}

CTCP::~CTCP()
{
#ifdef _DEBUG_TCP
    TRACE("CTCP: DTOR\n");
#endif
    clear();

#if defined(_WIN32)
    if (m_iStartupError == TEnumGInsStateType::eGInsStateType__NONE) {
        Winsock().WSACleanup();
    }
    m_iStartupError = TEnumGInsStateType::eGInsStateType__INTERNAL;
#endif // #if defined(_WIN32)
}

void CTCP::clear()
{
#ifdef _DEBUG_TCP
    TRACE("CTCP::clear():\n");
#endif
    CloseSocket(m_SocketListen);
    CloseSocket(m_Socket);
}

//========================================================================
// Wenn der Socket ungleich INVALID_SOCKET ist, wird er geschlossen und
// anschließend auf INVALID_SOCKET gesetzt.
//========================================================================
void CTCP::CloseSocket(SOCKET &Socket)
{
#ifdef _DEBUG_TCP
    TRACE("CTCP::CloseSocket(): Socket = %d\n", Socket);
#endif
    if (Socket != INVALID_SOCKET) {
#if defined(_WIN32)
        Winsock().closesocket(Socket);
#else
        close(Socket);
#endif // #if defined(_WIN32)
        Socket = INVALID_SOCKET;
    }
}

//========================================================================
// Wenn der horchende Socket ungleich INVALID_SOCKET ist, wird er
// geschlossen und anschließend auf INVALID_SOCKET gesetzt.
//========================================================================
void CTCP::ClosePort()
{
#ifdef _DEBUG_TCP
    TRACE("CTCP::ClosePort():m_SocketListen =  %d\n", m_SocketListen);
#endif
    CloseSocket(m_SocketListen);
}

//========================================================================
// Die Verbindung wurde an anderer Stelle aufgebaut. Hier wird nur die
// Socketnummer übergeben. Danach kann genauso zugegriffen werden, als
// wenn die Verbindung direkt von dieser Instanz aufgebaut worden w�re.
//========================================================================
void CTCP::SetSocket(SOCKET Socket)
{
    m_Socket = Socket;
}
SOCKET CTCP::GetSocket(void)
{
	return m_Socket;
}
//========================================================================
// Liefert die IP-Adresse des verbundenen Kommunikationspartners als
// Dotted Dezimal.
//========================================================================
bool CTCP::GetPeerIP(char* lpszDotted)
{
    SOCKADDR_IN PCAddr;
    socklen_t AddrLen = sizeof(PCAddr);
    char* lpszIP;

    *lpszDotted = '\0'; // Leerstring
#if defined(_WIN32)
    if (Winsock().getpeername(m_Socket, (LPSOCKADDR) &PCAddr, &AddrLen) == SOCKET_ERROR) {
#else
    if (getpeername(m_Socket, (LPSOCKADDR) &PCAddr, &AddrLen) == SOCKET_ERROR) {
#endif // #if defined(_WIN32)
        // perror("CTCP::GetPeerIP");
        return false;
    }
#if defined(_WIN32)
    lpszIP = Winsock().inet_ntoa(PCAddr.sin_addr);
#else
    lpszIP = inet_ntoa(PCAddr.sin_addr);
#endif // #if defined(_WIN32)
    if (lpszIP == NULL)
        return false;

#ifdef _DEBUG_TCP
    TRACE("CTCP::GetPeerIP(): lpszIP = %s\n", lpszIP);
#endif
    strcpy(lpszDotted, lpszIP);

    return true;
}

//========================================================================
// Liefert die SOCKADDR_IN Struktur für die Listensocket. Wird benötigt,
// um die Portnummer zu einem Service zu ermitteln, wenn die Nummer vom
// System vergeben wurde.
//========================================================================
bool CTCP::GetListenSocketAddr(SOCKADDR_IN *lpSockAddr)
{
    socklen_t AddrLen = sizeof(SOCKADDR_IN);

#if defined(_WIN32)
    if (Winsock().getsockname(m_SocketListen, (LPSOCKADDR) lpSockAddr, &AddrLen) == SOCKET_ERROR) {
#else
    if (getsockname(m_SocketListen, (LPSOCKADDR) lpSockAddr, &AddrLen) == SOCKET_ERROR) {
#endif // #if defined(_WIN32)
        return false;
    }
    return true;
}

//========================================================================
//
//========================================================================
bool CTCP::OpenPort(unsigned long dwIP, unsigned short wService, int iMaxConnectRequests)
{
    SOCKADDR       sa;
    int            iOpt = 1;
    int            iTmpError;
#ifdef _DEBUG_TCP
    struct in_addr in;
    TRACE("CTCP::OpenPort(): start\n");
#endif

    m_iMaxConnectRequests = iMaxConnectRequests;
    m_SocketListen = INVALID_SOCKET;
    // Socketadresse zusammenbauen
    memset(&((SOCKADDR_IN *) &sa)->sin_zero, 0, sizeof(((SOCKADDR_IN *) &sa)->sin_zero));
    ((SOCKADDR_IN *) &sa)->sin_family = AF_INET;
#if defined(_WIN32)
    ((SOCKADDR_IN *) &sa)->sin_port = Winsock().htons(wService);
    ((SOCKADDR_IN *) &sa)->sin_addr.s_addr = Winsock().htonl(dwIP);

    // �ffnen eines TCP-Socket
    m_SocketListen = Winsock().socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
#else
    ((SOCKADDR_IN *) &sa)->sin_port = htons(wService);
    ((SOCKADDR_IN *) &sa)->sin_addr.s_addr = htonl(dwIP);

    // Öffnen eines TCP-Socket
    m_SocketListen = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
#endif // #if defined(_WIN32)
#ifdef _DEBUG_TCP
    TRACE("CTCP::OpenPort(): sTCP = %d\n", m_SocketListen);
    in.s_addr = ((SOCKADDR_IN *) &sa)->sin_addr.s_addr;
#if defined(_WIN32)
    TRACE("CTCP::OpenPort(): dwIPAddress = %s\n", Winsock().inet_ntoa(in));
#else
    TRACE("CTCP::OpenPort(): dwIPAddress = %s\n", inet_ntoa(in));
#endif // #if defined(_WIN32)
#endif
    if (m_SocketListen == INVALID_SOCKET) {
        perror("NetOpenServerPort socket");
#if defined(_WIN32)
        TRACE("CTCP::OpenPort(): Error %i in funktion socket()!\n", Winsock().WSAGetLastError());
#else
        TRACE("CTCP::OpenPort(): Error %i in funktion socket()!\n", errno);
#endif // #if defined(_WIN32)
        return false;
    }
#if defined(_WIN32)
    if (Winsock().setsockopt(m_SocketListen, SOL_SOCKET, SO_REUSEADDR, (char *) &iOpt, sizeof(int)) == SOCKET_ERROR) {
        TRACE("CTCP::OpenPort(): Error %i in funktion setsockopt() option = SO_REUSEADDR!\n", Winsock().WSAGetLastError());
        iTmpError = Winsock().WSAGetLastError();
#else
    if (setsockopt(m_SocketListen, SOL_SOCKET, SO_REUSEADDR, (char *) &iOpt, sizeof(int)) == SOCKET_ERROR) {
        TRACE("CTCP::OpenPort(): Error %i in funktion setsockopt() option = SO_REUSEADDR!\n", errno);
        iTmpError = errno;
#endif // #if defined(_WIN32)
        CloseSocket(m_SocketListen);
        errno = iTmpError;
        return false;
    }
    // Socket mit sa binden
#if defined(_WIN32)
    if (Winsock().bind(m_SocketListen, &sa, sizeof(SOCKADDR)) == SOCKET_ERROR) {
        TRACE("CTCP::OpenPort(): Error %i in funktion bind()!\n", Winsock().WSAGetLastError());
        iTmpError = Winsock().WSAGetLastError();
#else
    if (bind(m_SocketListen, &sa, sizeof(SOCKADDR)) == SOCKET_ERROR) {
        TRACE("CTCP::OpenPort(): Error %i in funktion bind()!\n", errno);
        iTmpError = errno;
#endif // #if defined(_WIN32)
        CloseSocket(m_SocketListen);
        errno = iTmpError;
        return false;
    }
#ifdef _DEBUG_TCP
    TRACE("CTCP::OpenPort(): TCP_NODELAY\n");
#endif
#if defined(_WIN32)
    if (Winsock().setsockopt(m_SocketListen, IPPROTO_TCP, TCP_NODELAY, (char *) &iOpt, sizeof(int))) {
        TRACE("CTCP::OpenPort(): Error %i in funktion setsockopt() option = TCP_NODELAY!\n", Winsock().WSAGetLastError());
        iTmpError = Winsock().WSAGetLastError();
#else
    if (setsockopt(m_SocketListen, IPPROTO_TCP, TCP_NODELAY, (char *) &iOpt, sizeof(int))) {
        TRACE("CTCP::OpenPort(): Error %i in funktion setsockopt() option = TCP_NODELAY!\n", errno);
        iTmpError = errno;
#endif // #if defined(_WIN32)
        CloseSocket(m_SocketListen);
        errno = iTmpError;
        return false;
    }
#ifdef _DEBUG_TCP
    TRACE("CTCP::OpenPort(): NetListen\n");
#endif
#if defined(_WIN32)
    if (Winsock().listen(m_SocketListen, iMaxConnectRequests) == SOCKET_ERROR) {
        TRACE("CTCP::OpenPort(): Error %i in funktion listen()!\n", Winsock().WSAGetLastError());
        iTmpError = Winsock().WSAGetLastError();
#else
    if (listen(m_SocketListen, iMaxConnectRequests) == SOCKET_ERROR) {
        TRACE("CTCP::OpenPort(): Error %i in funktion listen()!\n", errno);
        iTmpError = errno;
#endif // #if defined(_WIN32)
        CloseSocket(m_SocketListen);
        errno = iTmpError;
        return false;
    }
#ifdef _DEBUG_TCP
    TRACE("CTCP::OpenPort(): end, NOERROR\n");
#endif
    return true;
    // Ende CTCP::OpenPort
}

//========================================================================
//
//========================================================================
bool CTCP::SetSendBufferSize(int iSendBufferSize)
{
    int iOpt = 0;
    int iTmpError;

#ifdef _DEBUG_TCP_
    socklen_t Len = sizeof(int);
#if defined(_WIN32)
    Winsock().getsockopt(m_Socket, SOL_SOCKET, SO_SNDBUF, (char *) &iOpt, &Len);
#else
    getsockopt(m_Socket, SOL_SOCKET, SO_SNDBUF, (char *) &iOpt, &Len);
#endif // #if defined(_WIN32)
    TRACE("CTCP::SetSendBufferSize(): getsockopt(SO_SNDBUF), iOpt = %d\n", iOpt);
#endif
    iOpt = iSendBufferSize / 2; // Muss in 16Bit angegeben werden!
#if defined(_WIN32)
#else
#endif // #if defined(_WIN32)
#if defined(_WIN32)
    if (Winsock().setsockopt(m_Socket, SOL_SOCKET, SO_SNDBUF, (char *) &iOpt, sizeof(int)) == SOCKET_ERROR) {
        TRACE("CTCP::SetSendBufferSize(): Error %i in funktion setsockopt(), iOpt = SO_SNDBUF!\n", Winsock().WSAGetLastError());
        iTmpError = Winsock().WSAGetLastError();
#else
    if (setsockopt(m_Socket, SOL_SOCKET, SO_SNDBUF, (char *) &iOpt, sizeof(int)) == SOCKET_ERROR) {
        TRACE("CTCP::SetSendBufferSize(): Error %i in funktion setsockopt(), iOpt = SO_SNDBUF!\n", errno);
        iTmpError = errno;
#endif // #if defined(_WIN32)
        CloseSocket(m_Socket);
        errno = iTmpError;
        return false;
    }
#ifdef _DEBUG_TCP_
#if defined(_WIN32)
    Winsock().getsockopt(m_Socket, SOL_SOCKET, SO_SNDBUF, (char *) &iOpt, &Len);
#else
    getsockopt(m_Socket, SOL_SOCKET, SO_SNDBUF, (char *) &iOpt, &Len);
#endif // #if defined(_WIN32)
    TRACE("CTCP::SetSendBufferSize(): getsockopt(SO_SNDBUF), iOpt = %ld\n", iOpt);
#endif
    return true;
}

//========================================================================
//
//========================================================================
bool CTCP::ActivateKeepalive()
{
    int iOpt = 1;
    int iTmpError;

#if defined(_WIN32)
    if (Winsock().setsockopt(m_Socket, SOL_SOCKET, SO_KEEPALIVE, (char *) &iOpt, sizeof(int)) == SOCKET_ERROR) {
#else
    if (setsockopt(m_Socket, SOL_SOCKET, SO_KEEPALIVE, (char *) &iOpt, sizeof(int)) == SOCKET_ERROR) {
#endif // #if defined(_WIN32)
        perror("CTCP::ActivateKeepalive(): setsockopt SO_KEEPALIVE");
        iTmpError = errno;
        CloseSocket(m_Socket);
        errno = iTmpError;
        return false;
    }
#if !defined(_WIN32)
    // KeepAliveTimeout auf 1min stellen.
    iOpt = 60;
    if (setsockopt(m_Socket, IPPROTO_TCP, TCP_KEEPIDLE, (char *) &iOpt, sizeof(int)) == SOCKET_ERROR) {
        perror("CTCP::ActivateKeepalive(): setsockopt TCP_KEEPIDLE");
        iTmpError = errno;
        CloseSocket(m_Socket);
        errno = iTmpError;
        return false;
    }
    // KeepAliveIntervall auf 5s stellen.
    iOpt = 5;
    if (setsockopt(m_Socket, IPPROTO_TCP, TCP_KEEPINTVL, (char *) &iOpt, sizeof(int)) == SOCKET_ERROR) {
        perror("CTCP::ActivateKeepalive(): setsockopt TCP_KEEPINTVL");
        iTmpError = errno;
        CloseSocket(m_Socket);
        errno = iTmpError;
        return false;
    }
    // KeepAliveWiederholungen auf 5 stellen.
    iOpt = 5;
    if (setsockopt(m_Socket, IPPROTO_TCP, TCP_KEEPCNT, (char *) &iOpt, sizeof(int)) == SOCKET_ERROR) {
        perror("CTCP::ActivateKeepalive(): setsockopt TCP_KEEPCNT");
        iTmpError = errno;
        CloseSocket(m_Socket);
        errno = iTmpError;
        return false;
    }
#endif // #ifdef __UNDEFINED__
    return true;
}

//========================================================================
//
//========================================================================
bool CTCP::Accept(SOCKET &Socket)
{
    Socket = INVALID_SOCKET;

    if (!Accept()) {
        return false;
    }

    Socket = m_Socket;
    // Den Socket nicht in der Klasse merken!
    m_Socket = INVALID_SOCKET;

    return true;
}

//========================================================================
//
//========================================================================
bool CTCP::Accept(SOCKET &Socket, unsigned long dwTimeout)
{
    Socket = INVALID_SOCKET;

    if (!Accept(dwTimeout)) {
        return false;
    }

    Socket = m_Socket;
    // Den Socket nicht in der Klasse merken!
    m_Socket = INVALID_SOCKET;

    return true;
}

//========================================================================
//
//========================================================================
bool CTCP::Accept(unsigned long dwTimeout)
{
    // fd_set zum Aufruf von select.
    fd_set fds;
    struct timeval tv;
    int ret = 0;

    // Wenn es keinen Socket gibt, darf select nicht aufgerufen werden.
    if (m_SocketListen == INVALID_SOCKET) {
#ifdef _DEBUG_TCP
        TRACE("CTCP::Accept(): Es gibt keinen g�ltigen Socket!\n");
#endif
        errno = TEnumGInsStateType::eGInsStateType__NET_ENOTSOCK;
        return false;
    }
    FD_ZERO(&fds);
    FD_SET(m_SocketListen, &fds);
    tv.tv_sec = dwTimeout / 1000;
    tv.tv_usec = (dwTimeout % 1000) * 1000;

    // An Select wird die Anzahl der zu pr�fenden Sockets übergeben.
    // Das ist der Wert des größten Sockets + 1.
#if defined(_WIN32)
    ret = Winsock().select((int)m_SocketListen + 1, &fds, NULL, NULL, &tv);
#else
    ret = select(m_SocketListen + 1, &fds, NULL, NULL, &tv);
#endif // #if defined(_WIN32)
    if (ret == -1) {
#ifdef _DEBUG_TCP
        TRACE("CTCP::Accept(): select(), ret = -1, errno = %d\n", errno);
#endif
        return false;
    }
    if (ret == 0) {
        // Timeout
        // TRACE("CTCP::Accept():  select(), ret = 0, errno = %d\n", errno);
        errno = TEnumGInsStateType::eGInsStateType__NET_EWOULDBLOCK;
        return false;
    }
    // Der Socket ist lesbar, hat also einen incoming call.
    // Accept() wird nicht blockieren!
    return Accept();
}

//========================================================================
//
//========================================================================
bool CTCP::Accept()
{
    socklen_t iNameLen;
    int iOpt = 1;
    SOCKADDR sa;
    int iTmpError;

#ifdef _DEBUG_TCP
    TRACE("CTCP::Accept(): start\n");
#endif
    iNameLen = sizeof(SOCKADDR);
#if defined(_WIN32)
    m_Socket = Winsock().accept(m_SocketListen, &sa, &iNameLen);
#else
    m_Socket = accept(m_SocketListen, &sa, &iNameLen);
#endif // #if defined(_WIN32)
#ifdef _DEBUG_TCP
    TRACE("CTCP::Accept(): m_Socket = %d\n", m_Socket);
#endif
    if (m_iMaxConnectRequests == 1) {
        // Verhindern, dass weitere Sessions eingegangen werden.
        CloseSocket(m_SocketListen);
    }
    if (m_Socket == INVALID_SOCKET) {
        perror("CTCP::Accept(): accept");
        return false;
    }
#if defined(_WIN32)
    if (Winsock().setsockopt(m_Socket, IPPROTO_TCP, TCP_NODELAY, (char *) &iOpt, sizeof(int)) == -1) {
#else
    if (setsockopt(m_Socket, IPPROTO_TCP, TCP_NODELAY, (char *) &iOpt, sizeof(int)) == -1) {
#endif // #if defined(_WIN32)
        perror("CTCP::Accept(): setsockopt TCP_NODELAY");
        iTmpError = errno;
        CloseSocket(m_Socket);
        errno = iTmpError;
        return false;
    }
#ifdef _DEBUG_TCP
    TRACE("CTCP::Accept(): end, NOERROR\n");
#endif
    return true;
}

//========================================================================
//
//========================================================================
bool CTCP::Call(const std::string& TargetIP, unsigned short TargetPort)
{
#ifdef _DEBUG_TCP
    TRACE("CTCP::Call(): start, TargetIP = %s, TargetPort = %u\n", TargetIP, TargetPort);
#endif
    struct sockaddr_in Target;

    memset(&Target, 0, sizeof(Target));
    Target.sin_family = AF_INET;
#if defined(_WIN32)

	struct hostent *he;
	if ((he = Winsock().gethostbyname(TargetIP.c_str())) == NULL) { 
		return false;
	}

    Target.sin_port = Winsock().htons(TargetPort);
    //Target.sin_addr.s_addr = Winsock().inet_addr(TargetIP.c_str());
	memcpy(&Target.sin_addr, he->h_addr_list[0], he->h_length);
    m_Socket = Winsock().socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (m_Socket == INVALID_SOCKET) {
        return false;
    }
    if (Winsock().connect(m_Socket, (struct sockaddr *) &Target, sizeof(Target)) == SOCKET_ERROR) {
        return false;
    }
#else
    Target.sin_port = htons(TargetPort);
    Target.sin_addr.s_addr = inet_addr(TargetIP.c_str());
    m_Socket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (m_Socket == INVALID_SOCKET) {
        return false;
    }
    if (connect(m_Socket, (struct sockaddr *) &Target, sizeof(Target)) == SOCKET_ERROR) {
        return false;
    }
#endif // #if defined(_WIN32)

#ifdef _DEBUG_TCP
    TRACE("CTCP::Call(): end, NOERROR\n");
#endif
    return true;
}
//========================================================================
//
//========================================================================
bool CTCP::Call(const std::string& TargetIP, unsigned short TargetPort,unsigned long dwTimeout)
{
	int flags = 0,ret=0,error=0;
	socklen_t   len = sizeof(error);

#ifdef _DEBUG_TCP
    TRACE("CTCP::Call(): start, TargetIP = %s, TargetPort = %u\n", TargetIP, TargetPort);
#endif
    struct sockaddr_in Target;

    memset(&Target, 0, sizeof(Target));
    Target.sin_family = AF_INET;
#if defined(_WIN32)
    return false; //windows version not implemented
    Target.sin_port = Winsock().htons(TargetPort);
    Target.sin_addr.s_addr = Winsock().inet_addr(TargetIP.c_str());
    m_Socket = Winsock().socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (m_Socket == INVALID_SOCKET) {
        return false;
    }
    if (Winsock().connect(m_Socket, (struct sockaddr *) &Target, sizeof(Target)) == SOCKET_ERROR) {
        return false;
    }
#else
	fd_set rset, wset;
	struct timeval tv;

    Target.sin_port = htons(TargetPort);
    Target.sin_addr.s_addr = inet_addr(TargetIP.c_str());
    m_Socket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (m_Socket == INVALID_SOCKET) {
        return false;
    }
    //set socket nonblocking flag
    if( (flags = fcntl(m_Socket, F_GETFL, 0)) < 0){
        return false;
    }
    if(fcntl(m_Socket, F_SETFL, flags | O_NONBLOCK) < 0){
        return false;
    }
    FD_ZERO(&rset);
    FD_SET(m_Socket, &rset);
    wset=rset;

    tv.tv_sec = dwTimeout / 1000;
    tv.tv_usec = (dwTimeout % 1000) * 1000;

    ret=connect(m_Socket, (struct sockaddr *) &Target, sizeof(Target));
    if (ret == SOCKET_ERROR) {
        if(errno != EINPROGRESS){
        	return false;
        }
    }
    if(ret!=0)
    {
        //we are waiting for connect to complete now
        if( (ret = select(m_Socket + 1, &rset, &wset, NULL, (dwTimeout) ? &tv : NULL)) < 0)
            return -1;
        if(ret == 0){   //we had a timeout
            errno = ETIMEDOUT;
            return false;
        }

        //we had a positivite return so a descriptor is ready
        if (FD_ISSET(m_Socket, &rset) || FD_ISSET(m_Socket, &wset)){
            if(getsockopt(m_Socket, SOL_SOCKET, SO_ERROR, &error, &len) < 0)
                return false;
        }else
            return false;

        if(error){  //check if we had a socket error
            errno = error;
            return false;
        }
    }
#endif // #if defined(_WIN32)

#ifdef _DEBUG_TCP
    TRACE("CTCP::Call(): end, NOERROR\n");
#endif
    return true;
}

//========================================================================
//
//========================================================================
void CTCP::Hangup()
{
#ifdef _DEBUG_TCP
    TRACE("CTCP::Hangup(): m_Socket = %d\n", m_Socket);
#endif
    CloseSocket(m_Socket);
}

//========================================================================
//
//========================================================================
bool CTCP::Send(const void* lpvData, size_t dwDataLength)
{
    int iFlags = 0;
    int iRet = 0;

#ifdef _DEBUG_TCP
    TRACE("CTCP::Send(): start\n");
#endif
    m_dwSentBytes = 0;
#if defined(_WIN32)
    iRet = Winsock().send(m_Socket, (const char *) lpvData, (int)dwDataLength, iFlags);
#else
    iFlags |= MSG_NOSIGNAL;
    iRet = send(m_Socket, lpvData, dwDataLength, iFlags);
#endif // #if defined(_WIN32)
    if (iRet == SOCKET_ERROR) {
        perror("CTCP::Send()");
        return false;
    } else {
        m_dwSentBytes = iRet;
#ifdef _DEBUG_TCP
        TRACE("CTCP::Send(): end, m_dwSentBytes = %d\n", m_dwSentBytes);
#endif
    }
    return true;
}

//========================================================================
//
//========================================================================
bool CTCP::Receive(void* lpvData, size_t dwDataLength)
{
    int iFlags = 0;
    int iRet = TEnumGInsStateType::eGInsStateType__NONE;

#ifdef _DEBUG_TCP
    TRACE("CTCP::Receive(): start\n");
#endif
    m_dwReceivedBytes = 0;
    if (dwDataLength == 0) {
        return true;
    }
#if defined(_WIN32)
    iRet = Winsock().recv(m_Socket, (char *) lpvData, (int)dwDataLength, iFlags);
#else
    iRet = recv(m_Socket, lpvData, dwDataLength, iFlags);
#endif // #if defined(_WIN32)
#ifdef _DEBUG_TCP
    TRACE("CTCP::Receive(): recv(), iRet = %d\n", iRet);
#endif
    if (iRet == SOCKET_ERROR) {
        perror("CTCP::Receive()");
        return false;
    } else {
        m_dwReceivedBytes = iRet;
        if (m_dwReceivedBytes == 0) {
            errno = TEnumGInsStateType::eGInsStateType__NET_CONNECTION_CLOSED;
#ifdef _DEBUG_TCP
            TRACE("CTCP::Receive(): end, TEnumGInsStateType::eGInsStateType__NET_CONNECTION_CLOSED\n");
#endif
            return false;
        }
#ifdef _DEBUG_TCP
        TRACE("CTCP::Receive(): end, m_dwReceivedBytes = %d\n", m_dwReceivedBytes);
#endif
    }
    return true;
}

//========================================================================
//
//========================================================================
int CTCP::Receive(void* lpvData, size_t dwDataLength, unsigned long dwTimeout)
{
    // fd_set zum Aufruf von select.
    fd_set readfds;
    struct timeval tv;
    int readable = 0;
    int iRet = TEnumGInsStateType::eGInsStateType__NONE;

    // Wenn es keinen Socket gibt, darf select nicht aufgerufen werden.
    if (m_Socket == INVALID_SOCKET) {
#ifdef _DEBUG_TCP
        TRACE("CTCP::Receive(): Es gibt keinen g�ltigen Socket!\n");
#endif
        iRet = TEnumGInsStateType::eGInsStateType__NET_ENOTSOCK;
        return iRet;
    }
    FD_ZERO(&readfds);
    FD_SET(m_Socket, &readfds);
    tv.tv_sec = dwTimeout / 1000;
    tv.tv_usec = (dwTimeout % 1000) * 1000;
    
    // An Select wird die Anzahl der zu prüfenden Sockets übergeben.
    // Das ist der Wert des größten Sockets + 1.
#if defined(_WIN32)
    readable = Winsock().select((int)m_Socket + 1, &readfds, NULL, NULL, &tv);
#else
    readable = select(m_Socket + 1, &readfds, NULL, NULL, &tv);
#endif // #if defined(_WIN32)
    if (readable == -1) {
#if defined(_WIN32)
        iRet = TEnumGInsStateType::eGInsStateType__NET_WSAERR_START + WSABASEERR - Winsock().WSAGetLastError();
#else
        iRet = TEnumGInsStateType::eGInsStateType__NET_WSAERR_START + errno;
#endif // #if defined(_WIN32)
#ifdef _DEBUG_TCP
        TRACE("CTCP::Receive(): end, readable = -1, iRet = %i\n", iRet);
#endif
        return iRet;
    }
    if (readable == 0) {
        // Timeout
        // TRACE("CTCP::Receive: readable = 0 errno = %d!\n", errno);
        iRet = TEnumGInsStateType::eGInsStateType__NET_ETIMEDOUT;
        return iRet;
    }
    
    // Der Socket ist lesbar, hat also Daten im Empfangspuffer.
    bool bRet = Receive(lpvData, dwDataLength);
    if (true != bRet) {
#if defined(_WIN32)
        iRet = TEnumGInsStateType::eGInsStateType__NET_WSAERR_START + WSABASEERR - Winsock().WSAGetLastError();
#else
        iRet = TEnumGInsStateType::eGInsStateType__NET_WSAERR_START + errno;
#endif // #if defined(_WIN32)
    }
    return iRet;
}

//========================================================================
//
//========================================================================
bool CTCP::GetLocalConnectedIPAndPort(std::string& IP, std::string& Port)
{
    struct sockaddr_in SockAddr;
    socklen_t SockLen = sizeof(SockAddr);
    bool bRet = false;
    char szTmp[33];
    unsigned short usPort = 0;

    IP = "";
    Port = "";
    while(true) {
        if (m_Socket == INVALID_SOCKET) {
            break;
        }
#if defined(_WIN32)
        if (Winsock().getsockname(m_Socket, (struct sockaddr *) &SockAddr, &SockLen) == SOCKET_ERROR) {
#else
        if (getsockname(m_Socket, (struct sockaddr *) &SockAddr, &SockLen) == SOCKET_ERROR) {
#endif // #if defined(_WIN32)
            break;
        }
#if defined(_WIN32)
        IP = Winsock().inet_ntoa(SockAddr.sin_addr);
        usPort = Winsock().ntohs(SockAddr.sin_port);
#else
        IP = inet_ntoa(SockAddr.sin_addr);
        usPort = ntohs(SockAddr.sin_port);
#endif // #if defined(_WIN32)
        if (usPort == 0){
            break;
        }
        sprintf(szTmp, "%u", usPort);
        Port = szTmp;
        bRet = true;
        break;
    }
    return bRet;
}

//========================================================================
//
//========================================================================
void CTCP::GetPort(unsigned short& usPort)
{
    struct sockaddr_in SockAddr;
    socklen_t SockLen = sizeof(SockAddr);
    SOCKET s = m_Socket;

    usPort = 0;
    if (s == INVALID_SOCKET) {
        s = m_SocketListen;
    }
    if (s == INVALID_SOCKET) {
        return;
    }
#if defined(_WIN32)
    if (Winsock().getsockname(s, (struct sockaddr *) &SockAddr, &SockLen) == SOCKET_ERROR) {
#else
    if (getsockname(s, (struct sockaddr *) &SockAddr, &SockLen) == SOCKET_ERROR) {
#endif // #if defined(_WIN32)
        return;
    }
#if defined(_WIN32)
    usPort = Winsock().ntohs(SockAddr.sin_port);
#else
    usPort = ntohs(SockAddr.sin_port);
#endif // #if defined(_WIN32)
}

#if !defined(_WIN32)
//========================================================================
//
//========================================================================
bool CTCP::GetDeviceIP(const char* lpszDevice, unsigned long &dwIP)
{
    SOCKET Socket;
    struct ifreq ifr;
    struct sockaddr_in *p;
    bool bRet = false;

#ifdef _DEBUG_TCP
    TRACE("CTCP::GetDeviceIP(): start, lpszDevice = %s\n", lpszDevice);
#endif

    // Öffnen eines TCP-Socket
    Socket = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
#ifdef _USE_PTHREAD
    pthread_cleanup_push(CU_CloseSocket, (void *) &Socket);
#endif
#ifdef _DEBUG_TCP
    TRACE("CTCP::GetDeviceIP(): sTCP = %d\n", Socket);
#endif
    if (Socket == INVALID_SOCKET) {
        perror("GetDeviceIP socket");
        goto Exit;
    }
    strcpy(ifr.ifr_name, lpszDevice);
    ifr.ifr_addr.sa_family = AF_INET;

    if (ioctl(Socket, SIOCGIFADDR, &ifr) == 0) {
        p = (struct sockaddr_in*) &(ifr.ifr_ifru.ifru_addr);
        dwIP = p->sin_addr.s_addr;
#ifdef _DEBUG_TCP
        struct in_addr in;

        in.s_addr = dwIP;
        TRACE("CTCP::GetDeviceIP(): dwIPAddress = %s!\n", inet_ntoa(in));
#endif
        bRet = true;
    }
#ifdef _DEBUG_TCP
    else {
        perror("CTCP::GetDeviceIP(): ioctl failed");
    }
#endif

Exit:
#ifdef _USE_PTHREAD
    pthread_cleanup_pop(1);
#endif
#ifdef _DEBUG_TCP
    TRACE("CTCP::GetDeviceIP(): end, bRet = %s\n", bRet == true ? "true" : "false");
#endif
    return bRet;
}
#endif // #if !defined(_WIN32)
