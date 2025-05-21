#include "1_Addressbook.h"
#include "2_Cube.h"
#include "3_CircleAndPoint.cpp"
#include <iostream>
#include "4_Calculator.h"

void Test_1()
{
	_1_Addressbook _1;
	_1.Entrance();
}

int Test_2()
{
	_2_Cube cube_1;
	cube_1.SetH(10);
	cube_1.SetW(11);
	cube_1.SetL(12);

	cout << cube_1.CalculateSqaure() << endl;
	cout << cube_1.CalculateVolume() << endl;

	_2_Cube cube_2;
	cube_2.SetH(10);
	cube_2.SetW(15);
	cube_2.SetL(12);

	if (cube_1.IsSameByClass(cube_2))
	{
		cout << "cube_1 and cube_2 are the same" << endl;
	}
	else
	{
		cout << "cube_1 and cube_2 are different" << endl;
	}

	system("pause");
	return 0;
}

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

int Test_4()
{
	// 计算器
	AbstractCalculator* calculator = new AddCalculator();
	calculator->m_Num1 = 10;
	calculator->m_Num2 = 20;
	cout << "Add: " << calculator->getResult() << endl;
	delete calculator;
	calculator = new SubCalculator();
	calculator->m_Num1 = 20;
	calculator->m_Num2 = 10;
	cout << "Sub: " << calculator->getResult() << endl;
	delete calculator;
	calculator = new MulCalculator();
	calculator->m_Num1 = 10;
	calculator->m_Num2 = 20;
	cout << "Mul: " << calculator->getResult() << endl;
	delete calculator;
	return 0;
}

int main()
{
	//Test_1();
	//Test_2();
	//Test_3();
	Test_4();
	return 0;
}