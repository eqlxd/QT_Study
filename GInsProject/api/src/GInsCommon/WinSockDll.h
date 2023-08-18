//=============================================================================
// WinSockDll.h
// Klasse CWinSockDll
//=============================================================================
#if !defined (_WINSOCKDLL_H)
#define _WINSOCKDLL_H

//=============================================================================
// Include
//=============================================================================
#include "PDllEx.h"
#include <winsock2.h>

//=============================================================================
// Define
//=============================================================================


//=============================================================================
// Vorwärtsdeklarationen
//=============================================================================


//=============================================================================
// Typedef
//=============================================================================


//=============================================================================
// CWinSockDll
// Interface für WinSock-DLL
//=============================================================================
class CWinSockDll : public PDLLEX
{
    DECLARE_CLASS_EX(CWinSockDll)
        
public:
    DECLARE_FUNCTION2_EX(int, PASCAL FAR, WSAFDIsSet, __WSAFDIsSet, SOCKET, fd_set FAR *);
    DECLARE_FUNCTION3_EX(SOCKET, WSAAPI, accept, accept, SOCKET /*s*/, struct sockaddr FAR * /*addr*/, int FAR * /*addrlen*/);
    DECLARE_FUNCTION3_EX(int, WSAAPI, bind, bind, SOCKET /*s*/, const struct sockaddr FAR * /*name*/, int /*namelen*/);
    DECLARE_FUNCTION1_EX(int, WSAAPI, closesocket, closesocket, SOCKET /*s*/);
    DECLARE_FUNCTION3_EX(int, WSAAPI, connect, connect, SOCKET /*s*/, const struct sockaddr FAR * /*name*/, int /*namelen*/);
    DECLARE_FUNCTION3_EX(int, WSAAPI, ioctlsocket, ioctlsocket, SOCKET /*s*/, long /*cmd*/, u_long FAR * /*argp*/);
    DECLARE_FUNCTION3_EX(int, WSAAPI, getpeername, getpeername, SOCKET /*s*/, struct sockaddr FAR * /*name*/, int FAR * /*namelen*/);
    DECLARE_FUNCTION3_EX(int, WSAAPI, getsockname, getsockname, SOCKET /*s*/, struct sockaddr FAR * /*name*/, int FAR * /*namelen*/);
    DECLARE_FUNCTION5_EX(int, WSAAPI, getsockopt, getsockopt, SOCKET /*s*/, int /*level*/, int /*optname*/, char FAR * /*optval*/, int FAR * /*optlen*/);
    DECLARE_FUNCTION1_EX(u_long, WSAAPI, htonl, htonl, u_long /*hostlong*/);
    DECLARE_FUNCTION1_EX(u_short, WSAAPI, htons, htons, u_short /*hostshort*/);
    DECLARE_FUNCTION1_EX(unsigned long, WSAAPI, inet_addr, inet_addr, const char FAR * /*cp*/);
    DECLARE_FUNCTION1_EX(char FAR *, WSAAPI, inet_ntoa, inet_ntoa, struct in_addr /*in*/);
    DECLARE_FUNCTION2_EX(int, WSAAPI, listen, listen, SOCKET /*s*/, int /*backlog*/);
    DECLARE_FUNCTION1_EX(u_long, WSAAPI, ntohl, ntohl, u_long /*netlong*/);
    DECLARE_FUNCTION1_EX(u_short, WSAAPI, ntohs, ntohs, u_short /*netshort*/);
    DECLARE_FUNCTION4_EX(int, WSAAPI, recv, recv, SOCKET /*s*/, char FAR * /*buf*/, int /*len*/, int /*flags*/);
    DECLARE_FUNCTION6_EX(int, WSAAPI, recvfrom, recvfrom, SOCKET /*s*/, char FAR * /*buf*/, int /*len*/, int /*flags*/, struct sockaddr FAR * /*from*/, int FAR * /*fromlen*/);
    DECLARE_FUNCTION5_EX(int, WSAAPI, select, select, int /*nfds*/, fd_set FAR * /*readfds*/, fd_set FAR * /*writefds*/, fd_set FAR * /*exceptfds*/, const struct timeval FAR * /*timeout*/);
    DECLARE_FUNCTION4_EX(int, WSAAPI, send, send, SOCKET /*s*/, const char FAR * /*buf*/, int /*len*/, int /*flags*/);
    DECLARE_FUNCTION6_EX(int, WSAAPI, sendto, sendto, SOCKET /*s*/, const char FAR * /*buf*/, int /*len*/, int /*flags*/, const struct sockaddr FAR * /*to*/, int /*tolen*/);
    DECLARE_FUNCTION5_EX(int, WSAAPI, setsockopt, setsockopt, SOCKET /*s*/, int /*level*/, int /*optname*/, const char FAR * /*optval*/, int /*optlen*/);
    DECLARE_FUNCTION2_EX(int, WSAAPI, shutdown, shutdown, SOCKET /*s*/, int /*how*/);
    DECLARE_FUNCTION3_EX(SOCKET, WSAAPI, socket, socket, int /*af*/, int /*type*/, int /*protocol*/);
    DECLARE_FUNCTION3_EX(struct hostent FAR *, WSAAPI, gethostbyaddr, gethostbyaddr, const char FAR * /*addr*/, int /*len*/, int /*type*/);
    DECLARE_FUNCTION1_EX(struct hostent FAR *, WSAAPI, gethostbyname, gethostbyname, const char FAR * /*name*/);
    DECLARE_FUNCTION2_EX(int, WSAAPI, gethostname, gethostname, char FAR * /*name*/, int /*namelen*/);
    DECLARE_FUNCTION2_EX(struct servent FAR *, WSAAPI, getservbyport, getservbyport, int /*port*/, const char FAR * /*proto*/);
    DECLARE_FUNCTION2_EX(struct servent FAR *, WSAAPI, getservbyname, getservbyname, const char FAR * /*name*/, const char FAR * /*proto*/);
    DECLARE_FUNCTION1_EX(struct protoent FAR *, WSAAPI, getprotobynumber, getprotobynumber, int /*number*/);
    DECLARE_FUNCTION1_EX(struct protoent FAR *, WSAAPI, getprotobyname, getprotobyname, const char FAR * /*name*/);
    DECLARE_FUNCTION2_EX(int, WSAAPI, WSAStartup, WSAStartup, WORD /*wVersionRequested*/, LPWSADATA /*lpWSAData*/);
    DECLARE_FUNCTION0_EX(int, WSAAPI, WSACleanup, WSACleanup);
    DECLARE_FUNCTION1_VOID_EX(void, WSAAPI, WSASetLastError, WSASetLastError, int /*iError*/);
    DECLARE_FUNCTION0_EX(int, WSAAPI, WSAGetLastError, WSAGetLastError);
    DECLARE_FUNCTION0_EX(BOOL, WSAAPI, WSAIsBlocking, WSAIsBlocking);
    DECLARE_FUNCTION0_EX(int, WSAAPI, WSAUnhookBlockingHook, WSAUnhookBlockingHook);
    DECLARE_FUNCTION1_EX(FARPROC, WSAAPI, WSASetBlockingHook, WSASetBlockingHook, FARPROC /*lpBlockFunc*/);
    DECLARE_FUNCTION0_EX(int, WSAAPI, WSACancelBlockingCall, WSACancelBlockingCall);
    DECLARE_FUNCTION6_EX(HANDLE, WSAAPI, WSAAsyncGetServByName, WSAAsyncGetServByName, HWND /*hWnd*/, u_int /*wMsg*/, const char FAR * /*name*/, const char FAR * /*proto*/, char FAR * /*buf*/, int /*buflen*/);
    DECLARE_FUNCTION6_EX(HANDLE, WSAAPI, WSAAsyncGetServByPort, WSAAsyncGetServByPort, HWND /*hWnd*/, u_int /*wMsg*/, int /*port*/, const char FAR * /*proto*/, char FAR * /*buf*/, int /*buflen*/);
    DECLARE_FUNCTION5_EX(HANDLE, WSAAPI, WSAAsyncGetProtoByName, WSAAsyncGetProtoByName, HWND /*hWnd*/, u_int /*wMsg*/, const char FAR * /*name*/, char FAR * /*buf*/, int /*buflen*/);
    DECLARE_FUNCTION5_EX(HANDLE, WSAAPI, WSAAsyncGetProtoByNumber, WSAAsyncGetProtoByNumber, HWND /*hWnd*/, u_int /*wMsg*/, int /*number*/, char FAR * /*buf*/, int /*buflen*/);
    DECLARE_FUNCTION5_EX(HANDLE, WSAAPI, WSAAsyncGetHostByName, WSAAsyncGetHostByName, HWND /*hWnd*/, u_int /*wMsg*/, const char FAR * /*name*/, char FAR * /*buf*/, int /*buflen*/);
    DECLARE_FUNCTION7_EX(HANDLE, WSAAPI, WSAAsyncGetHostByAddr, WSAAsyncGetHostByAddr, HWND /*hWnd*/, u_int /*wMsg*/, const char FAR * /*addr*/, int /*len*/, int /*type*/, char FAR * /*buf*/, int /*buflen*/);
    DECLARE_FUNCTION1_EX(int, WSAAPI, WSACancelAsyncRequest, WSACancelAsyncRequest, HANDLE /*AsyncTaskHandle*/);
    DECLARE_FUNCTION4_EX(int, WSAAPI, WSAAsyncSelect, WSAAsyncSelect, SOCKET /*s*/, HWND /*hWnd*/, u_int /*wMsg*/, long /*lEvent*/);
    DECLARE_FUNCTION5_EX(SOCKET, WSAAPI, WSAAccept, WSAAccept, SOCKET /*s*/, struct sockaddr FAR * /*addr*/, LPINT /*addrlen*/, LPCONDITIONPROC /*lpfnCondition*/, DWORD /*dwCallbackData*/);
    DECLARE_FUNCTION1_EX(BOOL, WSAAPI, WSACloseEvent, WSACloseEvent, WSAEVENT /*hEvent*/);
    DECLARE_FUNCTION7_EX(int, WSAAPI, WSAConnect, WSAConnect, SOCKET /*s*/, const struct sockaddr FAR * /*name*/, int /*namelen*/, LPWSABUF /*lpCallerData*/, LPWSABUF /*lpCalleeData*/, LPQOS /*lpSQOS*/, LPQOS /*lpGQOS*/);
    DECLARE_FUNCTION0_EX(WSAEVENT, WSAAPI, WSACreateEvent, WSACreateEvent);

#ifdef UNICODE
    DECLARE_FUNCTION3_EX(int, WSAAPI, WSADuplicateSocket, WSADuplicateSocketW, SOCKET /*s*/, DWORD /*dwProcessId*/, LPWSAPROTOCOL_INFOW /*lpProtocolInfo*/);
#else
    DECLARE_FUNCTION3_EX(int, WSAAPI, WSADuplicateSocket, WSADuplicateSocketA, SOCKET /*s*/, DWORD /*dwProcessId*/, LPWSAPROTOCOL_INFOA /*lpProtocolInfo*/);
#endif // !UNICODE

    DECLARE_FUNCTION3_EX(int, WSAAPI, WSAEnumNetworkEvents, WSAEnumNetworkEvents, SOCKET /*s*/, WSAEVENT /*hEventObject*/, LPWSANETWORKEVENTS /*lpNetworkEvents*/);

#ifdef UNICODE
    DECLARE_FUNCTION3_EX(int, WSAAPI, WSAEnumProtocols, WSAEnumProtocolsW, LPINT /*lpiProtocols*/, LPWSAPROTOCOL_INFOW /*lpProtocolBuffer*/, LPDWORD /*lpdwBufferLength*/);
#else
    DECLARE_FUNCTION3_EX(int, WSAAPI, WSAEnumProtocols, WSAEnumProtocolsA, LPINT /*lpiProtocols*/, LPWSAPROTOCOL_INFOA /*lpProtocolBuffer*/, LPDWORD /*lpdwBufferLength*/);
#endif // !UNICODE

    DECLARE_FUNCTION3_EX(int, WSAAPI, WSAEventSelect, WSAEventSelect, SOCKET /*s*/, WSAEVENT /*hEventObject*/, long /*lNetworkEvents*/);
    DECLARE_FUNCTION5_EX(BOOL, WSAAPI, WSAGetOverlappedResult, WSAGetOverlappedResult, SOCKET /*s*/, LPWSAOVERLAPPED /*lpOverlapped*/, LPDWORD /*lpcbTransfer*/, BOOL /*fWait*/, LPDWORD /*lpdwFlags*/);
    DECLARE_FUNCTION3_EX(BOOL, WSAAPI, WSAGetQOSByName, WSAGetQOSByName, SOCKET /*s*/, LPWSABUF /*lpQOSName*/, LPQOS /*lpQOS*/);
    DECLARE_FUNCTION3_EX(int, WSAAPI, WSAHtonl, WSAHtonl, SOCKET /*s*/, u_long /*hostlong*/, u_long FAR * /*lpnetlong*/);
    DECLARE_FUNCTION3_EX(int, WSAAPI, WSAHtons, WSAHtons, SOCKET /*s*/, u_short /*hostshort*/, u_short FAR * /*lpnetshort*/);
    DECLARE_FUNCTION9_EX(int, WSAAPI, WSAIoctl, WSAIoctl, SOCKET /*s*/, DWORD /*dwIoControlCode*/, LPVOID /*lpvInBuffer*/, DWORD /*cbInBuffer*/, LPVOID /*lpvOutBuffer*/, DWORD /*cbOutBuffer*/, LPDWORD /*lpcbBytesReturned*/, LPWSAOVERLAPPED /*lpOverlapped*/, LPWSAOVERLAPPED_COMPLETION_ROUTINE /*lpCompletionRoutine*/);
    DECLARE_FUNCTION8_EX(SOCKET, WSAAPI, WSAJoinLeaf, WSAJoinLeaf, SOCKET /*s*/, const struct sockaddr FAR * /*name*/, int /*namelen*/, LPWSABUF /*lpCallerData*/, LPWSABUF /*lpCalleeData*/, LPQOS /*lpSQOS*/, LPQOS /*lpGQOS*/, DWORD /*dwFlags*/);
    DECLARE_FUNCTION3_EX(int, WSAAPI, WSANtohl, WSANtohl, SOCKET /*s*/, u_long /*netlong*/, u_long FAR * /*lphostlong*/);
    DECLARE_FUNCTION3_EX(int, WSAAPI, WSANtohs, WSANtohs, SOCKET /*s*/, u_short /*netshort*/, u_short FAR * /*lphostshort*/);
    DECLARE_FUNCTION7_EX(int, WSAAPI, WSARecv, WSARecv, SOCKET /*s*/, LPWSABUF /*lpBuffers*/, DWORD /*dwBufferCount*/, LPDWORD /*lpNumberOfBytesRecvd*/, LPDWORD /*lpFlags*/, LPWSAOVERLAPPED /*lpOverlapped*/, LPWSAOVERLAPPED_COMPLETION_ROUTINE /*lpCompletionRoutine*/);
    DECLARE_FUNCTION2_EX(int, WSAAPI, WSARecvDisconnect, WSARecvDisconnect, SOCKET /*s*/, LPWSABUF /*lpInboundDisconnectData*/);
    DECLARE_FUNCTION9_EX(int, WSAAPI, WSARecvFrom, WSARecvFrom, SOCKET /*s*/, LPWSABUF /*lpBuffers*/, DWORD /*dwBufferCount*/, LPDWORD /*lpNumberOfBytesRecvd*/, LPDWORD /*lpFlags*/, struct sockaddr FAR * /*lpFrom*/, LPINT /*lpFromlen*/, LPWSAOVERLAPPED /*lpOverlapped*/, LPWSAOVERLAPPED_COMPLETION_ROUTINE /*lpCompletionRoutine*/);
    DECLARE_FUNCTION1_EX(BOOL, WSAAPI, WSAResetEvent, WSAResetEvent, WSAEVENT /*hEvent*/);
    DECLARE_FUNCTION7_EX(int, WSAAPI, WSASend, WSASend, SOCKET /*s*/, LPWSABUF /*lpBuffers*/, DWORD /*dwBufferCount*/, LPDWORD /*lpNumberOfBytesSent*/, DWORD /*dwFlags*/, LPWSAOVERLAPPED /*lpOverlapped*/, LPWSAOVERLAPPED_COMPLETION_ROUTINE /*lpCompletionRoutine*/);
    DECLARE_FUNCTION2_EX(int, WSAAPI, WSASendDisconnect, WSASendDisconnect, SOCKET /*s*/, LPWSABUF /*lpOutboundDisconnectData*/);
    DECLARE_FUNCTION9_EX(int, WSAAPI, WSASendTo, WSASendTo, SOCKET /*s*/, LPWSABUF /*lpBuffers*/, DWORD /*dwBufferCount*/, LPDWORD /*lpNumberOfBytesSent*/, DWORD /*dwFlags*/, const struct sockaddr FAR * /*lpTo*/, int /*iTolen*/, LPWSAOVERLAPPED /*lpOverlapped*/, LPWSAOVERLAPPED_COMPLETION_ROUTINE /*lpCompletionRoutine*/);
    DECLARE_FUNCTION1_EX(BOOL, WSAAPI, WSASetEvent, WSASetEvent, WSAEVENT /*hEvent*/);

#ifdef UNICODE
    DECLARE_FUNCTION6_EX(SOCKET, WSAAPI, WSASocket, WSASocketW, int /*af*/, int /*type*/, int /*protocol*/, LPWSAPROTOCOL_INFOW /*lpProtocolInfo*/, GROUP /*g*/, DWORD /*dwFlags*/);
#else
    DECLARE_FUNCTION6_EX(SOCKET, WSAAPI, WSASocket, WSASocketA, int /*af*/, int /*type*/, int /*protocol*/, LPWSAPROTOCOL_INFOA /*lpProtocolInfo*/, GROUP /*g*/, DWORD /*dwFlags*/);
#endif // !UNICODE

    DECLARE_FUNCTION5_EX(DWORD, WSAAPI, WSAWaitForMultipleEvents, WSAWaitForMultipleEvents, DWORD /*cEvents*/, const WSAEVENT FAR * /*lphEvents*/, BOOL /*fWaitAll*/, DWORD /*dwTimeout*/, BOOL /*fAlertable*/);

#ifdef UNICODE
    DECLARE_FUNCTION5_EX(INT, WSAAPI, WSAAddressToString, WSAAddressToStringW, LPSOCKADDR /*lpsaAddress*/, DWORD /*dwAddressLength*/, LPWSAPROTOCOL_INFOW /*lpProtocolInfo*/, LPWSTR /*lpszAddressString*/, LPDWORD /*lpdwAddressStringLength*/);
#else
    DECLARE_FUNCTION5_EX(INT, WSAAPI, WSAAddressToString, WSAAddressToStringA, LPSOCKADDR /*lpsaAddress*/, DWORD /*dwAddressLength*/, LPWSAPROTOCOL_INFOA /*lpProtocolInfo*/, LPSTR /*lpszAddressString*/, LPDWORD /*lpdwAddressStringLength*/);
#endif // !UNICODE

#ifdef UNICODE
    DECLARE_FUNCTION5_EX(INT, WSAAPI, WSAStringToAddress, WSAStringToAddressW, LPWSTR /*AddressString*/, INT /*AddressFamily*/, LPWSAPROTOCOL_INFOW /*lpProtocolInfo*/, LPSOCKADDR /*lpAddress*/, LPINT /*lpAddressLength*/);
#else
    DECLARE_FUNCTION5_EX(INT, WSAAPI, WSAStringToAddress, WSAStringToAddressA, LPWSTR /*AddressString*/, INT /*AddressFamily*/, LPWSAPROTOCOL_INFOA /*lpProtocolInfo*/, LPSOCKADDR /*lpAddress*/, LPINT /*lpAddressLength*/);
#endif // !UNICODE

#ifdef UNICODE
    DECLARE_FUNCTION3_EX(INT, WSAAPI, WSALookupServiceBegin, WSALookupServiceBeginW, LPWSAQUERYSETW /*lpqsRestrictions*/, DWORD /*dwControlFlags*/, LPHANDLE /*lphLookup*/);
#else
    DECLARE_FUNCTION3_EX(INT, WSAAPI, WSALookupServiceBegin, WSALookupServiceBeginA, LPWSAQUERYSETA /*lpqsRestrictions*/, DWORD /*dwControlFlags*/, LPHANDLE /*lphLookup*/);
#endif // !UNICODE

#ifdef UNICODE
    DECLARE_FUNCTION4_EX(INT, WSAAPI, WSALookupServiceNext, WSALookupServiceNextW, HANDLE /*hLookup*/, DWORD /*dwControlFlags*/, LPDWORD /*lpdwBufferLength*/, LPWSAQUERYSETW /*lpqsResults*/);
#else
    DECLARE_FUNCTION4_EX(INT, WSAAPI, WSALookupServiceNext, WSALookupServiceNextA, HANDLE /*hLookup*/, DWORD /*dwControlFlags*/, LPDWORD /*lpdwBufferLength*/, LPWSAQUERYSETA /*lpqsResults*/);
#endif // !UNICODE

    DECLARE_FUNCTION1_EX(INT, WSAAPI, WSALookupServiceEnd, WSALookupServiceEnd, HANDLE /*hLookup*/);

#ifdef UNICODE
    DECLARE_FUNCTION1_EX(INT, WSAAPI, WSAInstallServiceClass, WSAInstallServiceClassW, LPWSASERVICECLASSINFOW /*lpServiceClassInfo*/);
#else
    DECLARE_FUNCTION1_EX(INT, WSAAPI, WSAInstallServiceClass, WSAInstallServiceClassA, LPWSASERVICECLASSINFOA /*lpServiceClassInfo*/);
#endif // !UNICODE

    DECLARE_FUNCTION1_EX(INT, WSAAPI, WSARemoveServiceClass, WSARemoveServiceClass, LPGUID /*lpServiceClassId*/);

#ifdef UNICODE
    DECLARE_FUNCTION4_EX(INT, WSAAPI, WSAGetServiceClassInfo, WSAGetServiceClassInfoW, LPGUID /*lpProviderId*/, LPGUID /*lpServiceClassId*/, LPDWORD /*lpdwBufSize*/, LPWSASERVICECLASSINFOW /*lpServiceClassInfo*/);
#else
    DECLARE_FUNCTION4_EX(INT, WSAAPI, WSAGetServiceClassInfo, WSAGetServiceClassInfoA, LPGUID /*lpProviderId*/, LPGUID /*lpServiceClassId*/, LPDWORD /*lpdwBufSize*/, LPWSASERVICECLASSINFOA /*lpServiceClassInfo*/);
#endif // !UNICODE

#ifdef UNICODE
    DECLARE_FUNCTION2_EX(INT, WSAAPI, WSAEnumNameSpaceProviders, WSAEnumNameSpaceProvidersW, LPDWORD /*lpdwBufferLength*/, LPWSANAMESPACE_INFOW /*lpnspBuffer*/);
#else
    DECLARE_FUNCTION2_EX(INT, WSAAPI, WSAEnumNameSpaceProviders, WSAEnumNameSpaceProvidersA, LPDWORD /*lpdwBufferLength*/, LPWSANAMESPACE_INFOA /*lpnspBuffer*/);
#endif // !UNICODE

#ifdef UNICODE
    DECLARE_FUNCTION3_EX(INT, WSAAPI, WSAGetServiceClassNameByClassId, WSAGetServiceClassNameByClassIdW, LPGUID /*lpServiceClassId*/, LPWSTR /*lpszServiceClassName*/, LPDWORD /*lpdwBufferLength*/);
#else
    DECLARE_FUNCTION3_EX(INT, WSAAPI, WSAGetServiceClassNameByClassId, WSAGetServiceClassNameByClassIdA, LPGUID /*lpServiceClassId*/, LPSTR /*lpszServiceClassName*/, LPDWORD /*lpdwBufferLength*/);
#endif // !UNICODE

#ifdef UNICODE
    DECLARE_FUNCTION3_EX(INT, WSAAPI, WSASetService, WSASetServiceW, LPWSAQUERYSETW /*lpqsRegInfo*/, WSAESETSERVICEOP /*essoperation*/, DWORD /*dwControlFlags*/);
#else
    DECLARE_FUNCTION3_EX(INT, WSAAPI, WSASetService, WSASetServiceA, LPWSAQUERYSETA /*lpqsRegInfo*/, WSAESETSERVICEOP /*essoperation*/, DWORD /*dwControlFlags*/);
#endif // !UNICODE

    DECLARE_FUNCTION3_EX(INT, WSAAPI, WSAProviderConfigChange, WSAProviderConfigChange, LPHANDLE /*lpNotificationHandle*/, LPWSAOVERLAPPED /*lpOverlapped*/, LPWSAOVERLAPPED_COMPLETION_ROUTINE /*lpCompletionRoutine*/ );
};

//=============================================================================
//=============================================================================
#endif // #if !defined (_WINSOCKDLL_H)