#pragma once

class _2_Cube
{
public:
	void SetH(int val);
	void SetL(int val);
	void SetW(int val);
	int GetH();
	int GetL();
	int GetW();
	bool IsSameByClass(_2_Cube& cube);
	int CalculateSqaure();
	int CalculateVolume();

private:
	int m_H;
	int m_L;
	int m_W;
};


