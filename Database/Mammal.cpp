#include "Mammal.h"
#include <iostream>
#include <fstream>

void Mammal::Read(std::ostream& ostream, std::istream& istream){
	Animal::Read(ostream, istream);
	//ostream << "Enter Mammal's Speed: ";
	istream >> m_speed;
	m_type = static_cast<Animal::eType>(1);
}

void Mammal::Write(std::ostream& ostream){
	Animal::Write(ostream);
	ostream << "Speed: " << m_speed << std::endl;
}

void Mammal::Read(std::ifstream& istream){
	Animal::Read(istream);
	istream >> m_speed;
	m_type = static_cast<Animal::eType>(1);
}

void Mammal::Write(std::ofstream& ostream){
	Animal::Write(ostream);
	ostream << m_speed << std::endl;
}
