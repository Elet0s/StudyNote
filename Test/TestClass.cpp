#include"TestClass.h"
#include<iostream>

TestClass::TestClass()
{
}

int TestClass::InputX()
{
	int X = 0;
	printf_s("x값 입력\n");
	scanf_s("%d",&X);
	return X;
}
int TestClass::InputY()
{
	int Y = 0;
	printf_s("y값 입력\n");
	scanf_s("%d", &Y);
	return Y;
}
void TestClass::ScreanState(int _y, int _x)
{
	
	char A[20][20] = {0};
	A[_x][_y];

	for (int x = 0; x < _x; ++x)
	{
		for (int y = 0; y < _y; ++y)
		{
			char Text[3] = "ㅇ";// [][][] -> [ ㅇ ][0]
			A[x][(y * 2) + 0] = Text[0];
			A[x][(y * 2) + 1] = Text[1];
		}
			A[x][_y*2] = {'\n'};
			A[x][(_y * 2) + 1] = 0;
	}
	for (int i = 0; i < _y; i++)
	{
		printf_s(A[i]);
	}
}