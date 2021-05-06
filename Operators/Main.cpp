#include "Point.h"
#include <iostream>

void print(int x) { std::cout << x << std::endl; }
void print(bool x) { std::cout << x << std::endl; }
void print(float x) { std::cout << x << std::endl; }

//ang::Point operator + (ang::Point& p1, ang::Point& p2) {
//	ang::Point point;
//	point.x = p1.x += p2.x;
//	point.y = p1.y += p2.y;
//	
//	return point;
//}

int main() {
	/*print(true);
	print(10);
	print(12.0f);*/

	// + - << / *  == !=

	ang::Point point1(10, 14);
	ang::Point point2(20, 24);

	//point1.Add(point2);
	ang::Point point3 = (point1 + point2) * 3.0f;
	//point3.Write(std::cout);
	(std::cout << point3) << point2 << point1;

}

