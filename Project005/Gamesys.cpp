#include "Gamesys.h"
#include<iostream>
#include<conio.h>
Gamesys:: Gamesys()
{
}
int Gamesys::SitB(int y1, int y2)//�̵��� �迭 ���� �̵��� �迭���� ������
{
	if (y1 != y2)
		return 0;
	else
	{
		return -1;
	}
}
int Gamesys::PrintB(int xcount, int ycount, int X, int Y, int A[25][10])
{
	for (xcount = 0; xcount < X; xcount += 1)
	{
		for (ycount = 0; ycount < Y; ycount += 1)
		{
			printf_s("%d", A[xcount][ycount]);
		}
		printf_s("\n");
	}
	return 0;
}
void Gamesys::CheakB(int xcount, int ycount, int X, int Y, int A[25][10]) //�� ����Լ��� ����ġ�� �ʱ�ȭ ���� ����Ǿ����
{
	for (xcount =(X - 1); xcount >= 0; xcount -= 1)//�ؿ��� ���� �˻�
	{
		for (ycount = 0; ycount < Y; ycount += 1)//���ʿ��� ����������
		{
			if (A[xcount][ycount] == 1)//��ĭ�� �˻�
			{
			}
			else//��ĭ�� �ִ�
			{
				break;//����ĭ �����ϰ� ����ĭ
			}
			if (ycount == (Y - 1))
			{
				BreakB(xcount, ycount, Y, A);
				PrintB(xcount, ycount, X, Y, A);
				_getch();
				system("cls");
				FallB(xcount, ycount,  X, Y, A);
				printf_s("w,a,s,d �Է����� ������ �� �ֽ��ϴ�.\n");
			}
		}
	}
}
void Gamesys::BreakB(int xcount, int ycount,int Y,int  A[25][10])//����ĭ�� �� 1�� ������ break�Լ�(������ 0�����ʱ�ȭ)
{
	for (ycount = 0; ycount < Y; ycount += 1)
	{
		A[xcount][ycount] = { 0 };
	}
}
void Gamesys::FallB(int xcount, int ycount, int X, int Y, int A[25][10])//�ϰ� ���ٷ� ���� �Լ�(break�� �Ͼ �� ���� ������ �Ʒ��� ��ĭ�� ���� �Լ�)
{
	for (xcount; xcount != 0; xcount -= 1) 
	{
		for (ycount = 0; ycount < Y; ycount += 1)
		{
			A[xcount][ycount] = A[xcount - 1][ycount];
		}
	}
}