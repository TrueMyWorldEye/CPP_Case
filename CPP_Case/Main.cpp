#include "1_Addressbook.h"
#include "2_Cube.cpp"
#include "3_CircleAndPoint.cpp"
#include <iostream>

void Test_1()
{
	_1_Addressbook _1;
	_1.Entrance();
}

int Test_2()
{



int Test_3()
{
	Circle circle;
	circle.SetCircle(0, 0, 10);
	Point point;
	point.SetPoint(10, 0);
	if (circle.IsInside(point))
	{
		std::cout << "Point is inside the circle." << std::endl;
	}
	else if (circle.IsOutside(point))
	{
		std::cout << "Point is outside the circle." << std::endl;
	}
	else if (circle.IsOnCircle(point))
	{
		std::cout << "Point is on the circle." << std::endl;
	}
	else
	{
		std::cout << "Point is not on the circle." << std::endl;
	}
	system("pause");
	return 0;
}

int main()
{
	return Test_3();
}