#include "pch.h"
#include <iostream>

int readN()
{
	int num;
	std::cout << "Enter: ";
	std::cin >> num;

	return num;
}

void writeN(int num)
{
	std::cout << "\nAnswer: " << num;
}

int main()
{
	int num1 = readN();
	int num2 = readN();
	int result = num1 + num2;

	writeN(result);

	return 0;
}