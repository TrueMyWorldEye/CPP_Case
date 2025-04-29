#include "2_Cube.h"

bool _2_Cube::IsSameByClass(_2_Cube& cube) {
	return
		m_H == cube.m_H &&
		m_L == cube.m_L &&
		m_W == cube.m_W;
}

int _2_Cube::CalculateSqaure() {
	return (m_H * m_L + m_H * m_W + m_L * m_W) * 2;
}

int _2_Cube::CalculateVolume() {
	return m_H * m_L * m_W;
}

void _2_Cube::SetH(int val) {
	m_H = val;
}

void _2_Cube::SetL(int val) {
	m_L = val;
}

void _2_Cube::SetW(int val) {
	m_W = val;
}

int _2_Cube::GetH() {
	return m_H;
}

int _2_Cube::GetL() {
	return m_L;
}

int _2_Cube::GetW() {
	return m_W;
}

bool IsSame(_2_Cube& cube_1, _2_Cube& cube_2)
{
	return
		cube_1.GetH() == cube_2.GetH() &&
		cube_1.GetL() == cube_2.GetL() &&
		cube_1.GetW() == cube_2.GetW();
}