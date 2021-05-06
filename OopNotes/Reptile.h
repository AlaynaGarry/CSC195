#pragma once
#include "Animal.h"

class Reptile : public Animal {
public:
	void Speak() override;

protected:
	int m_numEggs = 0;
};

