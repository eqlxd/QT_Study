#include "ginsstate.h"
#include <string.h>
#ifdef _MSC_VER
    #include <snprintf.h>
#endif

//================================================================================================================================================
// MakeStateFile V1.70 2021-04-09 - automatically generated file, do not edit!
//================================================================================================================================================

//================================================================================================================================================
// Functions
//================================================================================================================================================
TGInsState GINSSTATE_GetTypeMask() { return (0xFFFFFFFF); }
TGInsState GINSSTATE_GetTypeOffset() { return (0); }
TGInsState GINSSTATE_GetLevelMask() { return (0xFFFF); }
TGInsState GINSSTATE_GetLevelOffset() { return (4*8); }

TEnumGInsStateType GINSSTATE_GetType(TGInsState State)
{
    TGInsState Sign = 1;
    if (State < 0)
        Sign = -1;
    State *= Sign;
    return ((TEnumGInsStateType)(Sign*((State >> GINSSTATE_GetTypeOffset()) & GINSSTATE_GetTypeMask())));
}
TEnumGInsStateLevel GINSSTATE_GetLevel(TGInsState State)
{
    if (State < 0)
        State *= -1;
    return ((TEnumGInsStateLevel)((State >> GINSSTATE_GetLevelOffset()) & GINSSTATE_GetLevelMask()));
}

void GINSSTATE_ReplaceType(TEnumGInsStateType Enum, TGInsState *State)
{
    TEnumGInsStateLevel Level = GINSSTATE_GetLevel(*State);
    TGInsState SignType = 1;
    if (Enum < 0)
        SignType = -1;
    Enum = (TEnumGInsStateType)(SignType*Enum);
    *State = SignType*(((TGInsState)Level << GINSSTATE_GetLevelOffset()) | ((TGInsState)Enum << GINSSTATE_GetTypeOffset()));
}
void GINSSTATE_ReplaceLevel(TEnumGInsStateLevel Enum, TGInsState *State)
{
    TEnumGInsStateType Type = GINSSTATE_GetType(*State);
    TGInsState SignType = 1;
    if (Type < 0)
        SignType = -1;
    Type = (TEnumGInsStateType)(SignType*Type);
    *State = SignType*(((TGInsState)Enum << GINSSTATE_GetLevelOffset()) | ((TGInsState)Type << GINSSTATE_GetTypeOffset()));
}
void GINSSTATE_Replace(TEnumGInsStateLevel EnumLevel, TEnumGInsStateType EnumType, TGInsState *State)
{
    GINSSTATE_ReplaceLevel(EnumLevel, State);
    GINSSTATE_ReplaceType(EnumType, State);
}

TGInsState GINSSTATE_Build(TEnumGInsStateLevel EnumLevel, TEnumGInsStateType EnumType)
{
    TGInsState State = (TGInsState)0;
    GINSSTATE_Replace(EnumLevel, EnumType, &State);
    return (State);
}
TGInsState GINSSTATE_BuildNone(void)
{
    return (GINSSTATE_Build(eGInsStateLevel__ERROR, eGInsStateType__NONE));
}
TGInsState GINSSTATE_BuildLevel_Error(TEnumGInsStateType Enum)
{
    return (GINSSTATE_Build(eGInsStateLevel__ERROR, Enum));
}
TGInsState GINSSTATE_BuildLevel_Warning(TEnumGInsStateType Enum)
{
    return (GINSSTATE_Build(eGInsStateLevel__WARNING, Enum));
}
TGInsState GINSSTATE_BuildLevel_Info(TEnumGInsStateType Enum)
{
    return (GINSSTATE_Build(eGInsStateLevel__INFO, Enum));
}

bool GINSSTATE_IsNone(TGInsState State)
{
    // Level doesn't matter ...
    return (GINSSTATE_GetType(State) == eGInsStateType__NONE);
}
bool GINSSTATE_IsOther(TGInsState State)
{
    // Level doesn't matter ...
    return (GINSSTATE_GetType(State) > 0);
}
bool GINSSTATE_IsType(TEnumGInsStateType Enum, TGInsState State)
{
    return (!GINSSTATE_IsNone(State) && !GINSSTATE_IsOther(State) && (GINSSTATE_GetType(State) == Enum));
}
bool GINSSTATE_IsLevel(TEnumGInsStateLevel Enum, TGInsState State)
{
    return (!GINSSTATE_IsNone(State) && !GINSSTATE_IsOther(State) && (GINSSTATE_GetLevel(State) == Enum));
}
bool GINSSTATE_IsLevel_Error(TGInsState State)
{
    return (GINSSTATE_IsLevel(eGInsStateLevel__ERROR, State));
}
bool GINSSTATE_IsLevel_Warning(TGInsState State)
{
    return (GINSSTATE_IsLevel(eGInsStateLevel__WARNING, State));
}
bool GINSSTATE_IsLevel_Info(TGInsState State)
{
    return (GINSSTATE_IsLevel(eGInsStateLevel__INFO, State));
}

int GINSSTATE_GetPriority(TGInsState State)
{
    if (GINSSTATE_IsLevel_Error(State))
        return (2);
    else if (GINSSTATE_IsLevel_Warning(State))
            return (1);
    else if (GINSSTATE_IsLevel_Info(State))
            return (0);
    else return (-1);
}

char *GINSSTATE_GetLevelText(TEnumGInsStateLevel Enum, char *Result, size_t ResultMaxSize)
{
    if (Result == NULL)
        return (Result);
    *Result = 0;
    switch (Enum)
    {
//================================================================================================================================================
// Group: root
//================================================================================================================================================
        case eGInsStateLevel__ERROR:{    snprintf(Result, ResultMaxSize, "ERROR");    break;    }
        case eGInsStateLevel__WARNING:{    snprintf(Result, ResultMaxSize, "WARNING");    break;    }
        case eGInsStateLevel__INFO:{    snprintf(Result, ResultMaxSize, "INFO");    break;    }
//================================================================================================================================================
// Group: ...
//================================================================================================================================================
        default:{    snprintf(Result, ResultMaxSize, "eGInsStateLevel unknown (value=%d)", Enum);    break;    }
    }
    return (Result);
}

char *GINSSTATE_GetTypeText(TEnumGInsStateType Enum, char *Result, size_t ResultMaxSize)
{
    if (Result == NULL)
        return (Result);
    *Result = 0;
    switch (Enum)
    {
//================================================================================================================================================
// Group: root
//================================================================================================================================================
        case eGInsStateType__NONE:{    snprintf(Result, ResultMaxSize, "NONE");    break;    }
        case eGInsStateType__MEMORY:{    snprintf(Result, ResultMaxSize, "MEMORY");    break;    }
        case eGInsStateType__VERSION:{    snprintf(Result, ResultMaxSize, "VERSION");    break;    }
        case eGInsStateType__INVALIDOPERATION:{    snprintf(Result, ResultMaxSize, "INVALIDOPERATION");    break;    }
        case eGInsStateType__FNTNOTEXIST:{    snprintf(Result, ResultMaxSize, "FNTNOTEXIST");    break;    }
        case eGInsStateType__INTERNAL:{    snprintf(Result, ResultMaxSize, "INTERNAL");    break;    }
        case eGInsStateType__INVALIDPARAMETER:{    snprintf(Result, ResultMaxSize, "INVALIDPARAMETER");    break;    }
        case eGInsStateType__BUFFERTOOSMALL:{    snprintf(Result, ResultMaxSize, "BUFFERTOOSMALL");    break;    }
        case eGInsStateType__INVALID32VALUE:{    snprintf(Result, ResultMaxSize, "INVALID32VALUE");    break;    }
        case eGInsStateType__INVALIDPTR:{    snprintf(Result, ResultMaxSize, "INVALIDPTR");    break;    }
        case eGInsStateType__FWNOTCHECKED:{    snprintf(Result, ResultMaxSize, "FWNOTCHECKED");    break;    }
        case eGInsStateType__BREAK:{    snprintf(Result, ResultMaxSize, "BREAK");    break;    }
        case eGInsStateType__BUSY:{    snprintf(Result, ResultMaxSize, "BUSY");    break;    }
        case eGInsStateType__KEYCODE:{    snprintf(Result, ResultMaxSize, "KEYCODE");    break;    }
        case eGInsStateType__PASSWORD:{    snprintf(Result, ResultMaxSize, "PASSWORD");    break;    }
        case eGInsStateType__TRYAGAIN:{    snprintf(Result, ResultMaxSize, "TRYAGAIN");    break;    }
        case eGInsStateType__TIMEOUT:{    snprintf(Result, ResultMaxSize, "TIMEOUT");    break;    }
        case eGInsStateType__INVALIDLOCALIZATION:{    snprintf(Result, ResultMaxSize, "INVALIDLOCALIZATION");    break;    }
        case eGInsStateType__COMMON:{    snprintf(Result, ResultMaxSize, "COMMON");    break;    }
//================================================================================================================================================
// Group: GInsStateTypeFILE
//================================================================================================================================================
        case eGInsStateType__FILE_OPEN:{    snprintf(Result, ResultMaxSize, "FILE_OPEN");    break;    }
        case eGInsStateType__FILE_FORMAT:{    snprintf(Result, ResultMaxSize, "FILE_FORMAT");    break;    }
        case eGInsStateType__FILE_VERSION:{    snprintf(Result, ResultMaxSize, "FILE_VERSION");    break;    }
        case eGInsStateType__FILE_OPENWRITE:{    snprintf(Result, ResultMaxSize, "FILE_OPENWRITE");    break;    }
        case eGInsStateType__FILE_CREATE:{    snprintf(Result, ResultMaxSize, "FILE_CREATE");    break;    }
        case eGInsStateType__FILE_NOTEXIST:{    snprintf(Result, ResultMaxSize, "FILE_NOTEXIST");    break;    }
        case eGInsStateType__FILE_WRITE:{    snprintf(Result, ResultMaxSize, "FILE_WRITE");    break;    }
        case eGInsStateType__FILE_READ:{    snprintf(Result, ResultMaxSize, "FILE_READ");    break;    }
        case eGInsStateType__FILE_REMOVE:{    snprintf(Result, ResultMaxSize, "FILE_REMOVE");    break;    }
        case eGInsStateType__FILE_PACK:{    snprintf(Result, ResultMaxSize, "FILE_PACK");    break;    }
        case eGInsStateType__FILE_UNPACK:{    snprintf(Result, ResultMaxSize, "FILE_UNPACK");    break;    }
//================================================================================================================================================
// Group: GInsStateTypeNET
//================================================================================================================================================
        case eGInsStateType__NET_SUCCESS:{    snprintf(Result, ResultMaxSize, "NET_SUCCESS");    break;    }
        case eGInsStateType__NET_PROGRESS:{    snprintf(Result, ResultMaxSize, "NET_PROGRESS");    break;    }
        case eGInsStateType__NET_NO_FREE_ENTRY:{    snprintf(Result, ResultMaxSize, "NET_NO_FREE_ENTRY");    break;    }
        case eGInsStateType__NET_BAD_LOCALNAME:{    snprintf(Result, ResultMaxSize, "NET_BAD_LOCALNAME");    break;    }
        case eGInsStateType__NET_OUT_OF_MEMORY:{    snprintf(Result, ResultMaxSize, "NET_OUT_OF_MEMORY");    break;    }
        case eGInsStateType__NET_TIMEOUT:{    snprintf(Result, ResultMaxSize, "NET_TIMEOUT");    break;    }
        case eGInsStateType__NET_MORE_DATA:{    snprintf(Result, ResultMaxSize, "NET_MORE_DATA");    break;    }
        case eGInsStateType__NET_NOT_SUPPORTED:{    snprintf(Result, ResultMaxSize, "NET_NOT_SUPPORTED");    break;    }
        case eGInsStateType__NET_BAD_NETNAME:{    snprintf(Result, ResultMaxSize, "NET_BAD_NETNAME");    break;    }
        case eGInsStateType__NET_OPEN_WINDOW:{    snprintf(Result, ResultMaxSize, "NET_OPEN_WINDOW");    break;    }
        case eGInsStateType__NET_INIT_WINSOCK:{    snprintf(Result, ResultMaxSize, "NET_INIT_WINSOCK");    break;    }
        case eGInsStateType__NET_DATAGRAM_FRAGMENTED:{    snprintf(Result, ResultMaxSize, "NET_DATAGRAM_FRAGMENTED");    break;    }
        case eGInsStateType__NET_INVALID_SERVICE:{    snprintf(Result, ResultMaxSize, "NET_INVALID_SERVICE");    break;    }
        case eGInsStateType__NET_MAX_SOCKETS:{    snprintf(Result, ResultMaxSize, "NET_MAX_SOCKETS");    break;    }
        case eGInsStateType__NET_PROTOCOL_NOT_AVAILABLE:{    snprintf(Result, ResultMaxSize, "NET_PROTOCOL_NOT_AVAILABLE");    break;    }
        case eGInsStateType__NET_CONNECTION_CLOSED:{    snprintf(Result, ResultMaxSize, "NET_CONNECTION_CLOSED");    break;    }
        case eGInsStateType__NET_EXECUTE_BUSY:{    snprintf(Result, ResultMaxSize, "NET_EXECUTE_BUSY");    break;    }
        case eGInsStateType__NET_UNKNOWN_COMMAND:{    snprintf(Result, ResultMaxSize, "NET_UNKNOWN_COMMAND");    break;    }
        case eGInsStateType__NET_UNKNOWN_STATE:{    snprintf(Result, ResultMaxSize, "NET_UNKNOWN_STATE");    break;    }
        case eGInsStateType__NET_INVALID_IPADDR:{    snprintf(Result, ResultMaxSize, "NET_INVALID_IPADDR");    break;    }
        case eGInsStateType__NET_INVALID_ADAPTER_NUMBER:{    snprintf(Result, ResultMaxSize, "NET_INVALID_ADAPTER_NUMBER");    break;    }
        case eGInsStateType__NET_FILE_ACCESS:{    snprintf(Result, ResultMaxSize, "NET_FILE_ACCESS");    break;    }
        case eGInsStateType__NET_NO_VERSION:{    snprintf(Result, ResultMaxSize, "NET_NO_VERSION");    break;    }
        case eGInsStateType__NET_VERIFY:{    snprintf(Result, ResultMaxSize, "NET_VERIFY");    break;    }
        case eGInsStateType__NET_BAD_SUBMASK:{    snprintf(Result, ResultMaxSize, "NET_BAD_SUBMASK");    break;    }
        case eGInsStateType__NET_INVALID_PARAMETER:{    snprintf(Result, ResultMaxSize, "NET_INVALID_PARAMETER");    break;    }
        case eGInsStateType__NET_CFG:{    snprintf(Result, ResultMaxSize, "NET_CFG");    break;    }
        case eGInsStateType__NET_PERMISSION_DENIED:{    snprintf(Result, ResultMaxSize, "NET_PERMISSION_DENIED");    break;    }
        case eGInsStateType__NET_CALLTIMEOUT:{    snprintf(Result, ResultMaxSize, "NET_CALLTIMEOUT");    break;    }
        case eGInsStateType__NET_INVALID_HOSTIP:{    snprintf(Result, ResultMaxSize, "NET_INVALID_HOSTIP");    break;    }
        case eGInsStateType__NET_INVALID_SUBHOSTIP:{    snprintf(Result, ResultMaxSize, "NET_INVALID_SUBHOSTIP");    break;    }
        case eGInsStateType__NET_WINSOCK2_NOT_AVAILABLE:{    snprintf(Result, ResultMaxSize, "NET_WINSOCK2_NOT_AVAILABLE");    break;    }
        case eGInsStateType__NET_ENCRYPTALGORITHEM:{    snprintf(Result, ResultMaxSize, "NET_ENCRYPTALGORITHEM");    break;    }
        case eGInsStateType__NET_INVALID_PASSWORD:{    snprintf(Result, ResultMaxSize, "NET_INVALID_PASSWORD");    break;    }
        case eGInsStateType__NET_PASSWORD_REQUIRED:{    snprintf(Result, ResultMaxSize, "NET_PASSWORD_REQUIRED");    break;    }
        case eGInsStateType__NET_MONCTRL_INTERNAL_DEV_NOT_FOUND:{    snprintf(Result, ResultMaxSize, "NET_MONCTRL_INTERNAL_DEV_NOT_FOUND");    break;    }
        case eGInsStateType__NET_INVALID_NETWORKCLASS_SUBNET:{    snprintf(Result, ResultMaxSize, "NET_INVALID_NETWORKCLASS_SUBNET");    break;    }
        case eGInsStateType__NET_WSAERR_START:{    snprintf(Result, ResultMaxSize, "NET_WSAERR_START");    break;    }
        case eGInsStateType__NET_EINTR:{    snprintf(Result, ResultMaxSize, "NET_EINTR");    break;    }
        case eGInsStateType__NET_EBADF:{    snprintf(Result, ResultMaxSize, "NET_EBADF");    break;    }
        case eGInsStateType__NET_EACCES:{    snprintf(Result, ResultMaxSize, "NET_EACCES");    break;    }
        case eGInsStateType__NET_EFAULT:{    snprintf(Result, ResultMaxSize, "NET_EFAULT");    break;    }
        case eGInsStateType__NET_EINVAL:{    snprintf(Result, ResultMaxSize, "NET_EINVAL");    break;    }
        case eGInsStateType__NET_EMFILE:{    snprintf(Result, ResultMaxSize, "NET_EMFILE");    break;    }
        case eGInsStateType__NET_EWOULDBLOCK:{    snprintf(Result, ResultMaxSize, "NET_EWOULDBLOCK");    break;    }
        case eGInsStateType__NET_EINPROGRESS:{    snprintf(Result, ResultMaxSize, "NET_EINPROGRESS");    break;    }
        case eGInsStateType__NET_EALREADY:{    snprintf(Result, ResultMaxSize, "NET_EALREADY");    break;    }
        case eGInsStateType__NET_ENOTSOCK:{    snprintf(Result, ResultMaxSize, "NET_ENOTSOCK");    break;    }
        case eGInsStateType__NET_EDESTADDRREQ:{    snprintf(Result, ResultMaxSize, "NET_EDESTADDRREQ");    break;    }
        case eGInsStateType__NET_EMSGSIZE:{    snprintf(Result, ResultMaxSize, "NET_EMSGSIZE");    break;    }
        case eGInsStateType__NET_EPROTOTYPE:{    snprintf(Result, ResultMaxSize, "NET_EPROTOTYPE");    break;    }
        case eGInsStateType__NET_ENOPROTOOPT:{    snprintf(Result, ResultMaxSize, "NET_ENOPROTOOPT");    break;    }
        case eGInsStateType__NET_EPROTONOSUPPORT:{    snprintf(Result, ResultMaxSize, "NET_EPROTONOSUPPORT");    break;    }
        case eGInsStateType__NET_ESOCKTNOSUPPORT:{    snprintf(Result, ResultMaxSize, "NET_ESOCKTNOSUPPORT");    break;    }
        case eGInsStateType__NET_EOPNOTSUPP:{    snprintf(Result, ResultMaxSize, "NET_EOPNOTSUPP");    break;    }
        case eGInsStateType__NET_EPFNOSUPPORT:{    snprintf(Result, ResultMaxSize, "NET_EPFNOSUPPORT");    break;    }
        case eGInsStateType__NET_EAFNOSUPPORT:{    snprintf(Result, ResultMaxSize, "NET_EAFNOSUPPORT");    break;    }
        case eGInsStateType__NET_EADDRINUSE:{    snprintf(Result, ResultMaxSize, "NET_EADDRINUSE");    break;    }
        case eGInsStateType__NET_EADDRNOTAVAIL:{    snprintf(Result, ResultMaxSize, "NET_EADDRNOTAVAIL");    break;    }
        case eGInsStateType__NET_ENETDOWN:{    snprintf(Result, ResultMaxSize, "NET_ENETDOWN");    break;    }
        case eGInsStateType__NET_ENETUNREACH:{    snprintf(Result, ResultMaxSize, "NET_ENETUNREACH");    break;    }
        case eGInsStateType__NET_ENETRESET:{    snprintf(Result, ResultMaxSize, "NET_ENETRESET");    break;    }
        case eGInsStateType__NET_ECONNABORTED:{    snprintf(Result, ResultMaxSize, "NET_ECONNABORTED");    break;    }
        case eGInsStateType__NET_ECONNRESET:{    snprintf(Result, ResultMaxSize, "NET_ECONNRESET");    break;    }
        case eGInsStateType__NET_ENOBUFS:{    snprintf(Result, ResultMaxSize, "NET_ENOBUFS");    break;    }
        case eGInsStateType__NET_EISCONN:{    snprintf(Result, ResultMaxSize, "NET_EISCONN");    break;    }
        case eGInsStateType__NET_ENOTCONN:{    snprintf(Result, ResultMaxSize, "NET_ENOTCONN");    break;    }
        case eGInsStateType__NET_ESHUTDOWN:{    snprintf(Result, ResultMaxSize, "NET_ESHUTDOWN");    break;    }
        case eGInsStateType__NET_ETOOMANYREFS:{    snprintf(Result, ResultMaxSize, "NET_ETOOMANYREFS");    break;    }
        case eGInsStateType__NET_ETIMEDOUT:{    snprintf(Result, ResultMaxSize, "NET_ETIMEDOUT");    break;    }
        case eGInsStateType__NET_ECONNREFUSED:{    snprintf(Result, ResultMaxSize, "NET_ECONNREFUSED");    break;    }
        case eGInsStateType__NET_ELOOP:{    snprintf(Result, ResultMaxSize, "NET_ELOOP");    break;    }
        case eGInsStateType__NET_ENAMETOOLONG:{    snprintf(Result, ResultMaxSize, "NET_ENAMETOOLONG");    break;    }
        case eGInsStateType__NET_EHOSTDOWN:{    snprintf(Result, ResultMaxSize, "NET_EHOSTDOWN");    break;    }
        case eGInsStateType__NET_EHOSTUNREACH:{    snprintf(Result, ResultMaxSize, "NET_EHOSTUNREACH");    break;    }
        case eGInsStateType__NET_ENOTEMPTY:{    snprintf(Result, ResultMaxSize, "NET_ENOTEMPTY");    break;    }
        case eGInsStateType__NET_EPROCLIM:{    snprintf(Result, ResultMaxSize, "NET_EPROCLIM");    break;    }
        case eGInsStateType__NET_EUSERS:{    snprintf(Result, ResultMaxSize, "NET_EUSERS");    break;    }
        case eGInsStateType__NET_EDQUOT:{    snprintf(Result, ResultMaxSize, "NET_EDQUOT");    break;    }
        case eGInsStateType__NET_ESTALE:{    snprintf(Result, ResultMaxSize, "NET_ESTALE");    break;    }
        case eGInsStateType__NET_EREMOTE:{    snprintf(Result, ResultMaxSize, "NET_EREMOTE");    break;    }
        case eGInsStateType__NET_SYSNOTREADY:{    snprintf(Result, ResultMaxSize, "NET_SYSNOTREADY");    break;    }
        case eGInsStateType__NET_VERNOTSUPPORTED:{    snprintf(Result, ResultMaxSize, "NET_VERNOTSUPPORTED");    break;    }
        case eGInsStateType__NET_NOTINITIALISED:{    snprintf(Result, ResultMaxSize, "NET_NOTINITIALISED");    break;    }
        case eGInsStateType__NET_EDISCON:{    snprintf(Result, ResultMaxSize, "NET_EDISCON");    break;    }
//================================================================================================================================================
// Group: GInsStateTypeXMLRPC
//================================================================================================================================================
        case eGInsStateType__XMLRPC_UNSPECIFIED:{    snprintf(Result, ResultMaxSize, "XMLRPC_UNSPECIFIED");    break;    }
        case eGInsStateType__XMLRPC_INTERNAL:{    snprintf(Result, ResultMaxSize, "XMLRPC_INTERNAL");    break;    }
        case eGInsStateType__XMLRPC_UNEXPECTEDEXEPTION:{    snprintf(Result, ResultMaxSize, "XMLRPC_UNEXPECTEDEXEPTION");    break;    }
        case eGInsStateType__XMLRPC_VALUETYPEERROR:{    snprintf(Result, ResultMaxSize, "XMLRPC_VALUETYPEERROR");    break;    }
        case eGInsStateType__XMLRPC_VALUEEXPECTEDARRAY:{    snprintf(Result, ResultMaxSize, "XMLRPC_VALUEEXPECTEDARRAY");    break;    }
        case eGInsStateType__XMLRPC_VALUEARRAYINDEX:{    snprintf(Result, ResultMaxSize, "XMLRPC_VALUEARRAYINDEX");    break;    }
        case eGInsStateType__XMLRPC_VALUEEXPECTEDSTRUCT:{    snprintf(Result, ResultMaxSize, "XMLRPC_VALUEEXPECTEDSTRUCT");    break;    }
        case eGInsStateType__XMLRPC_INVALIDARGUMENT:{    snprintf(Result, ResultMaxSize, "XMLRPC_INVALIDARGUMENT");    break;    }
        case eGInsStateType__XMLRPC_INVALIDARGUMENTTYPE:{    snprintf(Result, ResultMaxSize, "XMLRPC_INVALIDARGUMENTTYPE");    break;    }
        case eGInsStateType__XMLRPC_LOGINREQUIRED:{    snprintf(Result, ResultMaxSize, "XMLRPC_LOGINREQUIRED");    break;    }
        case eGInsStateType__XMLRPC_PERMISSIONDENIEDMETHOD:{    snprintf(Result, ResultMaxSize, "XMLRPC_PERMISSIONDENIEDMETHOD");    break;    }
        case eGInsStateType__XMLRPC_PERMISSIONDENIEDROUTE:{    snprintf(Result, ResultMaxSize, "XMLRPC_PERMISSIONDENIEDROUTE");    break;    }
        case eGInsStateType__XMLRPC_UNKNOWNMETHOD:{    snprintf(Result, ResultMaxSize, "XMLRPC_UNKNOWNMETHOD");    break;    }
        case eGInsStateType__XMLRPC_UNKNOWNROUTE:{    snprintf(Result, ResultMaxSize, "XMLRPC_UNKNOWNROUTE");    break;    }
        case eGInsStateType__XMLRPC_EXECUTEMETHOD:{    snprintf(Result, ResultMaxSize, "XMLRPC_EXECUTEMETHOD");    break;    }
        case eGInsStateType__XMLRPC_GENERATERESPONSE:{    snprintf(Result, ResultMaxSize, "XMLRPC_GENERATERESPONSE");    break;    }
        case eGInsStateType__XMLRPC_FORMATREQUEST:{    snprintf(Result, ResultMaxSize, "XMLRPC_FORMATREQUEST");    break;    }
        case eGInsStateType__XMLRPC_FORMATRESPONSE:{    snprintf(Result, ResultMaxSize, "XMLRPC_FORMATRESPONSE");    break;    }
        case eGInsStateType__XMLRPC_TRANSPORTINVALIDCFG:{    snprintf(Result, ResultMaxSize, "XMLRPC_TRANSPORTINVALIDCFG");    break;    }
        case eGInsStateType__XMLRPC_TRANSPORTCONNECTIONPREPARE:{    snprintf(Result, ResultMaxSize, "XMLRPC_TRANSPORTCONNECTIONPREPARE");    break;    }
        case eGInsStateType__XMLRPC_TRANSPORTCONNECTIONESTABLISH:{    snprintf(Result, ResultMaxSize, "XMLRPC_TRANSPORTCONNECTIONESTABLISH");    break;    }
        case eGInsStateType__XMLRPC_TRANSPORTPROGRESS:{    snprintf(Result, ResultMaxSize, "XMLRPC_TRANSPORTPROGRESS");    break;    }
        case eGInsStateType__XMLRPC_TRANSPORTINVALIDSTATE:{    snprintf(Result, ResultMaxSize, "XMLRPC_TRANSPORTINVALIDSTATE");    break;    }
        case eGInsStateType__XMLRPC_TRANSPORTSEND:{    snprintf(Result, ResultMaxSize, "XMLRPC_TRANSPORTSEND");    break;    }
        case eGInsStateType__XMLRPC_TRANSPORTRECEIVE:{    snprintf(Result, ResultMaxSize, "XMLRPC_TRANSPORTRECEIVE");    break;    }
        case eGInsStateType__XMLRPC_VALUEEXPECTEDBINARYDATA:{    snprintf(Result, ResultMaxSize, "XMLRPC_VALUEEXPECTEDBINARYDATA");    break;    }
        case eGInsStateType__XMLRPC_VALUEINDEX:{    snprintf(Result, ResultMaxSize, "XMLRPC_VALUEINDEX");    break;    }
        case eGInsStateType__XMLRPC_METHODCALLSIZE:{    snprintf(Result, ResultMaxSize, "XMLRPC_METHODCALLSIZE");    break;    }
        case eGInsStateType__XMLRPC_METHODRESPONSESIZE:{    snprintf(Result, ResultMaxSize, "XMLRPC_METHODRESPONSESIZE");    break;    }
        case eGInsStateType__XMLRPC_INVALIDVARIABLENAME:{    snprintf(Result, ResultMaxSize, "XMLRPC_INVALIDVARIABLENAME");    break;    }
        case eGInsStateType__XMLRPC_CONNECTIONCLOSED:{    snprintf(Result, ResultMaxSize, "XMLRPC_CONNECTIONCLOSED");    break;    }
        case eGInsStateType__XMLRPC_SOCKETCLOSED:{    snprintf(Result, ResultMaxSize, "XMLRPC_SOCKETCLOSED");    break;    }
        case eGInsStateType__XMLRPC_SERVERSHUTDOWN:{    snprintf(Result, ResultMaxSize, "XMLRPC_SERVERSHUTDOWN");    break;    }
        case eGInsStateType__XMLRPC_VALUEREADONLY:{    snprintf(Result, ResultMaxSize, "XMLRPC_VALUEREADONLY");    break;    }
        case eGInsStateType__XMLRPC_ACCESSLOCKTOKEN:{    snprintf(Result, ResultMaxSize, "XMLRPC_ACCESSLOCKTOKEN");    break;    }
        case eGInsStateType__XMLRPC_ACCESSLOCKCREATE:{    snprintf(Result, ResultMaxSize, "XMLRPC_ACCESSLOCKCREATE");    break;    }
        case eGInsStateType__XMLRPC_ACCESSLOCKINPROGRESS:{    snprintf(Result, ResultMaxSize, "XMLRPC_ACCESSLOCKINPROGRESS");    break;    }
        case eGInsStateType__XMLRPC_ACCESSLOCKREADACTIVE:{    snprintf(Result, ResultMaxSize, "XMLRPC_ACCESSLOCKREADACTIVE");    break;    }
        case eGInsStateType__XMLRPC_ACCESSLOCKWRITEACTIVE:{    snprintf(Result, ResultMaxSize, "XMLRPC_ACCESSLOCKWRITEACTIVE");    break;    }
        case eGInsStateType__XMLRPC_ACCESSLOCKREADWRITEACTIVE:{    snprintf(Result, ResultMaxSize, "XMLRPC_ACCESSLOCKREADWRITEACTIVE");    break;    }
        case eGInsStateType__XMLRPC_APICOMPATIBILITY:{    snprintf(Result, ResultMaxSize, "XMLRPC_APICOMPATIBILITY");    break;    }
//================================================================================================================================================
// Group: GInsStateTypeDataLogger
//================================================================================================================================================
        case eGInsStateType__DataLogger_Runtime_ConfigError:{    snprintf(Result, ResultMaxSize, "DataLogger_Runtime_ConfigError");    break;    }
        case eGInsStateType__DataLogger_Runtime_BufferOverrun:{    snprintf(Result, ResultMaxSize, "DataLogger_Runtime_BufferOverrun");    break;    }
        case eGInsStateType__DataLogger_Runtime_DataLimitReached:{    snprintf(Result, ResultMaxSize, "DataLogger_Runtime_DataLimitReached");    break;    }
        case eGInsStateType__DataLogger_Runtime_RenameFileFailed:{    snprintf(Result, ResultMaxSize, "DataLogger_Runtime_RenameFileFailed");    break;    }
        case eGInsStateType__DataLogger_Runtime_OpenFileFailed:{    snprintf(Result, ResultMaxSize, "DataLogger_Runtime_OpenFileFailed");    break;    }
        case eGInsStateType__DataLogger_Runtime_RequestFreeSpace:{    snprintf(Result, ResultMaxSize, "DataLogger_Runtime_RequestFreeSpace");    break;    }
        case eGInsStateType__DataLogger_Runtime_NoStorageDestination:{    snprintf(Result, ResultMaxSize, "DataLogger_Runtime_NoStorageDestination");    break;    }
        case eGInsStateType__DataLogger_Runtime_DataInterfaceAccess:{    snprintf(Result, ResultMaxSize, "DataLogger_Runtime_DataInterfaceAccess");    break;    }
        case eGInsStateType__DataLogger_Runtime_SendMail:{    snprintf(Result, ResultMaxSize, "DataLogger_Runtime_SendMail");    break;    }
        case eGInsStateType__DataLogger_Runtime_SendFTP:{    snprintf(Result, ResultMaxSize, "DataLogger_Runtime_SendFTP");    break;    }
        case eGInsStateType__DataLogger_Runtime_DeleteFileFailed:{    snprintf(Result, ResultMaxSize, "DataLogger_Runtime_DeleteFileFailed");    break;    }
        case eGInsStateType__DataLogger_Runtime_ConvertFileFailed:{    snprintf(Result, ResultMaxSize, "DataLogger_Runtime_ConvertFileFailed");    break;    }
        case eGInsStateType__DataLogger_Runtime_NotSpecified:{    snprintf(Result, ResultMaxSize, "DataLogger_Runtime_NotSpecified");    break;    }
        case eGInsStateType__DataLogger_Config_ParamsError:{    snprintf(Result, ResultMaxSize, "DataLogger_Config_ParamsError");    break;    }
        case eGInsStateType__DataLogger_Config_NotLoaded:{    snprintf(Result, ResultMaxSize, "DataLogger_Config_NotLoaded");    break;    }
        case eGInsStateType__DataLogger_Config_VariableNotFound:{    snprintf(Result, ResultMaxSize, "DataLogger_Config_VariableNotFound");    break;    }
        case eGInsStateType__DataLogger_Config_InvalidSourceBuffer:{    snprintf(Result, ResultMaxSize, "DataLogger_Config_InvalidSourceBuffer");    break;    }
        case eGInsStateType__DataLogger_Config_PostProcessor_ParamsError:{    snprintf(Result, ResultMaxSize, "DataLogger_Config_PostProcessor_ParamsError");    break;    }
        case eGInsStateType__DataLogger_Config_PostProcessor_VariableNotFound:{    snprintf(Result, ResultMaxSize, "DataLogger_Config_PostProcessor_VariableNotFound");    break;    }
        case eGInsStateType__DataLogger_Config_PostProcessor_ConstructVariable:{    snprintf(Result, ResultMaxSize, "DataLogger_Config_PostProcessor_ConstructVariable");    break;    }
        case eGInsStateType__DataLogger_Config_PostProcessor_InvalidSourceBuffer:{    snprintf(Result, ResultMaxSize, "DataLogger_Config_PostProcessor_InvalidSourceBuffer");    break;    }
//================================================================================================================================================
// Group: GInsStateTypeDataStream
//================================================================================================================================================
        case eGInsStateType__DataStream_Runtime_ConfigError:{    snprintf(Result, ResultMaxSize, "DataStream_Runtime_ConfigError");    break;    }
        case eGInsStateType__DataStream_Runtime_BufferOverrun:{    snprintf(Result, ResultMaxSize, "DataStream_Runtime_BufferOverrun");    break;    }
        case eGInsStateType__DataStream_Runtime_HighSpeedPort:{    snprintf(Result, ResultMaxSize, "DataStream_Runtime_HighSpeedPort");    break;    }
        case eGInsStateType__DataStream_Runtime_SourceStream:{    snprintf(Result, ResultMaxSize, "DataStream_Runtime_SourceStream");    break;    }
        case eGInsStateType__DataStream_Runtime_StreamMemory:{    snprintf(Result, ResultMaxSize, "DataStream_Runtime_StreamMemory");    break;    }
        case eGInsStateType__DataStream_Runtime_TimeoutOccured:{    snprintf(Result, ResultMaxSize, "DataStream_Runtime_TimeoutOccured");    break;    }
        case eGInsStateType__DataStream_Runtime_ConfigChanged:{    snprintf(Result, ResultMaxSize, "DataStream_Runtime_ConfigChanged");    break;    }
        case eGInsStateType__DataStream_Runtime_Interrupted:{    snprintf(Result, ResultMaxSize, "DataStream_Runtime_Interrupted");    break;    }
        case eGInsStateType__DataStream_Runtime_InvalidPointer:{    snprintf(Result, ResultMaxSize, "DataStream_Runtime_InvalidPointer");    break;    }
        case eGInsStateType__DataStream_Runtime_InvalidDataSource:{    snprintf(Result, ResultMaxSize, "DataStream_Runtime_InvalidDataSource");    break;    }
        case eGInsStateType__DataStream_Runtime_DataGapDetected:{    snprintf(Result, ResultMaxSize, "DataStream_Runtime_DataGapDetected");    break;    }
        case eGInsStateType__DataStream_Runtime_SourceNotOperational:{    snprintf(Result, ResultMaxSize, "DataStream_Runtime_SourceNotOperational");    break;    }
        case eGInsStateType__DataStream_Runtime_SourceOffline:{    snprintf(Result, ResultMaxSize, "DataStream_Runtime_SourceOffline");    break;    }
        case eGInsStateType__DataStream_Runtime_NotSpecified:{    snprintf(Result, ResultMaxSize, "DataStream_Runtime_NotSpecified");    break;    }
        case eGInsStateType__DataStream_Config_ParamsError:{    snprintf(Result, ResultMaxSize, "DataStream_Config_ParamsError");    break;    }
        case eGInsStateType__DataStream_Config_NotLoaded:{    snprintf(Result, ResultMaxSize, "DataStream_Config_NotLoaded");    break;    }
        case eGInsStateType__DataStream_Config_VariableNotFound:{    snprintf(Result, ResultMaxSize, "DataStream_Config_VariableNotFound");    break;    }
        case eGInsStateType__DataStream_Config_InvalidSourceStream:{    snprintf(Result, ResultMaxSize, "DataStream_Config_InvalidSourceStream");    break;    }
//================================================================================================================================================
// Group: GInsStateTypeMailClient
//================================================================================================================================================
        case eGInsStateType__MailClient_Runtime_ConfigError:{    snprintf(Result, ResultMaxSize, "MailClient_Runtime_ConfigError");    break;    }
        case eGInsStateType__MailClient_Runtime_InvalidSendDestinationAddress:{    snprintf(Result, ResultMaxSize, "MailClient_Runtime_InvalidSendDestinationAddress");    break;    }
        case eGInsStateType__MailClient_Runtime_InvalidSendSubject:{    snprintf(Result, ResultMaxSize, "MailClient_Runtime_InvalidSendSubject");    break;    }
        case eGInsStateType__MailClient_Runtime_InvalidSendBody:{    snprintf(Result, ResultMaxSize, "MailClient_Runtime_InvalidSendBody");    break;    }
        case eGInsStateType__MailClient_Runtime_SendMailFailed:{    snprintf(Result, ResultMaxSize, "MailClient_Runtime_SendMailFailed");    break;    }
        case eGInsStateType__MailClient_Runtime_MinimumSendInterval:{    snprintf(Result, ResultMaxSize, "MailClient_Runtime_MinimumSendInterval");    break;    }
        case eGInsStateType__MailClient_Config_ParamsError:{    snprintf(Result, ResultMaxSize, "MailClient_Config_ParamsError");    break;    }
        case eGInsStateType__MailClient_Config_NotLoaded:{    snprintf(Result, ResultMaxSize, "MailClient_Config_NotLoaded");    break;    }
//================================================================================================================================================
// Group: GInsStateTypeNMEAClient
//================================================================================================================================================
        case eGInsStateType__NMEAClient_Runtime_ConfigError:{    snprintf(Result, ResultMaxSize, "NMEAClient_Runtime_ConfigError");    break;    }
        case eGInsStateType__NMEAClient_Runtime_InvalidPort:{    snprintf(Result, ResultMaxSize, "NMEAClient_Runtime_InvalidPort");    break;    }
        case eGInsStateType__NMEAClient_Runtime_InvalidPortConfig:{    snprintf(Result, ResultMaxSize, "NMEAClient_Runtime_InvalidPortConfig");    break;    }
        case eGInsStateType__NMEAClient_Runtime_InvalidSentenceFormat:{    snprintf(Result, ResultMaxSize, "NMEAClient_Runtime_InvalidSentenceFormat");    break;    }
        case eGInsStateType__NMEAClient_Config_InvalidCharFormat:{    snprintf(Result, ResultMaxSize, "NMEAClient_Config_InvalidCharFormat");    break;    }
        case eGInsStateType__NMEAClient_Config_InvalidBaudRate:{    snprintf(Result, ResultMaxSize, "NMEAClient_Config_InvalidBaudRate");    break;    }
//================================================================================================================================================
// Group: GInsStateTypeGarminGPSClient
//================================================================================================================================================
        case eGInsStateType__GarminGPSClient_Runtime_ConfigError:{    snprintf(Result, ResultMaxSize, "GarminGPSClient_Runtime_ConfigError");    break;    }
        case eGInsStateType__GarminGPSClient_Runtime_InvalidPort:{    snprintf(Result, ResultMaxSize, "GarminGPSClient_Runtime_InvalidPort");    break;    }
        case eGInsStateType__GarminGPSClient_Runtime_InvalidPortConfig:{    snprintf(Result, ResultMaxSize, "GarminGPSClient_Runtime_InvalidPortConfig");    break;    }
        case eGInsStateType__GarminGPSClient_Runtime_InvalidDataFormat:{    snprintf(Result, ResultMaxSize, "GarminGPSClient_Runtime_InvalidDataFormat");    break;    }
        case eGInsStateType__GarminGPSClient_Config_ParamsError:{    snprintf(Result, ResultMaxSize, "GarminGPSClient_Config_ParamsError");    break;    }
        case eGInsStateType__GarminGPSClient_Config_NotLoaded:{    snprintf(Result, ResultMaxSize, "GarminGPSClient_Config_NotLoaded");    break;    }
//================================================================================================================================================
// Group: GInsStateTypeDataStorageHandler
//================================================================================================================================================
        case eGInsStateType__DataStorageHandler_Runtime_ConfigError:{    snprintf(Result, ResultMaxSize, "DataStorageHandler_Runtime_ConfigError");    break;    }
        case eGInsStateType__DataStorageHandler_Runtime_CopyDataFiles:{    snprintf(Result, ResultMaxSize, "DataStorageHandler_Runtime_CopyDataFiles");    break;    }
        case eGInsStateType__DataStorageHandler_Runtime_MountNetworkDrive:{    snprintf(Result, ResultMaxSize, "DataStorageHandler_Runtime_MountNetworkDrive");    break;    }
        case eGInsStateType__DataStorageHandler_Runtime_HandleDataFile:{    snprintf(Result, ResultMaxSize, "DataStorageHandler_Runtime_HandleDataFile");    break;    }
        case eGInsStateType__DataStorageHandler_Runtime_DriveNotExisting:{    snprintf(Result, ResultMaxSize, "DataStorageHandler_Runtime_DriveNotExisting");    break;    }
        case eGInsStateType__DataStorageHandler_Config_ParamsError:{    snprintf(Result, ResultMaxSize, "DataStorageHandler_Config_ParamsError");    break;    }
        case eGInsStateType__DataStorageHandler_Config_NotLoaded:{    snprintf(Result, ResultMaxSize, "DataStorageHandler_Config_NotLoaded");    break;    }
//================================================================================================================================================
// Group: GInsStateTypeSystem
//================================================================================================================================================
        case eGInsStateType__System_Config:{    snprintf(Result, ResultMaxSize, "System_Config");    break;    }
        case eGInsStateType__System_Variable:{    snprintf(Result, ResultMaxSize, "System_Variable");    break;    }
        case eGInsStateType__System_VariableAccessInstable:{    snprintf(Result, ResultMaxSize, "System_VariableAccessInstable");    break;    }
        case eGInsStateType__System_RealtimeTaskOverload:{    snprintf(Result, ResultMaxSize, "System_RealtimeTaskOverload");    break;    }
        case eGInsStateType__System_PacKernelOperationDenied:{    snprintf(Result, ResultMaxSize, "System_PacKernelOperationDenied");    break;    }
        case eGInsStateType__System_FieldbusConfiguration:{    snprintf(Result, ResultMaxSize, "System_FieldbusConfiguration");    break;    }
        case eGInsStateType__System_DistributorPortCombined:{    snprintf(Result, ResultMaxSize, "System_DistributorPortCombined");    break;    }
        case eGInsStateType__System_SocketOverloaded:{    snprintf(Result, ResultMaxSize, "System_SocketOverloaded");    break;    }
        case eGInsStateType__System_ExtensionBoardError:{    snprintf(Result, ResultMaxSize, "System_ExtensionBoardError");    break;    }
        case eGInsStateType__System_ClientConnection:{    snprintf(Result, ResultMaxSize, "System_ClientConnection");    break;    }
        case eGInsStateType__System_ExtWorkerNotSynched:{    snprintf(Result, ResultMaxSize, "System_ExtWorkerNotSynched");    break;    }
        case eGInsStateType__System_FileSystem:{    snprintf(Result, ResultMaxSize, "System_FileSystem");    break;    }
        case eGInsStateType__System_DataLoggerCombined:{    snprintf(Result, ResultMaxSize, "System_DataLoggerCombined");    break;    }
        case eGInsStateType__System_FtpClientUnitCombined:{    snprintf(Result, ResultMaxSize, "System_FtpClientUnitCombined");    break;    }
        case eGInsStateType__System_MailClientUnitCombined:{    snprintf(Result, ResultMaxSize, "System_MailClientUnitCombined");    break;    }
        case eGInsStateType__System_MailServerUnitCombined:{    snprintf(Result, ResultMaxSize, "System_MailServerUnitCombined");    break;    }
        case eGInsStateType__System_USBHostUnitCombined:{    snprintf(Result, ResultMaxSize, "System_USBHostUnitCombined");    break;    }
        case eGInsStateType__System_ExternalClockSignalMissing:{    snprintf(Result, ResultMaxSize, "System_ExternalClockSignalMissing");    break;    }
        case eGInsStateType__System_RealtimeTaskSequenceLost:{    snprintf(Result, ResultMaxSize, "System_RealtimeTaskSequenceLost");    break;    }
        case eGInsStateType__System_AutoConfigureUnitCombined:{    snprintf(Result, ResultMaxSize, "System_AutoConfigureUnitCombined");    break;    }
        case eGInsStateType__System_InterfaceCombined:{    snprintf(Result, ResultMaxSize, "System_InterfaceCombined");    break;    }
        case eGInsStateType__System_BoardInit:{    snprintf(Result, ResultMaxSize, "System_BoardInit");    break;    }
        case eGInsStateType__System_PCIEInterfaceData:{    snprintf(Result, ResultMaxSize, "System_PCIEInterfaceData");    break;    }
        case eGInsStateType__System_DataBufferOverrun:{    snprintf(Result, ResultMaxSize, "System_DataBufferOverrun");    break;    }
        case eGInsStateType__System_FieldbusInterfaceAccess:{    snprintf(Result, ResultMaxSize, "System_FieldbusInterfaceAccess");    break;    }
        case eGInsStateType__System_WrongSubSystemVersion:{    snprintf(Result, ResultMaxSize, "System_WrongSubSystemVersion");    break;    }
        case eGInsStateType__System_PluginCombined:{    snprintf(Result, ResultMaxSize, "System_PluginCombined");    break;    }
        case eGInsStateType__System_CANInterfaceCombined:{    snprintf(Result, ResultMaxSize, "System_CANInterfaceCombined");    break;    }
        case eGInsStateType__System_ModbusMasterCombined:{    snprintf(Result, ResultMaxSize, "System_ModbusMasterCombined");    break;    }
        case eGInsStateType__System_ModbusSlaveCombined:{    snprintf(Result, ResultMaxSize, "System_ModbusSlaveCombined");    break;    }
        case eGInsStateType__System_FFTProcessorCombined:{    snprintf(Result, ResultMaxSize, "System_FFTProcessorCombined");    break;    }
        case eGInsStateType__System_GIComOperation:{    snprintf(Result, ResultMaxSize, "System_GIComOperation");    break;    }
        case eGInsStateType__System_WebSocketConnectivity:{    snprintf(Result, ResultMaxSize, "System_WebSocketConnectivity");    break;    }
        case eGInsStateType__System_NotDefined:{    snprintf(Result, ResultMaxSize, "System_NotDefined");    break;    }
        case eGInsStateType__System_Config_ParamsError:{    snprintf(Result, ResultMaxSize, "System_Config_ParamsError");    break;    }
        case eGInsStateType__System_Config_NotLoaded:{    snprintf(Result, ResultMaxSize, "System_Config_NotLoaded");    break;    }
        case eGInsStateType__System_Config_None:{    snprintf(Result, ResultMaxSize, "System_Config_None");    break;    }
        case eGInsStateType__System_Config_SlaveFileOK:{    snprintf(Result, ResultMaxSize, "System_Config_SlaveFileOK");    break;    }
        case eGInsStateType__System_Config_Invalid:{    snprintf(Result, ResultMaxSize, "System_Config_Invalid");    break;    }
        case eGInsStateType__System_Config_IndexTableOverrun:{    snprintf(Result, ResultMaxSize, "System_Config_IndexTableOverrun");    break;    }
        case eGInsStateType__System_Config_RecordBufferOverrun:{    snprintf(Result, ResultMaxSize, "System_Config_RecordBufferOverrun");    break;    }
        case eGInsStateType__System_Config_CircleBufferSettings:{    snprintf(Result, ResultMaxSize, "System_Config_CircleBufferSettings");    break;    }
        case eGInsStateType__System_Config_DataInterfaceSize:{    snprintf(Result, ResultMaxSize, "System_Config_DataInterfaceSize");    break;    }
        case eGInsStateType__System_Config_VariableCount:{    snprintf(Result, ResultMaxSize, "System_Config_VariableCount");    break;    }
        case eGInsStateType__System_Config_DeviceCount:{    snprintf(Result, ResultMaxSize, "System_Config_DeviceCount");    break;    }
        case eGInsStateType__System_Config_TransportCount:{    snprintf(Result, ResultMaxSize, "System_Config_TransportCount");    break;    }
        case eGInsStateType__System_Config_CommunicationSlotsExceeded:{    snprintf(Result, ResultMaxSize, "System_Config_CommunicationSlotsExceeded");    break;    }
        case eGInsStateType__System_Config_InvalidCycleCounter:{    snprintf(Result, ResultMaxSize, "System_Config_InvalidCycleCounter");    break;    }
        case eGInsStateType__System_Config_InvalidArithmeticChConfig:{    snprintf(Result, ResultMaxSize, "System_Config_InvalidArithmeticChConfig");    break;    }
        case eGInsStateType__System_Config_ArithmeticStack:{    snprintf(Result, ResultMaxSize, "System_Config_ArithmeticStack");    break;    }
//================================================================================================================================================
// Group: GInsStateTypeSyncController
//================================================================================================================================================
        case eGInsStateType__SyncController_Runtime_ConfigError:{    snprintf(Result, ResultMaxSize, "SyncController_Runtime_ConfigError");    break;    }
        case eGInsStateType__SyncController_Runtime_SyncSignalMissing:{    snprintf(Result, ResultMaxSize, "SyncController_Runtime_SyncSignalMissing");    break;    }
        case eGInsStateType__SyncController_Runtime_EtherCATSyncSignalMissing:{    snprintf(Result, ResultMaxSize, "SyncController_Runtime_EtherCATSyncSignalMissing");    break;    }
        case eGInsStateType__SyncController_Runtime_HWSyncSignalMissing:{    snprintf(Result, ResultMaxSize, "SyncController_Runtime_HWSyncSignalMissing");    break;    }
        case eGInsStateType__SyncController_Runtime_AppSignalMissing:{    snprintf(Result, ResultMaxSize, "SyncController_Runtime_AppSignalMissing");    break;    }
        case eGInsStateType__SyncController_Runtime_NotSpecified:{    snprintf(Result, ResultMaxSize, "SyncController_Runtime_NotSpecified");    break;    }
        case eGInsStateType__SyncController_Config_ParamsError:{    snprintf(Result, ResultMaxSize, "SyncController_Config_ParamsError");    break;    }
        case eGInsStateType__SyncController_Config_NotLoaded:{    snprintf(Result, ResultMaxSize, "SyncController_Config_NotLoaded");    break;    }
//================================================================================================================================================
// Group: GInsStateTypeHighSpeedPort
//================================================================================================================================================
        case eGInsStateType__HighSpeedPort_Runtime_ConfigError:{    snprintf(Result, ResultMaxSize, "HighSpeedPort_Runtime_ConfigError");    break;    }
        case eGInsStateType__HighSpeedPort_Runtime_ConnectionFailed:{    snprintf(Result, ResultMaxSize, "HighSpeedPort_Runtime_ConnectionFailed");    break;    }
        case eGInsStateType__HighSpeedPort_Runtime_TimeoutOccured:{    snprintf(Result, ResultMaxSize, "HighSpeedPort_Runtime_TimeoutOccured");    break;    }
        case eGInsStateType__HighSpeedPort_Runtime_ReadDirectory:{    snprintf(Result, ResultMaxSize, "HighSpeedPort_Runtime_ReadDirectory");    break;    }
        case eGInsStateType__HighSpeedPort_Runtime_DeleteFile:{    snprintf(Result, ResultMaxSize, "HighSpeedPort_Runtime_DeleteFile");    break;    }
        case eGInsStateType__HighSpeedPort_Runtime_ReadFileData:{    snprintf(Result, ResultMaxSize, "HighSpeedPort_Runtime_ReadFileData");    break;    }
        case eGInsStateType__HighSpeedPort_Runtime_ReadFileSize:{    snprintf(Result, ResultMaxSize, "HighSpeedPort_Runtime_ReadFileSize");    break;    }
        case eGInsStateType__HighSpeedPort_Runtime_ReadBufferStates:{    snprintf(Result, ResultMaxSize, "HighSpeedPort_Runtime_ReadBufferStates");    break;    }
        case eGInsStateType__HighSpeedPort_Runtime_ReadBufferHeader:{    snprintf(Result, ResultMaxSize, "HighSpeedPort_Runtime_ReadBufferHeader");    break;    }
        case eGInsStateType__HighSpeedPort_Runtime_ReadRTC:{    snprintf(Result, ResultMaxSize, "HighSpeedPort_Runtime_ReadRTC");    break;    }
        case eGInsStateType__HighSpeedPort_Runtime_WriteRTC:{    snprintf(Result, ResultMaxSize, "HighSpeedPort_Runtime_WriteRTC");    break;    }
        case eGInsStateType__HighSpeedPort_Runtime_ReadDiagnostics:{    snprintf(Result, ResultMaxSize, "HighSpeedPort_Runtime_ReadDiagnostics");    break;    }
        case eGInsStateType__HighSpeedPort_Runtime_ReadStates:{    snprintf(Result, ResultMaxSize, "HighSpeedPort_Runtime_ReadStates");    break;    }
        case eGInsStateType__HighSpeedPort_Runtime_ReadwriteVariables:{    snprintf(Result, ResultMaxSize, "HighSpeedPort_Runtime_ReadwriteVariables");    break;    }
        case eGInsStateType__HighSpeedPort_Runtime_ReadBufferData:{    snprintf(Result, ResultMaxSize, "HighSpeedPort_Runtime_ReadBufferData");    break;    }
        case eGInsStateType__HighSpeedPort_Runtime_NotSpecified:{    snprintf(Result, ResultMaxSize, "HighSpeedPort_Runtime_NotSpecified");    break;    }
        case eGInsStateType__HighSpeedPort_Config_ParamsError:{    snprintf(Result, ResultMaxSize, "HighSpeedPort_Config_ParamsError");    break;    }
//================================================================================================================================================
// Group: GInsStateTypeDataPort
//================================================================================================================================================
//================================================================================================================================================
// Group: GInsStateTypeFTPServer
//================================================================================================================================================
//================================================================================================================================================
// Group: GInsStateTypeFTPClient
//================================================================================================================================================
//================================================================================================================================================
// Group: GInsStateTypePlugin
//================================================================================================================================================
        case eGInsStateType__Plugin_Runtime_Config:{    snprintf(Result, ResultMaxSize, "Plugin_Runtime_Config");    break;    }
        case eGInsStateType__Plugin_Runtime_InterfaceNotAvailable:{    snprintf(Result, ResultMaxSize, "Plugin_Runtime_InterfaceNotAvailable");    break;    }
        case eGInsStateType__Plugin_Runtime_Custom0:{    snprintf(Result, ResultMaxSize, "Plugin_Runtime_Custom0");    break;    }
        case eGInsStateType__Plugin_Runtime_Custom1:{    snprintf(Result, ResultMaxSize, "Plugin_Runtime_Custom1");    break;    }
        case eGInsStateType__Plugin_Runtime_Custom2:{    snprintf(Result, ResultMaxSize, "Plugin_Runtime_Custom2");    break;    }
        case eGInsStateType__Plugin_Runtime_Custom3:{    snprintf(Result, ResultMaxSize, "Plugin_Runtime_Custom3");    break;    }
        case eGInsStateType__Plugin_Runtime_Custom4:{    snprintf(Result, ResultMaxSize, "Plugin_Runtime_Custom4");    break;    }
        case eGInsStateType__Plugin_Runtime_Custom5:{    snprintf(Result, ResultMaxSize, "Plugin_Runtime_Custom5");    break;    }
        case eGInsStateType__Plugin_Runtime_Custom6:{    snprintf(Result, ResultMaxSize, "Plugin_Runtime_Custom6");    break;    }
        case eGInsStateType__Plugin_Runtime_Custom7:{    snprintf(Result, ResultMaxSize, "Plugin_Runtime_Custom7");    break;    }
        case eGInsStateType__Plugin_Runtime_Custom8:{    snprintf(Result, ResultMaxSize, "Plugin_Runtime_Custom8");    break;    }
        case eGInsStateType__Plugin_Runtime_Custom9:{    snprintf(Result, ResultMaxSize, "Plugin_Runtime_Custom9");    break;    }
        case eGInsStateType__Plugin_Runtime_Custom10:{    snprintf(Result, ResultMaxSize, "Plugin_Runtime_Custom10");    break;    }
        case eGInsStateType__Plugin_Runtime_Custom11:{    snprintf(Result, ResultMaxSize, "Plugin_Runtime_Custom11");    break;    }
        case eGInsStateType__Plugin_Runtime_Custom12:{    snprintf(Result, ResultMaxSize, "Plugin_Runtime_Custom12");    break;    }
        case eGInsStateType__Plugin_Runtime_Custom13:{    snprintf(Result, ResultMaxSize, "Plugin_Runtime_Custom13");    break;    }
        case eGInsStateType__Plugin_Runtime_Custom14:{    snprintf(Result, ResultMaxSize, "Plugin_Runtime_Custom14");    break;    }
        case eGInsStateType__Plugin_Runtime_Custom15:{    snprintf(Result, ResultMaxSize, "Plugin_Runtime_Custom15");    break;    }
        case eGInsStateType__Plugin_Runtime_Custom16:{    snprintf(Result, ResultMaxSize, "Plugin_Runtime_Custom16");    break;    }
        case eGInsStateType__Plugin_Runtime_Custom17:{    snprintf(Result, ResultMaxSize, "Plugin_Runtime_Custom17");    break;    }
        case eGInsStateType__Plugin_Runtime_Custom18:{    snprintf(Result, ResultMaxSize, "Plugin_Runtime_Custom18");    break;    }
        case eGInsStateType__Plugin_Runtime_Custom19:{    snprintf(Result, ResultMaxSize, "Plugin_Runtime_Custom19");    break;    }
        case eGInsStateType__Plugin_Runtime_Custom20:{    snprintf(Result, ResultMaxSize, "Plugin_Runtime_Custom20");    break;    }
        case eGInsStateType__Plugin_Runtime_NotSpecified:{    snprintf(Result, ResultMaxSize, "Plugin_Runtime_NotSpecified");    break;    }
        case eGInsStateType__Plugin_Config_NotLoaded:{    snprintf(Result, ResultMaxSize, "Plugin_Config_NotLoaded");    break;    }
        case eGInsStateType__Plugin_Config_VariableNotFound:{    snprintf(Result, ResultMaxSize, "Plugin_Config_VariableNotFound");    break;    }
        case eGInsStateType__Plugin_Config_InterfaceNotAvailable:{    snprintf(Result, ResultMaxSize, "Plugin_Config_InterfaceNotAvailable");    break;    }
        case eGInsStateType__Plugin_Config_NotSpecified:{    snprintf(Result, ResultMaxSize, "Plugin_Config_NotSpecified");    break;    }
//================================================================================================================================================
// Group: GInsStateTypeEtherCAT
//================================================================================================================================================
        case eGInsStateType__EtherCAT_Runtime_ConfigError:{    snprintf(Result, ResultMaxSize, "EtherCAT_Runtime_ConfigError");    break;    }
        case eGInsStateType__EtherCAT_Runtime_InvalidConfiguration:{    snprintf(Result, ResultMaxSize, "EtherCAT_Runtime_InvalidConfiguration");    break;    }
        case eGInsStateType__EtherCAT_Runtime_NotInitialized:{    snprintf(Result, ResultMaxSize, "EtherCAT_Runtime_NotInitialized");    break;    }
        case eGInsStateType__EtherCAT_Runtime_SyncSignalMissing:{    snprintf(Result, ResultMaxSize, "EtherCAT_Runtime_SyncSignalMissing");    break;    }
        case eGInsStateType__EtherCAT_Runtime_InterfaceAccess:{    snprintf(Result, ResultMaxSize, "EtherCAT_Runtime_InterfaceAccess");    break;    }
        case eGInsStateType__EtherCAT_Runtime_HWNotAvailable:{    snprintf(Result, ResultMaxSize, "EtherCAT_Runtime_HWNotAvailable");    break;    }
//================================================================================================================================================
// Group: GInsStateTypeNetwork
//================================================================================================================================================
//================================================================================================================================================
// Group: GInsStateTypeNTP
//================================================================================================================================================
        case eGInsStateType__NTP_Runtime_ConfigError:{    snprintf(Result, ResultMaxSize, "NTP_Runtime_ConfigError");    break;    }
        case eGInsStateType__NTP_Runtime_SocketError:{    snprintf(Result, ResultMaxSize, "NTP_Runtime_SocketError");    break;    }
        case eGInsStateType__NTP_Runtime_SetupReceive:{    snprintf(Result, ResultMaxSize, "NTP_Runtime_SetupReceive");    break;    }
        case eGInsStateType__NTP_Runtime_SetupTransmit:{    snprintf(Result, ResultMaxSize, "NTP_Runtime_SetupTransmit");    break;    }
        case eGInsStateType__NTP_Runtime_SelectError:{    snprintf(Result, ResultMaxSize, "NTP_Runtime_SelectError");    break;    }
        case eGInsStateType__NTP_Runtime_Receive:{    snprintf(Result, ResultMaxSize, "NTP_Runtime_Receive");    break;    }
        case eGInsStateType__NTP_Runtime_PacketLength:{    snprintf(Result, ResultMaxSize, "NTP_Runtime_PacketLength");    break;    }
        case eGInsStateType__NTP_Runtime_InvalidHostname:{    snprintf(Result, ResultMaxSize, "NTP_Runtime_InvalidHostname");    break;    }
        case eGInsStateType__NTP_Runtime_BindToPort:{    snprintf(Result, ResultMaxSize, "NTP_Runtime_BindToPort");    break;    }
        case eGInsStateType__NTP_Runtime_Connect:{    snprintf(Result, ResultMaxSize, "NTP_Runtime_Connect");    break;    }
        case eGInsStateType__NTP_Runtime_NotStarted:{    snprintf(Result, ResultMaxSize, "NTP_Runtime_NotStarted");    break;    }
        case eGInsStateType__NTP_Runtime_PacketRejected:{    snprintf(Result, ResultMaxSize, "NTP_Runtime_PacketRejected");    break;    }
        case eGInsStateType__NTP_Config_ParamsError:{    snprintf(Result, ResultMaxSize, "NTP_Config_ParamsError");    break;    }
        case eGInsStateType__NTP_Config_NotLoaded:{    snprintf(Result, ResultMaxSize, "NTP_Config_NotLoaded");    break;    }
//================================================================================================================================================
// Group: GInsStateTypeEthernet
//================================================================================================================================================
//================================================================================================================================================
// Group: GInsStateTypeHardware
//================================================================================================================================================
        case eGInsStateType__Hardware_FPGANotLoaded:{    snprintf(Result, ResultMaxSize, "Hardware_FPGANotLoaded");    break;    }
        case eGInsStateType__Hardware_FPGAWrongVersion:{    snprintf(Result, ResultMaxSize, "Hardware_FPGAWrongVersion");    break;    }
        case eGInsStateType__Hardware_I2CNotAvailable:{    snprintf(Result, ResultMaxSize, "Hardware_I2CNotAvailable");    break;    }
        case eGInsStateType__Hardware_BoardConfigurationAccess:{    snprintf(Result, ResultMaxSize, "Hardware_BoardConfigurationAccess");    break;    }
        case eGInsStateType__Hardware_ApplicationTypeInvalid:{    snprintf(Result, ResultMaxSize, "Hardware_ApplicationTypeInvalid");    break;    }
        case eGInsStateType__Hardware_SerialNumberInvalid:{    snprintf(Result, ResultMaxSize, "Hardware_SerialNumberInvalid");    break;    }
        case eGInsStateType__Hardware_BIOSAccess:{    snprintf(Result, ResultMaxSize, "Hardware_BIOSAccess");    break;    }
        case eGInsStateType__Hardware_GPIOAccess:{    snprintf(Result, ResultMaxSize, "Hardware_GPIOAccess");    break;    }
//================================================================================================================================================
// Group: GInsStateTypeSubSystem
//================================================================================================================================================
        case eGInsStateType__SubSystem_InvalidDriverVersion:{    snprintf(Result, ResultMaxSize, "SubSystem_InvalidDriverVersion");    break;    }
        case eGInsStateType__SubSystem_AccessFailed:{    snprintf(Result, ResultMaxSize, "SubSystem_AccessFailed");    break;    }
        case eGInsStateType__SubSystem_BoardResetNeeded:{    snprintf(Result, ResultMaxSize, "SubSystem_BoardResetNeeded");    break;    }
//================================================================================================================================================
// Group: GInsStateTypeDATAAPI
//================================================================================================================================================
        case eGInsStateType__DATAAPI_InvalidDataSource:{    snprintf(Result, ResultMaxSize, "DATAAPI_InvalidDataSource");    break;    }
        case eGInsStateType__DATAAPI_InvalidPointer:{    snprintf(Result, ResultMaxSize, "DATAAPI_InvalidPointer");    break;    }
        case eGInsStateType__DATAAPI_InvalidAccess:{    snprintf(Result, ResultMaxSize, "DATAAPI_InvalidAccess");    break;    }
        case eGInsStateType__DATAAPI_VariableNotFound:{    snprintf(Result, ResultMaxSize, "DATAAPI_VariableNotFound");    break;    }
        case eGInsStateType__DATAAPI_NotSpecified:{    snprintf(Result, ResultMaxSize, "DATAAPI_NotSpecified");    break;    }
        case eGInsStateType__DATAAPI_TimeoutOccured:{    snprintf(Result, ResultMaxSize, "DATAAPI_TimeoutOccured");    break;    }
        case eGInsStateType__DATAAPI_BufferOverrun:{    snprintf(Result, ResultMaxSize, "DATAAPI_BufferOverrun");    break;    }
        case eGInsStateType__DATAAPI_InvalidParameter:{    snprintf(Result, ResultMaxSize, "DATAAPI_InvalidParameter");    break;    }
        case eGInsStateType__DATAAPI_NotImplemented:{    snprintf(Result, ResultMaxSize, "DATAAPI_NotImplemented");    break;    }
//================================================================================================================================================
// Group: GInsStateTypeCAN
//================================================================================================================================================
        case eGInsStateType__CAN_Runtime_ConfigError:{    snprintf(Result, ResultMaxSize, "CAN_Runtime_ConfigError");    break;    }
        case eGInsStateType__CAN_Runtime_OpenPort:{    snprintf(Result, ResultMaxSize, "CAN_Runtime_OpenPort");    break;    }
        case eGInsStateType__CAN_Runtime_TXBufferFull:{    snprintf(Result, ResultMaxSize, "CAN_Runtime_TXBufferFull");    break;    }
        case eGInsStateType__CAN_Runtime_RXBufferOverrun:{    snprintf(Result, ResultMaxSize, "CAN_Runtime_RXBufferOverrun");    break;    }
        case eGInsStateType__CAN_Runtime_BusLight:{    snprintf(Result, ResultMaxSize, "CAN_Runtime_BusLight");    break;    }
        case eGInsStateType__CAN_Runtime_BusHeavy:{    snprintf(Result, ResultMaxSize, "CAN_Runtime_BusHeavy");    break;    }
        case eGInsStateType__CAN_Runtime_BusOFF:{    snprintf(Result, ResultMaxSize, "CAN_Runtime_BusOFF");    break;    }
        case eGInsStateType__CAN_Runtime_RXQueOverrun:{    snprintf(Result, ResultMaxSize, "CAN_Runtime_RXQueOverrun");    break;    }
        case eGInsStateType__CAN_Runtime_TXQueFull:{    snprintf(Result, ResultMaxSize, "CAN_Runtime_TXQueFull");    break;    }
        case eGInsStateType__CAN_Runtime_RegTestFailed:{    snprintf(Result, ResultMaxSize, "CAN_Runtime_RegTestFailed");    break;    }
        case eGInsStateType__CAN_Runtime_CreateResource:{    snprintf(Result, ResultMaxSize, "CAN_Runtime_CreateResource");    break;    }
        case eGInsStateType__CAN_Runtime_IllegalParam:{    snprintf(Result, ResultMaxSize, "CAN_Runtime_IllegalParam");    break;    }
        case eGInsStateType__CAN_Runtime_IllegalParamValue:{    snprintf(Result, ResultMaxSize, "CAN_Runtime_IllegalParamValue");    break;    }
        case eGInsStateType__CAN_Runtime_IllegalHandle:{    snprintf(Result, ResultMaxSize, "CAN_Runtime_IllegalHandle");    break;    }
        case eGInsStateType__CAN_Runtime_NotSpecified:{    snprintf(Result, ResultMaxSize, "CAN_Runtime_NotSpecified");    break;    }
        case eGInsStateType__CAN_Config_ParamsError:{    snprintf(Result, ResultMaxSize, "CAN_Config_ParamsError");    break;    }
        case eGInsStateType__CAN_Config_InvalidPort:{    snprintf(Result, ResultMaxSize, "CAN_Config_InvalidPort");    break;    }
//================================================================================================================================================
// Group: GInsStateTypeModbusMaster
//================================================================================================================================================
        case eGInsStateType__ModbusMaster_Runtime_ConfigError:{    snprintf(Result, ResultMaxSize, "ModbusMaster_Runtime_ConfigError");    break;    }
        case eGInsStateType__ModbusMaster_Runtime_OpenPort:{    snprintf(Result, ResultMaxSize, "ModbusMaster_Runtime_OpenPort");    break;    }
        case eGInsStateType__ModbusMaster_Runtime_Read:{    snprintf(Result, ResultMaxSize, "ModbusMaster_Runtime_Read");    break;    }
        case eGInsStateType__ModbusMaster_Runtime_Write:{    snprintf(Result, ResultMaxSize, "ModbusMaster_Runtime_Write");    break;    }
        case eGInsStateType__ModbusMaster_Runtime_Connect:{    snprintf(Result, ResultMaxSize, "ModbusMaster_Runtime_Connect");    break;    }
        case eGInsStateType__ModbusMaster_Runtime_NotSpecified:{    snprintf(Result, ResultMaxSize, "ModbusMaster_Runtime_NotSpecified");    break;    }
        case eGInsStateType__ModbusMaster_Config_ParamsError:{    snprintf(Result, ResultMaxSize, "ModbusMaster_Config_ParamsError");    break;    }
//================================================================================================================================================
// Group: GInsStateTypeModbusSlave
//================================================================================================================================================
        case eGInsStateType__ModbusSlave_Runtime_ConfigError:{    snprintf(Result, ResultMaxSize, "ModbusSlave_Runtime_ConfigError");    break;    }
        case eGInsStateType__ModbusSlave_Runtime_OpenPort:{    snprintf(Result, ResultMaxSize, "ModbusSlave_Runtime_OpenPort");    break;    }
        case eGInsStateType__ModbusSlave_Runtime_NotSpecified:{    snprintf(Result, ResultMaxSize, "ModbusSlave_Runtime_NotSpecified");    break;    }
        case eGInsStateType__ModbusSlave_Config_ParamsError:{    snprintf(Result, ResultMaxSize, "ModbusSlave_Config_ParamsError");    break;    }
//================================================================================================================================================
// Group: GInsStateTypeFFTProcessor
//================================================================================================================================================
        case eGInsStateType__FFTProcessor_Runtime_InputGVIError:{    snprintf(Result, ResultMaxSize, "FFTProcessor_Runtime_InputGVIError");    break;    }
        case eGInsStateType__FFTProcessor_Runtime_SizeError:{    snprintf(Result, ResultMaxSize, "FFTProcessor_Runtime_SizeError");    break;    }
        case eGInsStateType__FFTProcessor_Runtime_WindowTypeError:{    snprintf(Result, ResultMaxSize, "FFTProcessor_Runtime_WindowTypeError");    break;    }
        case eGInsStateType__FFTProcessor_Runtime_WindowSubTypeError:{    snprintf(Result, ResultMaxSize, "FFTProcessor_Runtime_WindowSubTypeError");    break;    }
        case eGInsStateType__FFTProcessor_Runtime_WindowParameterError:{    snprintf(Result, ResultMaxSize, "FFTProcessor_Runtime_WindowParameterError");    break;    }
        case eGInsStateType__FFTProcessor_Runtime_EnableGeneratingFilesError:{    snprintf(Result, ResultMaxSize, "FFTProcessor_Runtime_EnableGeneratingFilesError");    break;    }
        case eGInsStateType__FFTProcessor_Runtime_BufferSizeError:{    snprintf(Result, ResultMaxSize, "FFTProcessor_Runtime_BufferSizeError");    break;    }
        case eGInsStateType__FFTProcessor_Runtime_ModeError:{    snprintf(Result, ResultMaxSize, "FFTProcessor_Runtime_ModeError");    break;    }
        case eGInsStateType__FFTProcessor_Runtime_TimeDomainBufferOverlappingPercentageError:{    snprintf(Result, ResultMaxSize, "FFTProcessor_Runtime_TimeDomainBufferOverlappingPercentageError");    break;    }
        case eGInsStateType__FFTProcessor_Runtime_PerformanceSavingTakeLastValuesModeActivatedError:{    snprintf(Result, ResultMaxSize, "FFTProcessor_Runtime_PerformanceSavingTakeLastValuesModeActivatedError");    break;    }
        case eGInsStateType__FFTProcessor_Runtime_EvaluatorFunctionTypeError:{    snprintf(Result, ResultMaxSize, "FFTProcessor_Runtime_EvaluatorFunctionTypeError");    break;    }
        case eGInsStateType__FFTProcessor_Runtime_EvaluatorStartFrequencyError:{    snprintf(Result, ResultMaxSize, "FFTProcessor_Runtime_EvaluatorStartFrequencyError");    break;    }
        case eGInsStateType__FFTProcessor_Runtime_EvaluatorStopFrequencyError:{    snprintf(Result, ResultMaxSize, "FFTProcessor_Runtime_EvaluatorStopFrequencyError");    break;    }
        case eGInsStateType__FFTProcessor_Runtime_EvaluatorResult1GVIError:{    snprintf(Result, ResultMaxSize, "FFTProcessor_Runtime_EvaluatorResult1GVIError");    break;    }
        case eGInsStateType__FFTProcessor_Runtime_EvaluatorResult2GVIError:{    snprintf(Result, ResultMaxSize, "FFTProcessor_Runtime_EvaluatorResult2GVIError");    break;    }
        case eGInsStateType__FFTProcessor_Runtime_NotSpecified:{    snprintf(Result, ResultMaxSize, "FFTProcessor_Runtime_NotSpecified");    break;    }
        case eGInsStateType__FFTProcessor_Config_ParamsError:{    snprintf(Result, ResultMaxSize, "FFTProcessor_Config_ParamsError");    break;    }
        case eGInsStateType__FFTProcessor_Config_EvaluatorParamsError:{    snprintf(Result, ResultMaxSize, "FFTProcessor_Config_EvaluatorParamsError");    break;    }
//================================================================================================================================================
// Group: GInsStateTypeDistributorPort
//================================================================================================================================================
        case eGInsStateType__DistributorPort_Runtime_ConfigError:{    snprintf(Result, ResultMaxSize, "DistributorPort_Runtime_ConfigError");    break;    }
        case eGInsStateType__DistributorPort_Runtime_TransferDataTheme:{    snprintf(Result, ResultMaxSize, "DistributorPort_Runtime_TransferDataTheme");    break;    }
        case eGInsStateType__DistributorPort_Runtime_OffsetRecvFrom:{    snprintf(Result, ResultMaxSize, "DistributorPort_Runtime_OffsetRecvFrom");    break;    }
        case eGInsStateType__DistributorPort_Runtime_LengthRecvFrom:{    snprintf(Result, ResultMaxSize, "DistributorPort_Runtime_LengthRecvFrom");    break;    }
        case eGInsStateType__DistributorPort_Runtime_OffsetSendTo:{    snprintf(Result, ResultMaxSize, "DistributorPort_Runtime_OffsetSendTo");    break;    }
        case eGInsStateType__DistributorPort_Runtime_LengthSendTo:{    snprintf(Result, ResultMaxSize, "DistributorPort_Runtime_LengthSendTo");    break;    }
        case eGInsStateType__DistributorPort_Runtime_FrequencySendTo:{    snprintf(Result, ResultMaxSize, "DistributorPort_Runtime_FrequencySendTo");    break;    }
        case eGInsStateType__DistributorPort_Runtime_RetriggerTimeS:{    snprintf(Result, ResultMaxSize, "DistributorPort_Runtime_RetriggerTimeS");    break;    }
        case eGInsStateType__DistributorPort_Runtime_IPAddressSendTo:{    snprintf(Result, ResultMaxSize, "DistributorPort_Runtime_IPAddressSendTo");    break;    }
        case eGInsStateType__DistributorPort_Runtime_IPPortSendTo:{    snprintf(Result, ResultMaxSize, "DistributorPort_Runtime_IPPortSendTo");    break;    }
        case eGInsStateType__DistributorPort_Runtime_IPPortRecvFrom:{    snprintf(Result, ResultMaxSize, "DistributorPort_Runtime_IPPortRecvFrom");    break;    }
        case eGInsStateType__DistributorPort_Runtime_UseTransferCounters:{    snprintf(Result, ResultMaxSize, "DistributorPort_Runtime_UseTransferCounters");    break;    }
        case eGInsStateType__DistributorPort_Runtime_SetAllUsedOutputVariablesToDefault:{    snprintf(Result, ResultMaxSize, "DistributorPort_Runtime_SetAllUsedOutputVariablesToDefault");    break;    }
        case eGInsStateType__DistributorPort_Runtime_SetAllPropertiesToDefault:{    snprintf(Result, ResultMaxSize, "DistributorPort_Runtime_SetAllPropertiesToDefault");    break;    }
        case eGInsStateType__DistributorPort_Runtime_SendCollectorCount:{    snprintf(Result, ResultMaxSize, "DistributorPort_Runtime_SendCollectorCount");    break;    }
        case eGInsStateType__DistributorPort_Runtime_DataInterfaceAccess:{    snprintf(Result, ResultMaxSize, "DistributorPort_Runtime_DataInterfaceAccess");    break;    }
        case eGInsStateType__DistributorPort_Runtime_ReceiveDataSizeInvalid:{    snprintf(Result, ResultMaxSize, "DistributorPort_Runtime_ReceiveDataSizeInvalid");    break;    }
        case eGInsStateType__DistributorPort_Runtime_SendDataSizeInvalid:{    snprintf(Result, ResultMaxSize, "DistributorPort_Runtime_SendDataSizeInvalid");    break;    }
        case eGInsStateType__DistributorPort_Runtime_BindFailed:{    snprintf(Result, ResultMaxSize, "DistributorPort_Runtime_BindFailed");    break;    }
        case eGInsStateType__DistributorPort_Runtime_NotSpecified:{    snprintf(Result, ResultMaxSize, "DistributorPort_Runtime_NotSpecified");    break;    }
        case eGInsStateType__DistributorPort_Config_ParamsError:{    snprintf(Result, ResultMaxSize, "DistributorPort_Config_ParamsError");    break;    }
//================================================================================================================================================
// Group: GInsStateTypeDataPlayer
//================================================================================================================================================
        case eGInsStateType__DataPlayer_Runtime_ConfigError:{    snprintf(Result, ResultMaxSize, "DataPlayer_Runtime_ConfigError");    break;    }
        case eGInsStateType__DataPlayer_Runtime_NotSpecified:{    snprintf(Result, ResultMaxSize, "DataPlayer_Runtime_NotSpecified");    break;    }
        case eGInsStateType__DataPlayer_Config_VariableNotFound:{    snprintf(Result, ResultMaxSize, "DataPlayer_Config_VariableNotFound");    break;    }
        case eGInsStateType__DataPlayer_Config_DataSourceNotAvailable:{    snprintf(Result, ResultMaxSize, "DataPlayer_Config_DataSourceNotAvailable");    break;    }
        case eGInsStateType__DataPlayer_Config_InterfaceNotAvailable:{    snprintf(Result, ResultMaxSize, "DataPlayer_Config_InterfaceNotAvailable");    break;    }
        case eGInsStateType__DataPlayer_Config_BufferInitFailed:{    snprintf(Result, ResultMaxSize, "DataPlayer_Config_BufferInitFailed");    break;    }
//================================================================================================================================================
// Group: GInsStateTypeGIconfig
//================================================================================================================================================
        case eGInsStateType__GIconfig_InvalidID:{    snprintf(Result, ResultMaxSize, "GIconfig_InvalidID");    break;    }
        case eGInsStateType__GIconfig_InvalidType:{    snprintf(Result, ResultMaxSize, "GIconfig_InvalidType");    break;    }
        case eGInsStateType__GIconfig_InvalidObject:{    snprintf(Result, ResultMaxSize, "GIconfig_InvalidObject");    break;    }
        case eGInsStateType__GIconfig_CreateObject:{    snprintf(Result, ResultMaxSize, "GIconfig_CreateObject");    break;    }
        case eGInsStateType__GIconfig_AddToOwner:{    snprintf(Result, ResultMaxSize, "GIconfig_AddToOwner");    break;    }
        case eGInsStateType__GIconfig_SetOwnedObject:{    snprintf(Result, ResultMaxSize, "GIconfig_SetOwnedObject");    break;    }
        case eGInsStateType__GIconfig_InvalidPath:{    snprintf(Result, ResultMaxSize, "GIconfig_InvalidPath");    break;    }
        case eGInsStateType__GIconfig_InvalidName:{    snprintf(Result, ResultMaxSize, "GIconfig_InvalidName");    break;    }
        case eGInsStateType__GIconfig_NotAvailableObject:{    snprintf(Result, ResultMaxSize, "GIconfig_NotAvailableObject");    break;    }
        case eGInsStateType__GIconfig_FileSaveError:{    snprintf(Result, ResultMaxSize, "GIconfig_FileSaveError");    break;    }
        case eGInsStateType__GIconfig_FileLoadError:{    snprintf(Result, ResultMaxSize, "GIconfig_FileLoadError");    break;    }
        case eGInsStateType__GIconfig_Exists:{    snprintf(Result, ResultMaxSize, "GIconfig_Exists");    break;    }
        case eGInsStateType__GIconfig_NotExists:{    snprintf(Result, ResultMaxSize, "GIconfig_NotExists");    break;    }
        case eGInsStateType__GIconfig_ErrorsPresent:{    snprintf(Result, ResultMaxSize, "GIconfig_ErrorsPresent");    break;    }
        case eGInsStateType__GIconfig_WarningsPresent:{    snprintf(Result, ResultMaxSize, "GIconfig_WarningsPresent");    break;    }
        case eGInsStateType__GIconfig_InfosPresent:{    snprintf(Result, ResultMaxSize, "GIconfig_InfosPresent");    break;    }
        case eGInsStateType__GIconfig_ChangesPresent:{    snprintf(Result, ResultMaxSize, "GIconfig_ChangesPresent");    break;    }
        case eGInsStateType__GIconfig_AlreadyUsedID:{    snprintf(Result, ResultMaxSize, "GIconfig_AlreadyUsedID");    break;    }
        case eGInsStateType__GIconfig_ModifyingAccessDenied:{    snprintf(Result, ResultMaxSize, "GIconfig_ModifyingAccessDenied");    break;    }
        case eGInsStateType__GIconfig_InvalidCommand:{    snprintf(Result, ResultMaxSize, "GIconfig_InvalidCommand");    break;    }
        case eGInsStateType__GIconfig_MultipleSelectionNotPossible:{    snprintf(Result, ResultMaxSize, "GIconfig_MultipleSelectionNotPossible");    break;    }
        case eGInsStateType__GIconfig_RemoveObject:{    snprintf(Result, ResultMaxSize, "GIconfig_RemoveObject");    break;    }
        case eGInsStateType__GIconfig_CopyObject:{    snprintf(Result, ResultMaxSize, "GIconfig_CopyObject");    break;    }
        case eGInsStateType__GIconfig_ModifyObject:{    snprintf(Result, ResultMaxSize, "GIconfig_ModifyObject");    break;    }
        case eGInsStateType__GIconfig_RemoveDirectory:{    snprintf(Result, ResultMaxSize, "GIconfig_RemoveDirectory");    break;    }
        case eGInsStateType__GIconfig_RemoveFile:{    snprintf(Result, ResultMaxSize, "GIconfig_RemoveFile");    break;    }
//================================================================================================================================================
// Group: GInsStateTypeGIservice
//================================================================================================================================================
        case eGInsStateType__GIservice_DeviceAlreadyAdded:{    snprintf(Result, ResultMaxSize, "GIservice_DeviceAlreadyAdded");    break;    }
        case eGInsStateType__GIservice_Route_CouldNotCreate:{    snprintf(Result, ResultMaxSize, "GIservice_Route_CouldNotCreate");    break;    }
        case eGInsStateType__GIservice_Route_CouldNotDelete:{    snprintf(Result, ResultMaxSize, "GIservice_Route_CouldNotDelete");    break;    }
        case eGInsStateType__GIservice_Route_NotAvailable:{    snprintf(Result, ResultMaxSize, "GIservice_Route_NotAvailable");    break;    }
        case eGInsStateType__GIservice_Route_NoCommunication:{    snprintf(Result, ResultMaxSize, "GIservice_Route_NoCommunication");    break;    }
        case eGInsStateType__GIservice_Route_XmlRpcMethodExecution:{    snprintf(Result, ResultMaxSize, "GIservice_Route_XmlRpcMethodExecution");    break;    }
        case eGInsStateType__GIservice_Plugin_NotAvailable:{    snprintf(Result, ResultMaxSize, "GIservice_Plugin_NotAvailable");    break;    }
        case eGInsStateType__GIservice_Plugin_XmlRpcMethodExecution:{    snprintf(Result, ResultMaxSize, "GIservice_Plugin_XmlRpcMethodExecution");    break;    }
        case eGInsStateType__GIservice_HandleProject:{    snprintf(Result, ResultMaxSize, "GIservice_HandleProject");    break;    }
        case eGInsStateType__GIservice_HandleStorageDestinations:{    snprintf(Result, ResultMaxSize, "GIservice_HandleStorageDestinations");    break;    }
        case eGInsStateType__GIservice_Process_StartFailed:{    snprintf(Result, ResultMaxSize, "GIservice_Process_StartFailed");    break;    }
        case eGInsStateType__GIservice_Process_Stoptailed:{    snprintf(Result, ResultMaxSize, "GIservice_Process_Stoptailed");    break;    }
        case eGInsStateType__GIservice_Process_Stopped:{    snprintf(Result, ResultMaxSize, "GIservice_Process_Stopped");    break;    }
//================================================================================================================================================
// Group: GInsStateTypeSDI12Master
//================================================================================================================================================
        case eGInsStateType__SDI12Master_Runtime_ConfigError:{    snprintf(Result, ResultMaxSize, "SDI12Master_Runtime_ConfigError");    break;    }
        case eGInsStateType__SDI12Master_Runtime_OpenPort:{    snprintf(Result, ResultMaxSize, "SDI12Master_Runtime_OpenPort");    break;    }
        case eGInsStateType__SDI12Master_Runtime_Read:{    snprintf(Result, ResultMaxSize, "SDI12Master_Runtime_Read");    break;    }
        case eGInsStateType__SDI12Master_Runtime_NotSpecified:{    snprintf(Result, ResultMaxSize, "SDI12Master_Runtime_NotSpecified");    break;    }
        case eGInsStateType__SDI12Master_Config_ParamsError:{    snprintf(Result, ResultMaxSize, "SDI12Master_Config_ParamsError");    break;    }
//================================================================================================================================================
// Group: GInsStateTypeMQTTClient
//================================================================================================================================================
        case eGInsStateType__MQTTClient_Runtime_ConfigError:{    snprintf(Result, ResultMaxSize, "MQTTClient_Runtime_ConfigError");    break;    }
        case eGInsStateType__MQTTClient_Runtime_OpenPort:{    snprintf(Result, ResultMaxSize, "MQTTClient_Runtime_OpenPort");    break;    }
        case eGInsStateType__MQTTClient_Runtime_Read:{    snprintf(Result, ResultMaxSize, "MQTTClient_Runtime_Read");    break;    }
        case eGInsStateType__MQTTClient_Runtime_NotSpecified:{    snprintf(Result, ResultMaxSize, "MQTTClient_Runtime_NotSpecified");    break;    }
        case eGInsStateType__MQTTClient_Config_ParamsError:{    snprintf(Result, ResultMaxSize, "MQTTClient_Config_ParamsError");    break;    }
//================================================================================================================================================
// Group: GInsStateTypeHttpAPI
//================================================================================================================================================
        case eGInsStateType__HttpAPI_Runtime_ConfigError:{    snprintf(Result, ResultMaxSize, "HttpAPI_Runtime_ConfigError");    break;    }
        case eGInsStateType__HttpAPI_Runtime_EndpointNotAvailable:{    snprintf(Result, ResultMaxSize, "HttpAPI_Runtime_EndpointNotAvailable");    break;    }
        case eGInsStateType__HttpAPI_Runtime_InvalidParams:{    snprintf(Result, ResultMaxSize, "HttpAPI_Runtime_InvalidParams");    break;    }
        case eGInsStateType__HttpAPI_Runtime_ObjectNotAvailable:{    snprintf(Result, ResultMaxSize, "HttpAPI_Runtime_ObjectNotAvailable");    break;    }
        case eGInsStateType__HttpAPI_Runtime_HandlingTimeout:{    snprintf(Result, ResultMaxSize, "HttpAPI_Runtime_HandlingTimeout");    break;    }
        case eGInsStateType__HttpAPI_Runtime_NotSpecified:{    snprintf(Result, ResultMaxSize, "HttpAPI_Runtime_NotSpecified");    break;    }
        case eGInsStateType__HttpAPI_Config_ParamsError:{    snprintf(Result, ResultMaxSize, "HttpAPI_Config_ParamsError");    break;    }
//================================================================================================================================================
// Group: GInsStateTypeMetaData
//================================================================================================================================================
        case eGInsStateType__MetaData_Runtime_ConfigError:{    snprintf(Result, ResultMaxSize, "MetaData_Runtime_ConfigError");    break;    }
        case eGInsStateType__MetaData_Runtime_DataBaseNotFound:{    snprintf(Result, ResultMaxSize, "MetaData_Runtime_DataBaseNotFound");    break;    }
        case eGInsStateType__MetaData_Runtime_DataBaseNotLoaded:{    snprintf(Result, ResultMaxSize, "MetaData_Runtime_DataBaseNotLoaded");    break;    }
        case eGInsStateType__MetaData_Runtime_ProjectHandlingFailed:{    snprintf(Result, ResultMaxSize, "MetaData_Runtime_ProjectHandlingFailed");    break;    }
        case eGInsStateType__MetaData_Runtime_FailedToSetValue:{    snprintf(Result, ResultMaxSize, "MetaData_Runtime_FailedToSetValue");    break;    }
        case eGInsStateType__MetaData_Runtime_NotSpecified:{    snprintf(Result, ResultMaxSize, "MetaData_Runtime_NotSpecified");    break;    }
        case eGInsStateType__MetaData_Config_ParamsError:{    snprintf(Result, ResultMaxSize, "MetaData_Config_ParamsError");    break;    }
//================================================================================================================================================
// Group: GInsStateTypeGIcom
//================================================================================================================================================
        case eGInsStateType__GIcom_WebSocketConnectivity:{    snprintf(Result, ResultMaxSize, "GIcom_WebSocketConnectivity");    break;    }
//================================================================================================================================================
// Group: ...
//================================================================================================================================================
        default:{    snprintf(Result, ResultMaxSize, "eGInsStateType unknown (value=%d)", Enum);    break;    }
    }
    return (Result);
}

char *GINSSTATE_GetText(TGInsState State, const char *Separator, char *Result, size_t ResultMaxSize)
{
    if (Result == NULL)
        return (Result);
    *Result = 0;
    if (GINSSTATE_IsNone(State))
        return (Result);
    else
    {
        if (GINSSTATE_IsOther(State))
        {
            size_t ActLen = strlen(Result);
            snprintf(&Result[ActLen], ResultMaxSize - ActLen, "other (value=%d)", (int)GINSSTATE_GetType(State));
            return (Result);
        }
        else
        {
            size_t ActLen = strlen(Result);
            strncpy(&Result[ActLen], "Level:", ResultMaxSize - ActLen);
            ActLen = strlen(Result);
            GINSSTATE_GetLevelText(GINSSTATE_GetLevel(State), &Result[ActLen], ResultMaxSize - ActLen);
            ActLen = strlen(Result);
            if (Separator == NULL)
                strncpy(&Result[ActLen], ": ", ResultMaxSize - ActLen);
            else
                strncpy(&Result[ActLen], Separator, ResultMaxSize - ActLen);
            ActLen = strlen(Result);
            strncpy(&Result[ActLen], "Type:", ResultMaxSize - ActLen);
            ActLen = strlen(Result);
            GINSSTATE_GetTypeText(GINSSTATE_GetType(State), &Result[ActLen], ResultMaxSize - ActLen);
            return (Result);
        }
    }
}

//================================================================================================================================================
//================================================================================================================================================
