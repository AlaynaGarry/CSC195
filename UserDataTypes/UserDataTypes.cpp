// UserDataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include "Sandwich.h"
#include <iostream>

//typedef int currency;

typedef unsigned short byte;

struct RGB {
	byte r;
	byte g;
	byte b;
};

using currency = double;

void f1();
void f1() {}

int main() {

	Sandwich sandwich;
	sandwich.Read();
	sandwich.Write();

	std::cout << Shop_Name << std::endl;

	f1();
	f2();
	//currency balance;

	enum Difficulty {
		Easy = 4, 
		Medium,
		Hard
	};
	Difficulty difficulty = Easy;
}



//struct is public class is private

//class CrabCake {
//
//};
//
//class Brownie {
//
//};
//
//class Sandwich
//{
//public:
//    void Display() {
//        std::cout << "price: $" << price << std::endl;
//    }
//public:
//    char name[32];
//    float price;
//    bool isHot;
//    };
//
//
//{
//    std::cout << "Hello World!\n";
//
//    Sandwich sandwich;
//    sandwich.price = 4.99f;
//    sandwich.isHot = true;
//
//    sandwich.Display();
//    
//    std::cout << sizeof(Sandwich) << std::endl;
//
//    int i = 1000; //4 bytes
//    char c = 100; // 1 byte
//
//    c = i;
//
//    std::cout << (int)c << std::endl;
//    std::cout << sizeof(char);
//
//    double d = 34.5; // 8 bytes
//    float f = 56.7f; // 4 bytes
//
//    d = f;
//    f = static_cast<float>(d);
//
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file