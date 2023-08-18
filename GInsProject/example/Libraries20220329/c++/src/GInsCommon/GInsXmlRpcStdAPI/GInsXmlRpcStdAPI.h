//========================================================================
// GInsXmlRpcIFGenEng V2.41 (2021-04-26)
// This file was produced by means of an automated generator tool.
// Please modify content between labeled "{{...}}" positions ONLY!
//========================================================================
#if !defined(_GINSXMLRPCSTDAPI_H)
#define _GINSXMLRPCSTDAPI_H


#include "ginsdefs.h"


#include <list>


//+++---------------------------------------------------------
/*{{Add_Own_Includes*/
#include "GInsXmlRpcStdAPI_Types.h"
#define ALLOW_INTERFACE_INHERITANCE
/*}}Add_Own_Includes*/
//+++---------------------------------------------------------


//========================================================================
namespace GInsXmlRpc {
//========================================================================
class XmlRpcValue;
class XmlRpcServer;
class XmlRpcServerMethod;
class XmlRpcRouter;
class XmlRpcRouterMethod;
//========================================================================
} // namespace GInsXmlRpc
//========================================================================


//========================================================================
namespace GInsXmlRpcStdAPI {
//========================================================================
//+++---------------------------------------------------------
/*{{Add_Own_Forward_Declarations*/
/*}}Add_Own_Forward_Declarations*/
//+++---------------------------------------------------------


//========================================================================
// CGInsXmlRpcStdAPI
//========================================================================
class CGInsXmlRpcStdAPI
{
protected:
    ~CGInsXmlRpcStdAPI(void);
private:
    CGInsXmlRpcStdAPI(void); // Singleton Design Pattern
    CGInsXmlRpcStdAPI(const CGInsXmlRpcStdAPI& ); // Copy-CTOR not defined
    CGInsXmlRpcStdAPI& operator=(const CGInsXmlRpcStdAPI& ); // assignment operator not defined
#ifndef ALLOW_INTERFACE_INHERITANCE
public:
    // Singleton Design Pattern
    static CGInsXmlRpcStdAPI& Instance(void);
#endif
public:
    // Registering methods and routes
    void Register(GInsXmlRpc::XmlRpcServer& Server, GInsXmlRpc::XmlRpcRouter& Router);
public:
    // Deregistering methods and routes
    void  UnRegister(void);
protected:
    // List of registered methods
    typedef std::list<GInsXmlRpc::XmlRpcServerMethod*> METHOD_LIST;
    METHOD_LIST m_pMethods;
    void RegisterMethods(GInsXmlRpc::XmlRpcServer& Server);
    void AddMethod(GInsXmlRpc::XmlRpcServerMethod* pMethod = 0);
    void UnRegisterMethods(void);
public:
    void GetMethodNames(GInsXmlRpc::XmlRpcValue& MethodNames);
protected:
    // List of registered routes
    typedef std::list<GInsXmlRpc::XmlRpcRouterMethod*> ROUTE_LIST;
    ROUTE_LIST m_pRoutes;
    void RegisterRoutes(GInsXmlRpc::XmlRpcRouter& Router);
    void UnRegisterRoutes(void);
public:
    void AddRoute(GInsXmlRpc::XmlRpcRouterMethod* pRouterMethod = 0);
    void DeleteRoute(const char* pszRoute);
protected:
    void SetRouter(GInsXmlRpc::XmlRpcRouter& Router)
    {
        m_pRouter = &Router;
    }
    GInsXmlRpc::XmlRpcRouter*   m_pRouter;
    

    //+++---------------------------------------------------------
    /*{{Add_Own_Elements*/
public:
    virtual void GIns_Connect_GetParams        (GInsXmlRpcStdAPI::GIns_Connect::CParams& Params)=0;
    virtual void GIns_Connect_Execute          (GInsXmlRpcStdAPI::GIns_Connect::CParams& Params, GInsXmlRpcStdAPI::GIns_Connect::CResults& Results)=0;

    virtual void GIns_Disconnect_GetParams     (GInsXmlRpcStdAPI::GIns_Disconnect::CParams& Params)=0;
    virtual void GIns_Disconnect_Execute       (GInsXmlRpcStdAPI::GIns_Disconnect::CParams& Params)=0;

    virtual void GIns_Notification_GetParams   (GInsXmlRpcStdAPI::GIns_Notification::CParams& Params)=0;
    virtual void GIns_Notification_Execute     (GInsXmlRpcStdAPI::GIns_Notification::CParams& Params, GInsXmlRpcStdAPI::GIns_Notification::CResults& Results)=0;

    virtual void GIns_Trace_GetParams          (GInsXmlRpcStdAPI::GIns_Trace::CParams& Params)=0;
    virtual void GIns_Trace_Execute            (GInsXmlRpcStdAPI::GIns_Trace::CParams& Params)=0;

   static void StdType_ClearPossibilities(GInsXmlRpc::XmlRpcValue& value);
   static void StdType_ClearPossibilities(const GInsXmlRpc::XmlRpcValue& valueIn,GInsXmlRpc::XmlRpcValue& valueOut);

   static void StdType_ClearSelectedValues(GInsXmlRpc::XmlRpcValue& value);
   static void StdType_ClearSelectedValues(const GInsXmlRpc::XmlRpcValue& valueIn, GInsXmlRpc::XmlRpcValue& valueOut);

   struct TGInsStdTCPPorts
   {
      int TCPPort_HighSpeedPort;
      int TCPPort_SSH;
      int TCPPort_Rpc;
   };
   static bool ResolveDeviceIDToConnectionParameter(std::map<std::string, GInsXmlRpcStdAPI::CGIns_DeviceInfo>& deviceList, const std::string& id, std::string& Hostname, TGInsStdTCPPorts& stdPorts);
/*}}Add_Own_Elements*/
    //+++---------------------------------------------------------
}; // class CGInsXmlRpcStdAPI


#ifndef ALLOW_INTERFACE_INHERITANCE
// Singleton Design Pattern
CGInsXmlRpcStdAPI& GInsXmlRpcStdAPI(void);
#endif


//+++---------------------------------------------------------
/*{{Add_Own_Declarations*/
/*}}Add_Own_Declarations*/
//+++---------------------------------------------------------
//========================================================================
}; // namespace GInsXmlRpcStdAPI
//========================================================================
#endif // #if !defined(_GINSXMLRPCSTDAPI_H)

