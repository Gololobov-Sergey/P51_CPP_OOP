#pragma once
class Point
{
	int x;
	int y;

public:
	Point() : x(0), y(0)
	{

	}

	Point(int x, int y) : x(x), y(y)
	{

	}

	void print()
	{
		cout << "(" << x << ", " << y << ")" << endl;
	}

	Point add(Point p)
	{
		Point temp;
		temp.x = this->x + p.x;
		temp.y = this->y + p.y;
		return temp;
	}

	Point operator+(Point p)
	{
		return Point(this->x + p.x, this->y + p.y);
	}

	Point operator-()
	{
		return Point(-x, -y);
	}

	Point operator++() // pre
	{
		x++;
		y++;
		return *this;
	}

	Point operator++(int) // post
	{
		Point t(*this);
		x++;
		y++;
		return t;
	}

	void operator+=(Point p)
	{
		x += p.x;
		y += p.y;
	}


	Point operator+(int m)
	{
		return Point(x + m, y + m);
	}

	auto operator<=>(Point p)
	{
		return sqrt(x * x + y * y) <=> sqrt(p.x * p.x + p.y * p.y);
	}

	//bool operator<(Point p)
	//{
	//	return sqrt(x * x + y * y) < sqrt(p.x * p.x + p.y * p.y);
	//}

	bool operator==(Point p)
	{
		return x == p.x && y == p.y;
	}

	operator float()
	{
		return sqrt(x * x + y * y);
	}

	void operator()(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

};


Point operator+(int m, Point p2)
{
	return p2 + m;
}