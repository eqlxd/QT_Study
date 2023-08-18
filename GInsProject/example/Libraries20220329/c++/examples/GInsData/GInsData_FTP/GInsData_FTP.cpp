// GInsDataHighSpeedPortTest.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//


#include <float.h>
#include "GInsDataInterface.hpp"

int main(int argc, char* argv[])
{
	GIns::Data::FTPClientInterfacerPtr client = GIns::Data::IFTPClientInterface::Create("192.168.5.3", TFTPType::FTPTypeUnknown,21);
	if (client)
	{
		client->SetPassiveMode(true);

		if (client->OpenConnection("6", "6", 5))
		{
			/*
			if (client->ReadFile("#actual.sta", std::string("D:\#actual" + std::to_string(0) + ".sta").c_str(), false))
			{
				std::cout << "File successfully read" << std::endl;
			}
			else
			{
				std::string error;
				if (client->GetLastError(error) != 0)
				{
					std::cout << error << std::endl;
				}
			}
			*/

			//client->ChangeActualDirectory("/home/user1/system",false);
			std::vector<GIns::Data::IFTPClientInterface::FileInfo> dirList;
			if (client->GetActualDirectory(dirList))
			{
				for (auto itr = dirList.begin(); itr != dirList.end(); ++itr)
				{
					std::cout << "Name: " << itr->m_Name << " Size: " << itr->m_Size << std::endl;
				}
			}

			//read a dat file from Q.gate USB-stick:
			if (client->ReadFile("!uu0_2005-01-01_00-01-27_866003.dat", "D:\\data\\qgate\\datafile.dat",0,0,false))
			{
				std::cout << "File successfully read" << std::endl;
			}

			
			client->CloseConnection();
		}
		else
		{
			std::string error;
			if (client->GetLastError(error) != 0)
			{
				std::cout << error << std::endl;
			}
		}

	}

	getchar();
	return 0;
}
