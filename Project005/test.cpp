#include<iostream>

void map(int a, int b, int(*c)[3])
{
	for (a = 0; a < 3; a += 1)
	{
		for (b = 0; b < 3; b += 1)


			return;
	}



	int cheak(int a, int b, int[][3])
	{
		int i = 0;
		int j = 0;

	}



	int up(int a, int b, int(*c)[3])
	{
		for (a = 0; a < 3; a += 1)
		{
			for (b = 0; b < 3; b += 1)
			{
				if (c[0][b] == 1)
				{
					printf_s("이동할수 없습니다\n");
					return -1;
				}
				else if (c[a][0] == 1)
				{
					for
				}
			}
		}

	}

	int down()
	{
		return 0;
	}

	int left()
	{
		return 0;
	}

	int right()
	{
		return 0;
	}

	int main()
	{
		int a = 0;
		int i = 0;
		int j = 0;
		int b[3][3] = { 0 };

		map(i, j, b);

		for (;;)
		{
			int button = 0;
			printf_s("1을 눌러 주세요!\n");
			scanf_s("%d", &button);

			if (button == 1)
			{
				for (i = 0; i < 2; i += 1)
				{
					for (j = 0; j < 2; j += 1)
					{
						b[i][j] = 1;
					}
				}
				map(i, j, b);
			}
			break;
		}


		for (;;)
		{
			char button = 0;
			printf_s("wasd로 이동 해주세요!\n");
			scanf_s("%s", &button, 4);
			map(i, j, b);
			char a = 0;

			if (button == 'w')
			{
				up(i, j, b);
				if (up == 0)// j의 0, 1이 1일때
				{

				}
				//j값이 1,2가 1일때
				map(i, j, b);
			}
			else if (button == 's')
			{
				down();
				map(i, j, b);
			}
			else if (button == 'a')
			{
				left();
				map(i, j, b);
			}
			else if (button == 'd')
			{
				right();
				map(i, j, b);
			}
			else
			{
				printf_s("잘못된 입력입니다");
			}
		}
		return 0;
	}


#include<iostream>

int shift(int a, int b, int(*c)[3])
{
	int i = 0;
	for (i = a; i < b; i += 1)
	{
		{
			printf_s("%d", c[a][b]);
		}
		printf_s("\n");
		return 0;
	}
}

int up(int a, int b)
{
	a -= 1;
	b -= 1;
}
int main()
{
	int i = 0;
	int	a = 0;
	int	b = 0;

		return 0;
}

