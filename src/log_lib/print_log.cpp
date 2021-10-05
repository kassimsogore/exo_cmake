#include <iostream>
#include <log_lib/print_log.h>
#include <FirstOrganizedCmake.h>

void hello_world(){
		std::cout << "Hello World!!!!" << std::endl;
}

void print_version(){
	
	std::cout << "MAJOR_VERSION = " << FirstOrganizedCmake_VERSION_MAJOR << std::endl;
	std::cout << "MINOR_VERSION = " << FirstOrganizedCmake_VERSION_MINOR << std::endl;
}