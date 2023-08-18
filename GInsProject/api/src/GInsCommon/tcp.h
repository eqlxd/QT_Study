#if !defined(_TCP_H_INCLUDED_)
#define _TCP_H_INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

//========================================================================
// Include
//========================================================================
#if defined(_WIN32)
#include <winsock2.h>
#include <windows.h>

typedef int socklen_t;
#else
#include <sys/socket.h>
#include <netinet/tcp.h>
#include "ginssocket.h"
#endif /* #if defined(_WIN32) */

#include <string>
#include <errno.h>

//========================================================================
// Definitionen, Konstanten
//========================================================================
#define TCP_PAKET_DATASIZE          1460

//========================================================================
// CTCP_Cleanup
//========================================================================
void CTCP_Cleanup(void *arg);

//========================================================================
// CTCP
//========================================================================
class CTCP
{
public:
	CTCP();
	~CTCP();
	void clear();
	void SetSocket(SOCKET Socket);
	SOCKET GetSocket(void);
	void CloseSocket(SOCKET &Socket);
	bool OpenPort(unsigned long dwIP, unsigned short wService, int iMaxConnectRequests);
	void ClosePort();
	bool ActivateKeepalive();
	bool Accept(SOCKET &Socket);
	bool Accept(SOCKET &Socket, unsigned long dwTimeout);
	bool Accept(unsigned long dwTimeout);
	bool Accept();
	void Hangup();
	bool Receive(void* lpvData, size_t dwDataLength);
	int  Receive(void* lpvData, size_t dwDataLength, unsigned long dwTimeout); // return: GINSERR_*
	bool Send(const void* lpvData, size_t dwDataLength);
	bool GetListenSocketAddr(SOCKADDR_IN *lpSockAddr);
	bool GetPeerIP(char* lpszDotted);
	bool GetDeviceIP(const char* lpcszDevice, unsigned long &dwIP);
	bool SetSendBufferSize(int iSendBufferSize);
	bool Call(const std::string& TargetIP, unsigned short TargetPort);
	//Use nonblocking i/o
	bool Call(const std::string& TargetIP, unsigned short TargetPort,unsigned long dwTimeout);
	bool GetLocalConnectedIPAndPort(std::string& IP, std::string& Port);
    void GetPort(unsigned short& Port);

	unsigned long m_dwReceivedBytes;
	unsigned long m_dwSentBytes;

protected:
	// Dies ist der TCP-Socket, über den das Gerät kontaktiert werden kann.
	SOCKET m_SocketListen;
    
	// Dies ist der TCP-Socket, über den das Gerät mit dem PC verbunden ist.
	SOCKET m_Socket;
    
	// Maximale Anzahl von Verbindungsrequests, die gleichzeitig auf Bearbeitung
	// warten dürfen. Entscheidet auch darüber, ob nach dem Zustandekommen einer
	// Verbindung der horchende Socket geschlossen wird.
	int m_iMaxConnectRequests;

#if defined(_WIN32)
	WSADATA m_WinSockData;
	int     m_iStartupError;
#endif /* #if defined(_WIN32) */
};

//========================================================================
//========================================================================
#endif // !defined(_TCP_H_INCLUDED_)
