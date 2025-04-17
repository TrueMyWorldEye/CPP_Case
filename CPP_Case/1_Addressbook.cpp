#include <iostream>
#include "1_Addressbook.h"


//菜单界面
void _1_Addressbook::ShowMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出通讯录  *****" << endl;
	cout << "***************************" << endl;
}


void _1_Addressbook::AddPerson(Addressbook* abs)
{
	//判断电话本是否满了
	if (abs->m_Size == MAX_PERSON)
	{
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	else
	{
		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//性别
		cout << "请输入性别：" << endl;
		cout << "1 -- 男" << endl;
		cout << "2 -- 女" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入";
		}

		//年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		//联系电话
		cout << "请输入联系电话：" << endl;
		string phone = "";
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//家庭住址
		cout << "请输入家庭住址：" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//更新通讯录人数
		abs->m_Size++;

		cout << "添加成功" << endl;
		system("pause");
		system("cls");	// 清屏
	}
}

/// <summary>
/// 如果 Addressbook 结构体较小（例如 MAX_PERSON=100 时，结构体大小约几KB），传值和传址的性能差异可以忽略。
/// 如果结构体很大（如数MB），建议改为传引用（const Addressbook& abs）避免拷贝开销，但仍无需传指针。
/// </summary>
/// <param name="abs"></param>
void _1_Addressbook::ShowPerson(Addressbook abs)
{
	if (abs.m_Size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs.m_Size; i++)
		{
			cout << "姓名：" << abs.personArray[i].m_Name << "\t";
			cout << "性别：" << (abs.personArray[i].m_Sex == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << abs.personArray[i].m_Age << "\t";
			cout << "电话：" << abs.personArray[i].m_Phone << "\t";
			cout << "住址：" << abs.personArray[i].m_Addr << endl;
		}
	}

	system("pause");
	system("cls");

}

#pragma region delete


int _1_Addressbook::IsExist(Addressbook abs, string name)
{
	for (int i = 0; i < abs.m_Size; i++)
	{
		if (abs.personArray[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;
}

void _1_Addressbook::DeletePerson(Addressbook* abs)
{
	cout << "请输入您要删除的联系人" << endl;
	string name;
	cin >> name;

	int index = IsExist(*abs, name);
	if (index != -1)
	{
		// 向前移动
		for (int i = index; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");
}

#pragma endregion

void _1_Addressbook::FindPerson(Addressbook abs)
{
	cout << "请输入您要查找的联系人" << endl;
	string name;
	cin >> name;

	int ret = IsExist(abs, name);
	if (ret != -1)
	{
		cout << "姓名：" << abs.personArray[ret].m_Name << "\t";
		cout << "性别：" << abs.personArray[ret].m_Sex << "\t";
		cout << "年龄：" << abs.personArray[ret].m_Age << "\t";
		cout << "电话：" << abs.personArray[ret].m_Phone << "\t";
		cout << "住址：" << abs.personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");

}

void _1_Addressbook::ModifyPerson(Addressbook* abs)
{
	cout << "请输入您要修改的联系人" << endl;
	string name;
	cin >> name;

	int ret = IsExist(*abs, name);
	if (ret != -1)
	{
		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		//性别
		cout << "请输入性别：" << endl;
		cout << "1 -- 男" << endl;
		cout << "2 -- 女" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入";
		}

		//年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		//联系电话
		cout << "请输入联系电话：" << endl;
		string phone = "";
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		//家庭住址
		cout << "请输入家庭住址：" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;

		cout << "修改成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");

}

void _1_Addressbook::CleanPerson(Addressbook* abs)
{
	abs->m_Size = 0;
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}

int _1_Addressbook::Entrance()
{
	Addressbook abs;
	abs.m_Size = 0;

	int select = 0;
	while (true)
	{
		ShowMenu();

		cin >> select;

		switch (select)
		{
		case 1:	// 添加联系人
			AddPerson(&abs);
			//abs.AddPerson();
			break;
		case 2:	// 显示联系人
			ShowPerson(abs);
			break;
		case 3:
			DeletePerson(&abs);
			break;
		case 4:
			FindPerson(abs);
			break;
		case 5:
			ModifyPerson(&abs);
			break;
		case 6:
			CleanPerson(&abs);
			break;
		case 0:
			cout << "退出通讯录" << endl;
			return 0;
			break;
		default:
			cout << "输入错误，请重新输入" << endl;
			break;
		}
	}

	system("pause");
}