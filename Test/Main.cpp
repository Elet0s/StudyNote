#include<iostream>
#include"TestClass.h"
int TestR(int& x)//���� ���۷����� �������� ������ �� �ּҸ� ������ �̸����� �����ؼ� ���ڴٴ� ���� ���۷��� �̱� ������ �ּҰ�����x, �ΰ�x
{
	x++;
	return x;
}
int& TestF(int& x)// �Լ��� �ڷ����� ��ȯ���� ���¸� �ǹ��Ѵ�. ���Լ��� int& ���¸� ��ȯ�ؾ��Ѵ�
{
	x++;
	return x;
}
int main()
{
	TestClass MyTest = TestClass();
	MyTest.ScreanState(MyTest.InputY(), MyTest.InputX());

	int a = 0;
	int& aRef = a;
	int bRef = TestR(a);
	printf_s("%d", a);
	
	int& bRef = TestF(a);

	printf_s("%d", a);
	
}