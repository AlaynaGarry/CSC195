#pragma once
#include <iostream>
#include <string>
class Animal
{
public:
	enum class eType
	{
		Mammal = 1,
		Bird = 2,
		//Reptile = 3,
		//Fish = 4
	};

public:
	std::string getName() { return m_name; };
	virtual eType getType() = 0;
	virtual void Read(std::ostream& ostream, std::istream& istream);
	virtual void Write(std::ostream& ostream);

	virtual void Read(std::ifstream& istream); 
	virtual void Write(std::ofstream& ostream);

	friend std::istream& operator >> (std::istream& istream, Animal& animal);
	friend std::ostream& operator << (std::ostream& ostream, Animal& animal);

protected: 
	eType m_type;
	std::string m_name;
	int m_lifespan = 0;
};



