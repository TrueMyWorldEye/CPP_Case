#pragma once
#include<fstream>
#include<iostream>
#include<string>
#define  FILENAME "empFile.txt"
using namespace std;

class Worker
{
public:
	virtual void showInfo() = 0;
	virtual string getDeptName() = 0;

	int m_Id; // 职工编号
	string m_Name; // 职工姓名
	int m_DeptId; // 职工所在部门编号
};

class Employee : public Worker
{
public:
	Employee(int id, string name, int deptId);
	virtual	void showInfo();
	virtual	string getDeptName();
};

class Manager : public Worker
{
public:
	Manager(int id, string name, int dId);
	virtual void showInfo();
	virtual string getDeptName();
};

class Boss : public Worker
{
public:
	Boss(int id, string name, int dId);
	virtual void showInfo();
	virtual string getDeptName();
};


class WorkerManager
{
public:
	WorkerManager();
	void showMenu();
	void exitSystem();
	void addEmp();
	int getEmpNum();
	void showEmp();
	void deleteEmp();
	void modifyEmp();
	void findEmp();
	void sortEmp();
	void cleanFile();
	~WorkerManager();

private:
	int m_EmpNum;
	Worker** m_EmpArray; // 职工数组，存放指针
	bool m_FileIsEmpty; //文件是否为空

	int isExist(int id);
	void save();
	void initEmp();
};

