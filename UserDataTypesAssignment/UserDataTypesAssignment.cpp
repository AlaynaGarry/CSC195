// UserDataTypesAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Header.h";

using namespace std;

Employee employees[5];

int main()
{
	unsigned short numEmployees;
	std::cout << "Number of Employees: ";
	std:cin >> numEmployees;

	for (int i = 0; i < numEmployees; i++) 
	{
		cout << "Enter the information of employee # " << i + 1 << " : ";
		employees[i].Read();
	}

	for (int i = 0; i < numEmployees; i++)
	{
		employees[i].Write();
	}
}