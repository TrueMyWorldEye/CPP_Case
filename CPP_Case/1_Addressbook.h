#pragma once
#include <string>  // 添加此行
using namespace std;

#define MAX_PERSON 100

//联系人结构体
struct Person
{
	string m_Name; //姓名
	int m_Sex; //性别：1男 2女
	int m_Age; //年龄
	string m_Phone; //电话
	string m_Addr; //住址
};

//通讯录结构体
struct Addressbook
{
	struct Person personArray[MAX_PERSON]; //通讯录中保存的联系人数组
	int m_Size; //通讯录中人员个数
};

class _1_Addressbook
{
private:
	void ShowMenu();
	void AddPerson(Addressbook* abs);
	void ShowPerson(Addressbook abs);
	int IsExist(Addressbook abs, string name);
	void DeletePerson(Addressbook* abs);
	void FindPerson(Addressbook abs);
	void ModifyPerson(Addressbook* abs);
	void CleanPerson(Addressbook* abs);
public:
	int Entrance();
};