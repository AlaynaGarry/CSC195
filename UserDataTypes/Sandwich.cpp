#include "Sandwich.h"
#include <iostream>

const float Sandwich::Tax = 0.08f;

void Sandwich::Read() {
	std::cout << "name: ";
	std::cin >> name;
}

void Sandwich::Write() {
	std::cout << name << std::endl;
	std::cout << Tax << std::endl;
}



void f2() {
	
}