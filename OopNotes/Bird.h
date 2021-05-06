#pragma once
#include "Animal.h"

class Bird : public Animal {
public: 
	Bird(){}
	Bird(int lifespan, float flightSpeed) : Animal(lifespan){
		m_flightSpeed = flightSpeed;
		std::cout << "Bird Constructor\n";
	}
	void Speak() override;

protected: 
	float m_flightSpeed = 0.0f;
};

