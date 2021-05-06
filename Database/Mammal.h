#pragma once
#include "Animal.h"

class Mammal : public Animal {
public:
	eType getType() { return eType::Mammal; }

	void Read(std::ostream& ostream, std::istream& istream) override;
	void Write(std::ostream& ostream) override;

	void Read(std::ifstream& istream) override;
	void Write(std::ofstream& ostream) override;

protected: 
	int m_speed;
};
