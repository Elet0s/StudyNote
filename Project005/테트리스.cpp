#include<iostream>
#include<conio.h>

class Map
{
private:
	int a;
	int b;
	int x;
	int y;
	int A[10][10];
public:

	int XMapscanf()
	{
		int x = 0;
		for (;;)
		{
			printf_s("1~10사이의 X값을 입력해주세요. \n");
			scanf_s("%d", &x);
			system("cls");
			if (x > 0 && x <= 10)
			{
				return x;
			}
			printf_s("유효하지 않은 값입니다.\n");
			_getch();
			system("cls");
		}

	}
	int YMapscnaf()
	{
		int y = 0;
		for (;;)
		{
			printf_s("1~10사이의 Y값을 입력해주세요. \n");
			scanf_s("%d", &y);
			system("cls");
			if (y > 0 && y <= 10)
			{
				return y;
			}
			printf_s("유효하지 않은 값입니다.\n");
			_getch();
			system("cls");
		}
	}

	int Bild(int& x, int& y)
	{
		for (a = 0; a < x; a += 1)
		{
			for (b = 0; b < y; b += 1)
			{
				A[a][b] = { 0 };
				printf_s("%d", A[a][b]);
			}
			printf_s("\n");
		}
		return A[x][y];
	}
	int Block(int x, int y, int A[][10])
		{
					A[x][y] = 1;
					for (a = 0; a < x; a += 1)
					{
						for (b = 0; b < y; b += 1)
						{
							printf_s("%d", A[a][b]);
						}
						printf_s("\n");
					}
					return A[x][y]
	}

public:
	Map() : a(0), b(0), A{ 0 },x(0),y(0)
	{
	}
};

class Game
{
private:
    int x;
	int y;
	int c;

public:
	int Shift()
	{
			scanf_s("%c", c);
			if (c == 'w' || c == 'W')
			{
				return 0;
			}
			else if (c == 'a' || c == 'A')
			{
				return 1;
			}
			else if (c == 's' || c == 'S')
			{
				return 2;
			}
			else if (c == 'd' || c == 'D')
			{
				return 3;
			}
	}
public:
	Game() : x(0), y(0), c(0)
	{
		;
	}
};

};
int main()
{
	int a = 0; int b = 0;
	int A[10][10];
	Map MyMap = Map();
	Map Mapscanf = Map();
	Game Start = Game();
		int x = Mapscanf.XMapscanf();
		int y = Mapscanf.YMapscnaf();
		A[a][b] = MyMap.Bild(x, y);
		for (;;)
		{
			if (Start.Shift() == 0)
			{
				if (x > 0) 
				{
					x -= 1;
					//블럭 값을 아무것도 없는 맵에서 출력(x)
				}
			}
			else if (Start.Shift() == 1)
			{
				y -= 1;
			}
			else if (Start.Shift() == 2)
			{
				x += 1;
			}
			else if (Start.Shift() == 3)
			{
				y += 1;
			}
		}
	_getch();
	return 0;
}