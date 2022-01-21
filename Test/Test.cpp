#include<iostream>
int Test1(int x, int y)
{
	int A[5] = { 0 };
	A[x]={0};
}
class Test
{
	int a;
	int b;
	int c[5][5];
public:
	int fun(int x, int y)
	{
		int a = 0;
		int b = 0;
		c[x][y] = {0};
	}
};

int main()
{
	int a = 1;
	int b = 2;
	Test myTest = Test();
	myTest.fun ( a, b);
	Test1(a, b);
	return 0;
}