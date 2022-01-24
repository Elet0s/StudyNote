#include "Block.h"
#include<conio.h>
#include<iostream>
#include"Gamesys.h"

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
		printf_s("1~10사이의 X값을 입력해주세요.\n");
		scanf_s("%d", &X);
		if (X > 0 && X <= 10)
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
	printf_s("w,a,s,d 입력으로 움직일 수 있습니다.\n");
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
		if (Input == 'w' || Input == 'W')
		{
			if (x != 0)
			{
				A[x][y] = { 0 };
				x -= 1;
				A[x][y] = { 1 };

				for (xcount = 0; xcount < X; xcount += 1)
				{
					for (ycount = 0; ycount < Y; ycount += 1)
					{
						printf_s("%d", A[xcount][ycount]);
					}
					printf_s("\n");
				}
			}
			else
			{
				for (xcount = 0; xcount < X; xcount += 1)
				{
					for (ycount = 0; ycount < Y; ycount += 1)
					{
						printf_s("%d", A[xcount][ycount]);
					}
					printf_s("\n");
				}
				printf_s("맵을 벗어날 수 없습니다. 다시 입력해주세요.\n");

			}
		}
		else if (Input == 'a' || Input == 'A')
		{
			if (y != 0)
			{
				A[x][y] = { 0 };
				y -= 1;
				A[x][y] = { 1 };
				for (xcount = 0; xcount < X; xcount += 1)
				{
					for (ycount = 0; ycount < Y; ycount += 1)
					{
						printf_s("%d", A[xcount][ycount]);
					}
					printf_s("\n");
				}
			}
			else
			{
				for (xcount = 0; xcount < X; xcount += 1)
				{
					for (ycount = 0; ycount < Y; ycount += 1)
					{
						printf_s("%d", A[xcount][ycount]);
					}
					printf_s("\n");
				}
				printf_s("맵을 벗어날 수 없습니다. 다시 입력해주세요.\n");

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
				if (BlockGamesys.SitB(a,b)== 0)//이동할 곳에 이미 1이 없으니 이동
				{
					A[x][y] = { 0 };
					x += 1;
					A[x][y] = { 1 };
					for (xcount = 0; xcount < X; xcount += 1)
					{
						for (ycount = 0; ycount < Y; ycount += 1)
						{
							printf_s("%d", A[xcount][ycount]);
						}
						printf_s("\n");
					}
				}
				else //이동할곳에 1이 있으니 현재 좌표를 1로바꾸고 초기화
				{
					A[x][y] = { 1 };
					x = 0;
					y = 0;
					A[x][y] = { 1 };
					for (xcount = 0; xcount < X; xcount += 1)
					{
						for (ycount = 0; ycount < Y; ycount += 1)
						{
							printf_s("%d", A[xcount][ycount]);
						}
						printf_s("\n");
					}
				}
			}
			else//이동힐 곳이 범위 밖이니 현재 좌표를 1로바꾸고 초기화
			{
				x = 0;
				y = 0;
				A[x][y] = { 1 };
				for (xcount = 0; xcount < X; xcount += 1)
				{
					for (ycount = 0; ycount < Y; ycount += 1)
					{
						printf_s("%d", A[xcount][ycount]);
					}
					printf_s("\n");
				}
			}
		}
		else if (Input == 'd' || Input == 'D')
		{
			if (y != (Y - 1))
			{
				A[x][y] = { 0 };
				y += 1;
				A[x][y] = { 1 };
				for (xcount = 0; xcount < X; xcount += 1)
				{
					for (ycount = 0; ycount < Y; ycount += 1)
					{
						printf_s("%d", A[xcount][ycount]);
					}
					printf_s("\n");
				}
			}
			else
			{
				for (xcount = 0; xcount < X; xcount += 1)
				{
					for (ycount = 0; ycount < Y; ycount += 1)
					{
						printf_s("%d", A[xcount][ycount]);
					}
					printf_s("\n");
				}
				printf_s("맵을 벗어날 수 없습니다. 다시 입력해주세요.\n");
			}
			
		}
		/*
		열에 블록이 가득 쌓였는지 체크 (보통 아래부터 쌓이니 아래부터 검사 할 것)
		쌓여있으면 줄파괴하고 그 윗비트 x값을 한칸씩 땅겨옴()
		*/
	}
}