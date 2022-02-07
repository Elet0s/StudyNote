#include"Array.h"
#include<iostream>

Array::Array()
	: x_(0), y_(0), A_(0), B_{ 0 }
{}
Array::~Array()
{}
void Array::Creat(int _x, int _y, const char* _Text)
{
	x_ = _x;
	y_ = _y;
	for (int i = 0; i < 3; ++i)
	{
		B_[i] = _Text[i];
	}
	int X = x_ * 2;
	X += 1;
	A_=new char[(y_* X)+1]; // [.][][.][][.][][]-[][][][][][][.]-[][][][][][][]-[]
}
void Array::Print()
{
	int X = x_ * 2;
	X += 1;
	for (int y=0;y<y_; ++y)
	{
		//y°ª ¹Ù²ð¶§¸¶´Ù ÁÙ ¹Ù²ãÁà¾ßÇÔ
		char* C = &A_[(y * X)];
 		for (int x = 0; x < x_; ++x)
		{
			for (int i = 0; i < 2; ++i)
			{
				C[(x * 2) + i] =B_[i];
				//¹®ÀÚ¿­ »ðÀÔ
			}
		}
		C[(x_ * 2)] = '\n';
		//ÇÑÁÙ ¶Ù±â »ðÀÔ
	}

	A_[(y_ * X)] = 0;
	//¹®ÀÚ¿­ Á¾·á 0 »ðÀÔ
	printf_s(A_);
}