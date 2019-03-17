#include "pch.h"
#include <iostream>
#include <string>

void getUserInput()
{
	
	std::string nName{ "some stuff" }; // network interface name
	std::string hostAddr{ "255" };
	int hostLength{ 0 }; // will be return on hostAddr.length()
	std::string subnet{ "255" }; 
	int subnetSize{ 0 }; // will be done using spells. Or regex

	std::cout << "Enter network interface name: ";
	std::getline(std::cin, nName);
	std::cout << "Entered network: " << nName << '\n';

	std::cout << "Enter host address: ";
	std::getline(std::cin, hostAddr);
	std::cout << "Host name is: " << hostAddr <<  '\n';
	hostLength = hostAddr.length();
	std::cout << hostLength << '\n';

	std::cout << "Enter subnet thing: ";
	std::cin >> subnet;
	std::cout << "Subnet is: " << subnet << '\n';
	subnetSize = 1;
}