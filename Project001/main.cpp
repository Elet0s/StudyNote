//test set
#include<iostream>
class A
{
};
int fun(int* a) 
{
	return 0;
}
int fun2(char* a)
{
	return 0;
}
int fun3(int& a)
{
	a;
	return 0;
}
int main()
{
	int a[3] = { 1,2,3 };
	fun(a);
	char c[4] = ("abc");
	fun2(c);//c�� �ּҰ��̱� �����̴�.
	int d = 0;
	fun3(d);
	return 0;
}