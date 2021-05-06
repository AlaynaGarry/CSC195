#include "Point.h"

namespace ang {
	
	void Point::Write(std::ostream& ostream){
		ostream << x << " " << y << std::endl;
	}
	void Point::Add(Point& point){
		x += point.x;
		y += point.y;
	}

	Point Point::operator+(Point& point) {

		Point p;
		p.x = x + point.x;
		p.y = y + point.y;
		return p;

		//return Point(x + point.x, y + point.y);
	}
	
	Point Point::operator-(Point& point)
	{
		Point p;
		p.x = x - point.x;
		p.y = y - point.y;
		return p;
	}
	
	Point Point::operator*(float s)
	{
		Point p;
		p.x = x * s;
		p.y = y * s;
		return p;
	}

	std::ostream& operator << (std::ostream& ostream, ang::Point& point) {
		ostream << point.x << " " << point.y << std::endl;
		return ostream;
	}
}

