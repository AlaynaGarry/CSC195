#include "Database.h"
#include <iostream>

int main() {
	Database database;
	bool quit = false;
	while (!quit) {
//display menu
		std::cout << "1) Add\n";
		std::cout << "2) Display All\n"; 
		std::cout << "3) Display Name\n"; 
		std::cout << "4) Display Type\n"; 
		std::cout << "5) Load\n"; 
		std::cout << "6) Save\n"; 
		std::cout << "7) Quit\n";

		std::cout << "Enter Choice: ";
		int choice;
		std::cin >> choice;

		std::string input;
		switch (choice)
		{
			case 1:
			{
				std::cout << "Type:\n1- Mammal\n2- Bird\n\nEnter a Type: ";
				std::cin >> input;
				int intInput = std::stoi(input);
				database.Add(static_cast<Animal::eType>(intInput));
				
				break;
			}
			case 2:
			{
				database.DisplayAll();
				break;
			}
			case 3:
			{
				std::cout << "Enter Name: ";
				std::cin >> input;
				database.DisplayName(input);
				break;
			}
			case 4:
			{
				std::cout << "Type:\n1- Mammal\n2- Bird\n\nEnter a Type: ";
				std::cin >> input;
				int intInput = std::stoi(input);
				database.DisplayType(static_cast<Animal::eType>(intInput));
				break;
			}
			case 5:
			{
				std::cout << "Enter Filename: ";
				std::string fName;
				std::cin >> fName;
				database.Load(fName);
				break;
			}
			case 6:
			{
				std::cout << "Enter Filename: ";
				std::string fName;
				std::cin >> fName;
				database.Save(fName);
				break;
			}
			case 7:
			{
				quit = true;
				break;
			}
			default:
			{
				break;
			}
		}
	}
}