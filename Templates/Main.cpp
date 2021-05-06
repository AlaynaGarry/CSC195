#include <iostream>
#include "Point.h"

/*int max(int i1, int i2) {
	return (i1 > i2) ? i1 : i2;
}*/	

template<typename T>
T max(T i1, T i2) {
	return (i1 > i2) ? i1 : i2;
}

template<typename T1, typename T2>
T1 max(T1 i1, T2 i2) {
	return (i1 > i2) ? i1 : i2;
}

int main() {
	std::cout << max(12, 34) << std::endl;
	std::cout << max(6.5f, 3.2f) << std::endl;
	std::cout << max(6.5f, 3) << std::endl;
	
	Point<int> p1;
	Point<float> f1;

	array<Point<int>, 10> points;
}