#pragma once
#include <utility>
class Point
{
public:
	Point(int x, int y);
	std::pair<int, int> getCoords() const;
	const Point operator-(const Point& p);
private:
	std::pair<int, int> coords;
};

