#include<iostream>
using namespace std;
class Point
{
	int zn;
	int ch;
public:
	Point(int a, int b);
	void Print();
	Point Sum(Point& b);

	Point operator+ (Point& b) // a+b
	{
		return Point(zn + b.zn, ch + b.ch);
	}

	Point operator- (Point& b) // a-b
	{
		return Point(zn - b.zn, ch - b.ch);
	}

	Point operator* (Point& b) // a*b
	{
		return Point(zn * b.zn, ch * b.ch);
	}

	Point operator/ (Point& b) // a/b
	{
		return Point(zn / b.zn, ch / b.ch);
	}
};
Point::Point(int a, int b)
{
	zn = a;
	ch = b;
}
void Point::Print()
{
	cout << "Denominator: " << zn << "\tNumerator: " << ch << endl;
}

int main()
{
	Point a(2, 3), b(1, 5);
	
	Point rez = a + b;
	rez.Print();


}

