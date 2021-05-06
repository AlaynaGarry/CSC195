#include "Database.h"
#include "Mammal.h"
#include "Bird.h"
#include <fstream>


Database::~Database() {
	RemoveAll();
}

void Database::Add(Animal::eType type) {
	Animal* animal = Create(type); 
	std::cin >> *animal;
	m_animals.push_back(animal);
}

//void Database::Create(Animal::eType type){
//	Animal* animal = nullptr;
//	switch (type)
//	{
//	case Animal::eType::Mammal:
//		animal = new Mammal;
//		break;
//	case Animal::eType::Bird:
//		animal = new Bird;
//		break;
//	/*case Animal::eType::Reptile:
//		
//		break;
//	case Animal::eType::Fish:
//		break;*/
//	default:
//		break;
//	}
//
//	animal->Read(std::cout, std::cin);
//	m_animals.push_back(animal);
//
//	std::cout << "1- Mammal\n2- Bird\n";
//	std::cout << "Enter Selection: ";
//	int selection; 
//	std::cin >> selection;
//}

void Database::DisplayAll(){
	for (Animal* animal : m_animals) {
		std::cout << *animal;
	}
}

void Database::DisplayName(const std::string& name){
	for (Animal* animal : m_animals) {
		if (name == animal->getName()) {
			std::cout << *animal;
		}
	}
}

void Database::DisplayType(Animal::eType type){
	for (Animal* animal : m_animals) {
		if (type == animal->getType()) {
			std::cout << *animal;
		}
	}
}

void Database::Load(const std::string& filename){
	std::ifstream input(filename); 
	if (input.is_open()) { 
		RemoveAll();
		while (!input.eof()) { 
			int type; 
			input >> type; 
			if (input.fail()) break;
			Animal* animal = Create(static_cast<Animal::eType>(type));
			input >> *animal;
			m_animals.push_back(animal);
		} 
	}
}

void Database::Save(const std::string& filename){
	std::ofstream output(filename); 
	if (output.is_open()) { 
		for (Animal* animal : m_animals) {
			//<get animal type and cast to int to write> 
			output << (int)animal->getType() << std::endl;
			//<call animal Write with the file output stream>
			std::cout << *animal;
		} 
	}
}

void Database::RemoveAll(){
	for (Animal* animal : m_animals) {
		delete animal;
	}
	m_animals.clear();
}

Animal* Database::Create(Animal::eType type){
	Animal* animal = nullptr; 
	switch (type) { 
		case Animal::eType::Mammal:animal = new Mammal; 
			break; 
		case Animal::eType::Bird:animal = new Bird;
			break; 
		default:
			break; 
	}																	
	return animal;
}
