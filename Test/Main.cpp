#include<iostream>
#include"TestClass.h"
int TestR(int& x)//인자 레퍼런스는 가져오는 인자의 원 주소를 임의의 이름으로 설정해서 쓰겠다는 말임 레퍼런스 이기 때문에 주소값변경x, 널값x
{
	x++;
	return x;
}
int& TestF(int& x)// 함수의 자료형은 반환형의 형태를 의미한다. 이함수는 int& 형태를 반환해야한다
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