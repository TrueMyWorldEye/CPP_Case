#include <iostream>
class _2_Cube
{
public:
	bool IsSame(_2_Cube& cube) {
		return
			m_H == cube.m_H &&
			m_L == cube.m_L &&
			m_W == cube.m_W;
	}
	int CalculateSqaure() {
		return (m_H * m_L + m_H * m_W + m_L * m_W) * 2;
	}
	int CalculateVolume() {
		return m_H * m_L * m_W;
	}
	void SetH(int val) {
		m_H = val;
	}
	void SetL(int val) {
		m_L = val;
	}
	void SetW(int val) {
		m_W = val;
	}
	int GetH() {
		return m_H;
	}
	int GetL() {
		return m_L;
	}
	int GetW() {
		return m_W;
	}

private:
	int m_H;
	int m_L;
	int m_W;
};

bool IsSame(_2_Cube& cube_1, _2_Cube& cube_2)
{
	return
		cube_1.GetH() == cube_2.GetH() &&
		cube_1.GetL() == cube_2.GetL() &&
		cube_1.GetW() == cube_2.GetW();
}