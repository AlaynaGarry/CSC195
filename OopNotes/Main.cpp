#include "Animal.h"
#include "Reptile.h"
#include "Bird.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
	cout << sizeof(Animal) << endl;
	
		//Animal animal;
		//animal.Speak();
	Reptile lizard;
	lizard.Speak();
	cout << sizeof(lizard) << endl;

	Bird robin(8, 12.0f);
	robin.Speak();

	std::vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(12);
	numbers[1] = 23;
	numbers.pop_back();

	std::vector<Animal*> animals;
	animals.push_back(new Bird);
	animals.push_back(new Reptile);
	animals.push_back(new Bird);

	for (Animal* animal : animals) {
		animal->Speak();
	}
	for (Animal* animal : animals) {
		delete animal;
	}
	animals.clear();
}