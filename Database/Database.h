#pragma once
#include "Animal.h"
#include <vector>

class Database
{
public:
	~Database();

	//void Create(Animal::eType type);
	void Add(Animal::eType type);
	void DisplayAll();
	void DisplayName(const std::string& name);
	void DisplayType(Animal::eType type);
	void Load(const std::string& filename); 
	void Save(const std::string& filename);
	void RemoveAll();

private:
	Animal* Create(Animal::eType type);

private:
	std::vector<Animal*> m_animals;
};

