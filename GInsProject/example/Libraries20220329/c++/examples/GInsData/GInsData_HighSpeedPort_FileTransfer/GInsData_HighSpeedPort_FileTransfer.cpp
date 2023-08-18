// GInsDataHighSpeedPortTest.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//


#include <float.h>
#include "GInsDataInterface.hpp"


int main(int argc, char* argv[])
{
	GIns::Data::GInsDevicePtr device = GIns::Data::IGInsDevice::CreateIGInsDevicePtr("192.168.5.38",20);
	if(device)
	{

		std::vector<GIns::Data::IGInsDevice::TFileInfo, std::allocator<GIns::Data::IGInsDevice::TFileInfo>> FileList;
		
		if (device->ReadDirectory("", FileList))  // use "/" to get all files of all directories ("hd0" or any available "usb0", "usb1", ...)
		{
			std::cout << "Success" << std::endl;

			std::vector<GIns::Data::IGInsDevice::TFileInfo, std::allocator<GIns::Data::IGInsDevice::TFileInfo>>::iterator FileIter;
			for (FileIter = FileList.begin(); FileIter != FileList.end(); ++FileIter)
			{
				std::cout 
					<< FileIter->m_Name << " "
					<< FileIter->m_Size << " "
					<< FileIter->m_Attr << " "
					<< FileIter->m_FileIdent << std::endl;
			}			
		}
		
		


		//delete a file
		//device->DeleteDeviceFile(FileList.at(0).m_FileIdent.c_str());
		
		if (device->ReadFileData("#summary.sta", "#summary.sta"))
		{
			std::cout << "success reading #summary.sta" << std::endl;
		}
		else
		{
			std::cout << "fail" << std::endl;
		}
		

		if (device->ReadFileData("#actual.sta", "#actual.sta"))
		{
			std::cout << "success reading #actual.sta" << std::endl;
		}
		else
		{
			std::cout << "fail" << std::endl;
		}
	}

	getchar();
	return 0;
}