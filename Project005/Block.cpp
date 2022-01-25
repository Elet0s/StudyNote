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
		printf_s("1~20사이의 X값을 입력해주세요.\n");
		scanf_s("%d", &X);
		if (X > 0 && X <= 20)
		{
			break;
		}
		else
		{
			printf_s("유효하지 않은 값입니다.\n");
			_getch();
		}
	}
	for(;;)
	{
		system("cls");
		printf_s("1~10사이의 Y값을 입력해주세요.\n");
		scanf_s("%d", &Y);
		if (Y > 0 && Y <= 10)
		{
			break;
		}
		else 
		{
			printf_s("유효하지 않은 값입니다.\n");
			_getch();
		}
	}
	system("cls");
	printf_s("w,a,s,d 입력으로 움직일 수 있습니다.\n");//순수맵 그려주는중
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
		printf_s("w,a,s,d 입력으로 움직일 수 있습니다.\n");

		/*
		이부분에서 맵 위에 도형그려주기 도형은 여러 모형이 있고 Rotate함수 만들어서 도형을 바꿔주는 방식으로 진행 할 것
		*/
		if (Input == 'w' || Input == 'W')//Rotate로 변경해줄 것임 시계방향 회전
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
			if (y != 0)//왼쪽으로 이동할 수 있는지
			{
				int a = 0;
				int b = 0;
				a = A[x][y];
				y -= 1;
				b = A[x][y];
				y += 1;
				if (BlockGamesys.SitB(a, b) == 0)//이동할 곳에 1이 있는지 검사 0일경우 이동가능
				{
					A[x][y] = { 0 };
					y -= 1;
					A[x][y] = { 1 };
					BlockGamesys.PrintB(xcount, ycount, X, Y, A);
				}
				else//1이 있어서 이동불가 바닥이 아니니 초기화는 없으니 그대로 출력
				{
					BlockGamesys.PrintB(xcount, ycount, X, Y, A);
				}
			}
			else// 이동할 곳이 없으니 그대로 출력
			{
				BlockGamesys.PrintB(xcount, ycount, X, Y, A);
			}
		}
		else if (Input == 's' || Input == 'S')
		{
			if (x != (X - 1))//이동하는 곳이 범위 내인지 물음
			{
				int a = 0;
				int b = 0;
				a = A[x][y];
				x += 1;
				b = A[x][y];
				x -= 1;
				if (BlockGamesys.SitB(a, b) == 0)//이동할 곳에 이미 1이 없으니 이동
				{
					A[x][y] = { 0 };
					x += 1;
					A[x][y] = { 1 };
					BlockGamesys.PrintB(xcount, ycount, X, Y, A);
				}
				else //이동할곳에 1이이미 있으니 초기화
				{
					BlockGamesys.CheakB(xcount, ycount, X, Y, A);
					x = 0;
					y = 0;
					A[x][y] = { 1 };
					BlockGamesys.PrintB(xcount, ycount, X, Y, A);
				}
			}
			else//이동힐 곳이 범위 밖이니 현재 좌표 초기화 
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
			if (y != (Y - 1))//범위안인지
			{
				int a = 0;
				int b = 0;
				a = A[x][y];
				y += 1;
				b = A[x][y];
				y -= 1;
				if (BlockGamesys.SitB(a,b)==0)//이동할곳 검사
				{
					A[x][y] = { 0 };
					y += 1;
					A[x][y] = { 1 };
					BlockGamesys.PrintB(xcount, ycount, X, Y, A);
				}
				else//못이동함
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
		열에 블록이 가득 쌓였는지 체크 (보통 아래부터 쌓이니 아래부터 검사 할 것)
		쌓여있으면 줄파괴하고 그 윗비트 x값을 한칸씩 땅겨옴()
		*/
	}
}