#include<iostream>
#include<conio.h>
#include "Gamesys.h"

Gamesys::Gamesys()
{
	
};

int Gamesys::SitB(int y1, int y2)//이동전 배열 값과 이동후 배열값이 같은지
{
	if (0 != y2)
	{
		return -1; // 이동할 곳에 0이 아니니 가면안됨
	}
	else
	{
		return 0; //이동 할 곳이 0이니 갈 수 있음
	}
}
void Gamesys::PrintB(int xcount, int ycount, int X, int Y, int A[25][10])
{
	for (xcount = 0; xcount < X; xcount += 1)
	{
		for (ycount = 0; ycount < Y; ycount += 1)
		{
			printf_s("%d", A[xcount][ycount]);
		}
		printf_s("\n");
	}
}
void Gamesys::CheakB(int xcount, int ycount, int X, int Y, int A[25][10]) //이 멤버함수는 블럭배치후 초기화 전에 실행되어야함
{
	for (xcount = (X - 1); xcount >= 0; xcount -= 1)//밑에서 부터 검사
	{
		for (ycount = 0; ycount < Y; ycount += 1)//왼쪽에서 부터 검사
		{
			if (A[xcount][ycount] == 2)//한칸씩 적재 블록있는지 검사
			{
			}
			else//빈칸이 있다
			{
				break;//지금칸 종료하고 다음칸
			}
			if (ycount == (Y - 1))// 검사를 한줄 다 했으면 부수고 당기기
			{
				BreakB(xcount, ycount, Y, A);
				PrintB(xcount, ycount, X, Y, A);
				_getch();
				system("cls");
				FallB(xcount, ycount, X, Y, A);
				printf_s("w,a,s,d 입력으로 움직일 수 있습니다.\n");
			}
		}
	}
}
void Gamesys::BreakB(int xcount, int ycount, int Y, int  A[25][10])//지금칸에 다 1이 있으니 break함수(지금줄 0으로초기화)
{
	for (ycount = 0; ycount < Y; ycount += 1)
	{
		A[xcount][ycount] = { 0 };
	}
}

void Gamesys::FallB(int xcount, int ycount, int X, int Y, int A[25][10])//하고 한줄로 당기는 함수(break가 일어난 곳 기준 위쪽을 아래로 한칸씩 당기는 함수)
{
	for (xcount; xcount != 0; xcount -= 1)
	{
		for (ycount = 0; ycount < Y; ycount += 1)
		{
			A[xcount][ycount] = A[xcount - 1][ycount];
		}
	}
}