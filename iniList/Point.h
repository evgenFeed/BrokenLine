#pragma once
#include <utility>
class Point
{
public:
	Point(int x, int y);
	const std::pair<int, int> getCoords();
	const Point& operator-(const Point& p);

private:
	int x, y;
};

