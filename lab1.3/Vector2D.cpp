#include "Vector2D.h"
using namespace std;
void Vector2D::Read()
{
	int a, b;
	do {
		cout << " x: "; cin >> a;
		cout << " y: "; cin >> b;
	   } 
	while (!(Init(a, b)));
}
bool Vector2D::Init(int first, int second)
{
	if (abs(first) <= 100 && abs(second) <= 100)
	{
		x = first;
		y = second;
		return true;
	}
	else
	{
		cout << "eror" << endl;
		return false;
	}
}
void Vector2D::Display() const
{
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
}
void Vector2D::isEqual() const
{
	int c;
	c = x * x + y * y;
	cout << "scalarnyi dobutok vectoriv = " << c << endl;
	cout << "==================================================================================================" << endl;
}
void Vector2D::scalar() const
{
	int k;
	cout << "scallar = "; cin >> k;
	cout << "vektor" << "(" << x << ";" << y << ")" << endl;
	cout << "vector*scalar" << "(" << x * k << ";" << y * k <<  ")" << endl;
	cout << "=================================================================================================" << endl;
}

void Vector2D::isEqual2() const
{
	int c;
	c = sqrt(x * x + y * y);
	cout << "dovzhyna xy = " << c << endl;
	cout << "==================================================================================================" << endl;
}
