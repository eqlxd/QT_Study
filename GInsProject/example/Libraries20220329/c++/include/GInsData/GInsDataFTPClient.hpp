/*
 * FTPClientInterface.hpp
 *
 *  Created on: Feb 5, 2014
 *      Author: sls
 */

#pragma once

#include <iostream>

namespace GIns {
namespace Data {

class IFTPClientInterface;

typedef std::shared_ptr<GIns::Data::IFTPClientInterface> FTPClientInterfacerPtr;

extern "C" GINSDATA_API IFTPClientInterface* CALL CreateIGInsFTPClientInterface_Offline(const char* IPAddress,
																				   TFTPType type,
																				   int port);
extern "C" GINSDATA_API IFTPClientInterface* CALL CreateIGInsFTPClientInterface_Connected(const char* IPAddress,
																					 const char* user,
																					 const char* password,
																					 double timeoutSec,
																					 TFTPType type,
																					 int port);
class IFTPClientInterface
{
public:
	///struct containing file infos
	struct FileInfo
	{
		bool 		m_IsDir;
		std::string m_Name;
		int64_t 	m_Size;
	};
	/**
	 * Create a ftp client that will be connected later
	 *
	 * @param hostName	ip address or dns name of the server
	 * @param type		ftp server type (optional)
	 * @param port		ftp port (optional)
	 *
	 * @return			ftp client interface as shared pointer
	 */
	static  FTPClientInterfacerPtr 	Create(const std::string &hostName,TFTPType type=FTPTypeUnknown,int port=21)
	{
		IFTPClientInterface *rPtr = CreateIGInsFTPClientInterface_Offline(hostName.c_str(),type,port);
		if (rPtr)
		{
			return FTPClientInterfacerPtr(rPtr, std::mem_fn(&IFTPClientInterface::Release));
		}
		else
		{
			return FTPClientInterfacerPtr();
		}
	}
	/**
	 * Create a connected ftp client
	 *
	 * @param hostName		ip address or dns name of the server
	 * @param user			username
	 * @param password		password
	 * @param timeoutSec	timeout in seconds
	 * @param type			ftp server type (optional)
	 * @param port			ftp port (optional)
	 *
	 * @return				ftp client interface as shared pointer
	 */
	static  FTPClientInterfacerPtr  Create(const std::string &hostName,
													   const std::string &user,
													   const std::string &password,
													   double timeoutSec,
													   TFTPType type=FTPTypeUnknown,
													   int port=21)
	{
		IFTPClientInterface *rPtr = CreateIGInsFTPClientInterface_Connected(hostName.c_str(),
																			user.c_str(),
																			password.c_str(),
																			timeoutSec,
																			type,
																			port);
		if (rPtr)
		{
			return FTPClientInterfacerPtr(rPtr, std::mem_fn(&IFTPClientInterface::Release));
		}
		else
		{
			return FTPClientInterfacerPtr();
		}
	}
	virtual bool CALL OpenConnection(const char *userName, const char *password, double timeoutSec) = 0;
	virtual bool CALL OpenConnection() = 0;
	virtual void CALL SetPassiveMode(bool mode) = 0;
	virtual bool CALL CloseConnection() = 0;
	bool GetActualDirectory(std::vector<FileInfo> &dirList)
	{
		GINS_LOCK_GUARD<GINS_MUTEX> lock(Mutex());
		dirList.clear();
		uint32_t count = this->GetActualDirectoryFiles();
		for(uint32_t i=0;i<count;i++)
		{
			FileInfo info;
			const char* name = this->GetFileInfo(i,info.m_IsDir,info.m_Size);
			if(name)
			{
				info.m_Name.assign(name);
				dirList.push_back(info);
			}
		}
		return dirList.size()>0;
	}
	bool GetFileState(const std::string &FileName,FileInfo &Info)
	{
		return this->GetFileInfo(FileName.c_str(),Info.m_IsDir,Info.m_Size);
	}
	virtual bool CALL ChangeActualDirectory(const char *Path, bool createPath) = 0;
	virtual bool CALL CreateDirectory(const char *Path) = 0;
	virtual bool CALL ReadFile(const char *SourceFileName, const char *DestinationFullFileName,size_t offsetRead, size_t maxLengthRead, bool AppendToExistingDestinationFile) = 0;
	virtual bool CALL ReadFile_Buffer(const char *SourceFileName, char *buffer, size_t offsetRead, size_t maxLengthRead, size_t* resultLength) = 0;
	virtual bool CALL WriteFile(const char *SourceFullFileName, const char *DestinationFileName) = 0;
	virtual bool CALL WriteFile_Buffer(const char *buffer,size_t bufLen, const char *DestinationFileName) = 0;
	virtual bool CALL DeleteFile(const char *FileName) = 0;
	virtual void CALL SetUsername(const char* user) = 0;
	virtual void CALL SetPassword(const char* password) = 0;
	virtual void CALL SetTimeout(double timeout) = 0;


	virtual const char* CALL 	GetHostName() 	= 0;
	virtual int CALL 			GetPort() 		= 0;
	virtual double CALL 		GetTimeout() 	= 0;
	virtual const char* CALL 	GetUsername() 	= 0;
	virtual const char*	CALL	GetPassword() 	= 0;
	virtual TFTPType CALL		GetType() 		= 0;


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
	virtual ~IFTPClientInterface();
	/**
	 * @brief release function
	 *
	 * @details needed to destruct the device when constructed through shared library boundaries
	 */
	virtual void CALL Release() = 0;
	/**
	* Initialization function to ensure that static variables are created
	* This ensures that static mutex can be instantiated before multiple threads could do it in an unsafe way
	*/
	static void InitInterface()
	{
		std::lock_guard<GINS_MUTEX> lock(Mutex());
		std::cout << "IGInsDataSource: intialize interface" << std::endl;
	}
private:
	//Never returns NULL, but not thread save!
	virtual const char* CALL GetLastErrorStr(int &errorCode) = 0;
	virtual uint32_t 	CALL GetActualDirectoryFiles() = 0;
	//Never returns NULL, but not thread save!
	virtual const char* CALL GetFileInfo(uint32_t index, bool &isDir, int64_t &size) = 0;
	virtual bool 		CALL GetFileInfo(const char *name, bool &isDir, int64_t &size) = 0;
private:
	static GINS_MUTEX& 		Mutex(){static GINS_MUTEX mtx; return mtx;}
};

} /* namespace Data */
} /* namespace GIns */
