#pragma once
#include <iostream>

class Animal {
public: 
	Animal() { 

		std::cout << "Animal Constructor\n";
		m_lifespan = 0;
		m_p = new int(30);

	}
	Animal(int lifespan) {m_lifespan = lifespan;}

	~Animal() {
		std::cout << "Animal Destructor\n";
		delete m_p;
	}

	virtual void Speak() = 0;

	int GetLifespan() { return m_lifespan; }
	void SetLifespan(int lifespan) { m_lifespan = lifespan; }

protected:
	int m_lifespan = 5; //4 bytes
	int* m_p = nullptr; // 4 bytes
	//vtable function pointer (4 bytes)
};
