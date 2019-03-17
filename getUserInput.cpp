#include "pch.h"
#include <iostream>
#include <string>
#include "resolveSubnet.h"

void getUserInput()
{
	std::string nName{ "some stuff" }; // network interface name
	std::string hostAddr{ "255" };
	int hostLength{ 0 }; // will be return on hostAddr.length()

	std::cout << "Enter network interface name: ";
	std::getline(std::cin, nName);
	std::cout << "Entered network: " << nName << '\n';

	std::cout << "Enter host address: ";
	std::getline(std::cin, hostAddr);
	std::cout << "Host name is: " << hostAddr <<  '\n';
	hostLength = hostAddr.length();
	std::cout << hostLength << '\n';

	resolveSubnet();

	
}