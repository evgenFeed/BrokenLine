#include "Point.h"

Point::Point(int x, int y) :
	coords{x,y}
{

}
std::pair<int, int> Point::getCoords() const {
	return coords;
}

const Point Point::operator-(const Point& p) {
	return Point(coords.first - p.getCoords().first, coords.second - p.getCoords().second);
}
