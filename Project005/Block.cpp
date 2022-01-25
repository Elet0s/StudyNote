#include "Block.h"
#include"Gamesys.h"
#include<conio.h>
#include<iostream>

Block::Block()
	:xcount(0),ycount(0),A{0},X(0),Y(0) ,Input(0),x(0),y(0)
{
}
Gamesys BlockGamesys = Gamesys();

void Block::map()
{
	for (;;)
	{
		system("cls");
		printf_s("1~20������ X���� �Է����ּ���.\n");
		scanf_s("%d", &X);
		if (X > 0 && X <= 20)
		{
			break;
		}
		else
		{
			printf_s("��ȿ���� ���� ���Դϴ�.\n");
			_getch();
		}
	}
	for(;;)
	{
		system("cls");
		printf_s("1~10������ Y���� �Է����ּ���.\n");
		scanf_s("%d", &Y);
		if (Y > 0 && Y <= 10)
		{
			break;
		}
		else 
		{
			printf_s("��ȿ���� ���� ���Դϴ�.\n");
			_getch();
		}
	}
	system("cls");
	printf_s("w,a,s,d �Է����� ������ �� �ֽ��ϴ�.\n");//������ �׷��ִ���
	for (xcount = 0; xcount < X; xcount += 1)
	{
		for (ycount = 0; ycount < Y; ycount += 1)
		{
			A[xcount][ycount] = { 0 };
			printf_s("%d", A[xcount][ycount]);
		}
		printf_s("\n");
	}
}
void Block::shift()
{
	for (;;)
	{
		Input = _getch();
		system("cls");
		printf_s("w,a,s,d �Է����� ������ �� �ֽ��ϴ�.\n");

		/*
		�̺κп��� �� ���� �����׷��ֱ� ������ ���� ������ �ְ� Rotate�Լ� ���� ������ �ٲ��ִ� ������� ���� �� ��
		*/
		if (Input == 'w' || Input == 'W')//Rotate�� �������� ���� �ð���� ȸ��
		{
			if (x != 0)
			{
				A[x][y] = { 0 };
				x -= 1;
				A[x][y] = { 1 };

				BlockGamesys.PrintB(xcount, ycount, X, Y, A);
			}
			else
			{
				BlockGamesys.PrintB(xcount, ycount, X, Y, A);
			}
		}
		else if (Input == 'a' || Input == 'A')
		{
			if (y != 0)//�������� �̵��� �� �ִ���
			{
				int a = 0;
				int b = 0;
				a = A[x][y];
				y -= 1;
				b = A[x][y];
				y += 1;
				if (BlockGamesys.SitB(a, b) == 0)//�̵��� ���� 1�� �ִ��� �˻� 0�ϰ�� �̵�����
				{
					A[x][y] = { 0 };
					y -= 1;
					A[x][y] = { 1 };
					BlockGamesys.PrintB(xcount, ycount, X, Y, A);
				}
				else//1�� �־ �̵��Ұ� �ٴ��� �ƴϴ� �ʱ�ȭ�� ������ �״�� ���
				{
					BlockGamesys.PrintB(xcount, ycount, X, Y, A);
				}
			}
			else// �̵��� ���� ������ �״�� ���
			{
				BlockGamesys.PrintB(xcount, ycount, X, Y, A);
			}
		}
		else if (Input == 's' || Input == 'S')
		{
			if (x != (X - 1))//�̵��ϴ� ���� ���� ������ ����
			{
				int a = 0;
				int b = 0;
				a = A[x][y];
				x += 1;
				b = A[x][y];
				x -= 1;
				if (BlockGamesys.SitB(a, b) == 0)//�̵��� ���� �̹� 1�� ������ �̵�
				{
					A[x][y] = { 0 };
					x += 1;
					A[x][y] = { 1 };
					BlockGamesys.PrintB(xcount, ycount, X, Y, A);
				}
				else //�̵��Ұ��� 1���̹� ������ �ʱ�ȭ
				{
					BlockGamesys.CheakB(xcount, ycount, X, Y, A);
					x = 0;
					y = 0;
					A[x][y] = { 1 };
					BlockGamesys.PrintB(xcount, ycount, X, Y, A);
				}
			}
			else//�̵��� ���� ���� ���̴� ���� ��ǥ �ʱ�ȭ 
			{
				BlockGamesys.CheakB(xcount, ycount, X, Y, A);
				x = 0;
				y = 0;
				A[x][y] = { 1 };
				BlockGamesys.PrintB(xcount, ycount, X, Y, A);
			}
		}
		else if (Input == 'd' || Input == 'D')
		{
			if (y != (Y - 1))//����������
			{
				int a = 0;
				int b = 0;
				a = A[x][y];
				y += 1;
				b = A[x][y];
				y -= 1;
				if (BlockGamesys.SitB(a,b)==0)//�̵��Ұ� �˻�
				{
					A[x][y] = { 0 };
					y += 1;
					A[x][y] = { 1 };
					BlockGamesys.PrintB(xcount, ycount, X, Y, A);
				}
				else//���̵���
				{
					BlockGamesys.PrintB(xcount, ycount, X, Y, A);
				}
			}
			else
			{
				BlockGamesys.PrintB(xcount, ycount, X, Y, A);
			}
			
		}
		/*
		���� ����� ���� �׿����� üũ (���� �Ʒ����� ���̴� �Ʒ����� �˻� �� ��)
		�׿������� ���ı��ϰ� �� ����Ʈ x���� ��ĭ�� ���ܿ�()
		*/
	}
}