class Point
{
public:
	int GetX() { return m_X; }
	int GetY() { return m_Y; }
	void SetPoint(int x, int y)
	{
		m_X = x;
		m_Y = y;
	}

private:
	int m_X;
	int m_Y;
};

class Circle
{
public:
	void SetCircle(int x, int y, int r)
	{
		m_Center.SetPoint(x, y);
		m_Radius = r;
	}
	bool IsInside(Point& point)
	{
		int x = point.GetX() - m_Center.GetX();
		int y = point.GetY() - m_Center.GetY();
		return (x * x + y * y) <= (m_Radius * m_Radius);
	}
	bool IsOutside(Point& point)
	{
		int x = point.GetX() - m_Center.GetX();
		int y = point.GetY() - m_Center.GetY();
		return (x * x + y * y) > (m_Radius * m_Radius);
	}
	bool IsOnCircle(Point& point)
	{
		int x = point.GetX() - m_Center.GetX();
		int y = point.GetY() - m_Center.GetY();
		return (x * x + y * y) == (m_Radius * m_Radius);
	}

private:
	Point m_Center;
	int m_Radius;
};