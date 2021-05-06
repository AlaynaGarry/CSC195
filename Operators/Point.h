#pragma once
#include <iostream>

namespace ang {

	class Point
	{
	public:
		Point() : x{ 0 }, y{ 0 } {}
		Point(float x, float y) : x { x }, y{ y } {}

		void Add(Point& point);
		Point operator + (Point& point);
		Point operator - (Point& point);
		Point operator * (float s);

		void Write(std::ostream& ostream);
		friend std::ostream& operator << (std::ostream& ostream, ang::Point& point);

	private:
		float x, y;
	};
	
}


