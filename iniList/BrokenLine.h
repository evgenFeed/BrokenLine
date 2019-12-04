#pragma once
#include <vector>
#include "Point.h"
#include <cmath>

template <class T>
class BrokenLine
{
public:
	BrokenLine(std::initializer_list<T> points);
	float				getLength();
	void				getPoints();
private:
	std::vector<T>		line;
	unsigned int		num;
	float				length;
	std::vector<Point*>	points;
private:
	void				checkLength();
};

template<class T>
inline BrokenLine<T>::BrokenLine(std::initializer_list<T> pointS) : 
	line(pointS),
	points{},
	length(0),
	num(0)
{
	int i = 0;
	while (line.size() % 2 > 0 ? i < line.size() - 1 : i < line.size())
	{
		points.push_back(new Point(line[i], line[i + 1]));
		i += 2;
	}
}
template<class T>
inline float BrokenLine<T>::getLength()
{
	checkLength();
	std::cout << "length = " << length;
	return length;
}
template<class T>
inline void BrokenLine<T>::getPoints()
{
	for (auto p : points)
	{
		std::cout << "first : " << p->getCoords().first << " second : " << p->getCoords().second << std::endl;
	}
	std::cout << "points: " << points.size() << " " << std::endl;
}
template<class T>
inline void BrokenLine<T>::checkLength()
{
	for (int i = 0; i < points.size()-1; i++)
	{
		length += sqrt(pow(points[i + 1]->getCoords().first - points[i]->getCoords().first, 2) + pow(points[i + 1]->getCoords().second - points[i]->getCoords().second, 2));
	}
};
