#include <iostream>
#include <Windows.h>
#include "Vector2D.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Vector2D a;
	a.Read();
	a.isEqual();
	a.scalar();
	a.isEqual2();
}