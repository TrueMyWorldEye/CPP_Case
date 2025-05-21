#pragma once
class AbstractCalculator
{
public:
	AbstractCalculator() : m_Num1(0), m_Num2(0) {} // 初始化成员变量
	virtual int getResult();
	int m_Num1;
	int m_Num2;
};

//加法计算器
class AddCalculator :public AbstractCalculator
{
public:
	virtual int getResult() override;
};

//减法计算器
class SubCalculator :public AbstractCalculator
{
public:
	virtual int getResult() override;
};

//乘法计算器
class MulCalculator : public AbstractCalculator
{
public:
	virtual	int getResult() override;
};
