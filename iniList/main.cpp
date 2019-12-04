#include <iostream>
#include "BrokenLine.h"
#include "Point.h"

int main()
{
	BrokenLine<int> first({-1,2,3,6,2});
	first.getPoints();
	first.getLength();
	return 0;
}