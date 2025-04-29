#include "1_Addressbook.h"
#include "2_Cube.cpp"
#include <iostream>

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

	if (IsSame(cube_1, cube_2))
	{
		cout << "cube_1 and cube_2 are the same" << endl;
	}
	else
	{
		cout << "cube_1 and cube_2 are different" << endl;
	}

	if (cube_1.IsSame(cube_2))
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

int main()
{
	return Test_2();
}