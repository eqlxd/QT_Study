/*
 * SSHClientInterface.hpp
 *
 *  Created on: July 23, 2016
 *      Author: sls
 */

#pragma once

namespace GIns {
namespace Data {

class ISSHClientInterface;

typedef std::shared_ptr<GIns::Data::ISSHClientInterface> SSHClientInterfacerPtr;

extern "C" GINSDATA_API ISSHClientInterface* CALL CreateIGInsSSHClientInterface(const char* IPAddress,
																				const char* user,
																				const char* password,
																				double timeoutSec,
																				int port);
class ISSHClientInterface
{
public:
	/**
	 * Create a connected ssh client
	 *
	 * @param hostName		ip address or dns name of the server
	 * @param user			username
	 * @param password		password
	 * @param timeoutSec	timeout in seconds
	 * @param port			port (optional)
	 *
	 * @return				ssh client interface as shared pointer
	 */
	static  SSHClientInterfacerPtr  Create(const std::string &hostName,
													   const std::string &user,
													   const std::string &password,
													   double timeoutSec,
													   int port=22)
	{
		ISSHClientInterface *rPtr = CreateIGInsSSHClientInterface(hostName.c_str(),
																			user.c_str(),
																			password.c_str(),
																			timeoutSec,
																			port);
		if (rPtr)
		{
			return SSHClientInterfacerPtr(rPtr, std::mem_fn(&ISSHClientInterface::Release));
		}
		else
		{
			return SSHClientInterfacerPtr();
		}
	}
	int32_t GetLastError(std::string &message)
	{
		GINS_LOCK_GUARD<GINS_MUTEX> lock(Mutex());
		int errorCode = 0;
		const char* msg = this->GetLastErrorStr(errorCode);
		if (msg && errorCode != 0){
			message.append(msg);
		}
		return errorCode;
	}
	virtual ~ISSHClientInterface();
	/**
	 * @brief release function
	 *
	 * @details needed to destruct the device when constructed through shared library boundaries
	 */
	virtual size_t CALL SSHShellRead(char *buffer, size_t buflen)=0;
        virtual size_t CALL SSHShellExecute(const char* commandLine, char *buffer, size_t buflen, bool &finishedReading) = 0;
	virtual bool CALL SSHShellWrite(const char* buffer, size_t buflen)=0;
	virtual bool CALL SSHShellSetBlocking(bool blocking)=0;
	virtual bool CALL SSHShellClose() = 0;
	virtual bool CALL SSHShellReconnect() = 0;

	virtual void CALL Release() = 0;
	/**
	* Initialisation function to ensure that static variables are created
	* This ensures that static mutex can be instanciated before multiple threads could do it in an unsave way
	*/
	static void InitInterface()
	{
		std::lock_guard<GINS_MUTEX> lock(Mutex());
		std::cout << "IGInsDataSource: intialize interface" << std::endl;
	}
private:
	//Never returns NULL, but not thread save!
	virtual const char* CALL GetLastErrorStr(int &errorCode) = 0;
private:
	static GINS_MUTEX& 		Mutex(){static GINS_MUTEX mtx; return mtx;}
};

} /* namespace Data */
} /* namespace GIns */
