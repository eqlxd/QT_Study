#ifndef _GINSXMLRPCCLIENTTRANSPORT_H_
#define _GINSXMLRPCCLIENTTRANSPORT_H_

#include "ginsstate.h"

#include <string>

//========================================================================
namespace GInsXmlRpc {
//========================================================================

// Der Client benötigt eine Referenz auf den Transportkanal. Dies ist die
// Basisklasse, von der die jeweilige Transportklasse abgeleitet werden muss.
// Nur so können die diversen Implementierungen über einen einheitlichen Typ
// referenziert werden.
// Die folgenden Funktionen werden als Interface vorgeschrieben:
//   SetCfg():          Übergabe alle Informationen zum Aufbau einer Verbindung.
//   Connect():         Stellt eine Verbindung zum Server her.
//   Disconnect():      Trennt eine bestehende Verbindung.
//   TestConnection():  Optional! Liefert einen Fehler, wenn die Verbindung nicht steht
//   execute():         Führt ein XmlRpc-Kommando aus und empfängt die Antwort.

class XmlRpcClientTransport
{
public:
    XmlRpcClientTransport()
    {
    };

public:
    virtual ~XmlRpcClientTransport()
    {
    };

public:
    // Alle Informationen übergeben, die für die jeweilige Implementierung notwendig sind
    virtual int SetCfg(XmlRpcValue& Cfg) = 0;

    // Verbindung herstellen
    virtual int Connect(void) = 0;

    // Verbindung trennen
    virtual int Disconnect(void) = 0;

    // Kann überschrieben werden, wenn es einen sinnvollen Test für die Verbindung gibt.
    virtual int TestConnection(void) const
    {
        return TEnumGInsStateType::eGInsStateType__NONE;
    };

    // Ausführung einer Methode
    virtual int execute(const std::string& methodCall, std::string& methodResponse) = 0;
    virtual int execute(const std::string& methodCall, std::string& methodResponse, unsigned long Timeout)
    {
        return execute(methodCall, methodResponse);
    }
};

//========================================================================
} // namespace GInsXmlRpc
//========================================================================
#endif // #ifndef _GINSXMLRPCCLIENTTRANSPORT_H_
