#include "4_Calculator.h"

int AbstractCalculator::getResult()
{
	return 0;
}

int AddCalculator::getResult()
{
	return m_Num1 + m_Num2;
}

int SubCalculator::getResult()
{
	return m_Num1 - m_Num2;
}

int MulCalculator::getResult()
{
	return  m_Num1 * m_Num2;
}
