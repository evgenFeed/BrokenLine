#include "Point.h"

Point::Point(int x, int y) :
	x(x),
	y(y)
{
	
}

const std::pair<int, int> Point::getCoords()
{
	return std::pair<int, int> {x, y};
}

const Point& Point::operator-(const Point& p)
{
	return Point(this->x - p.x, this->y - p.y);
}
