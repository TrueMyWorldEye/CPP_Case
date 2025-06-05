#pragma once
#include <iostream>
#include "1_Addressbook.h"
#include "2_Cube.h"
#include "3_CircleAndPoint.cpp"
#include "4_Calculator.h"
#include "7_WorkerManager.h"
#include "10_SpeechContest.h"

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

void Test_7()
{
	/// 职工管理系统
	WorkerManager wm;
	int choice = 0;
	while (true)
	{
		wm.showMenu();
		cout << "请输入您的选择: ";
		cin >> choice;

		switch (choice)
		{
		case 0:
			wm.exitSystem();
			break;
		case 1:
			wm.addEmp();
			break;
		case 2:
			wm.showEmp();
			break;
		case 3:
			wm.deleteEmp();
			break;
		case 4:
			wm.modifyEmp();
			break;
		case 5:
			wm.findEmp();
			break;
		case 6:
			wm.sortEmp();
			break;
		case 7:
			wm.cleanFile();
			break;
		default:
			system("cls");
			cout << "输入错误，请重新输入！" << endl;
			break;
		}
	}
}

void Test_10()
{
	// 演讲比赛管理系统
	SpeechManager sm;
	int choice = 0; //用来存储用户的选项

	while (true)
	{
		sm.show_Menu();

		cout << "请输入您的选择： " << endl;
		cin >> choice; // 接受用户的选项

		switch (choice)
		{
		case 1:  //开始比赛
			sm.startSpeech();
			break;
		case 2:  //查看记录
			sm.showRecord(); //显示记录
			break;
		case 3:  //清空记录
			sm.clearRecord(); //清空记录
			break;
		case 0:  //退出系统
			sm.exitSystem(); //退出系统
			break;
		default:
			system("cls"); //清屏
			break;
		}
	}
}

int main()
{
	//Test_1();
	//Test_2();
	//Test_3();
	//Test_4();
	//Test_7();
	Test_10();

	return 0;
}