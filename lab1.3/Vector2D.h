#pragma once
#include <sstream>
#include <string>
#include <iostream>
class Vector2D
{
private:
	double x;
	double y;
public:
	void Read();
	bool Init(int x, int y);
	void Display() const;
	void SetX(int value) { x = value; };
	void SetY(int value) { y = value; };
	double GetX() const { return x; };
	double GetY() const { return y; };
	void scalar() const;
	void isEqual() const;
	void isEqual2() const;
};

