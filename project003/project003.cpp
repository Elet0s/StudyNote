#include<iostream>
int main()
{
	unsigned int getmoney[8] = { 0 };
	unsigned int money[8] = { 50000,10000,5000,1000,500,100,50,10 };
	int i = 0;
	int won = 0;

	for (;;)
	{
		if (won <= 0)
		{
			printf("얼마를 넣으시겠습니까?:\n");
			scanf_s("%d", &won);
		}
		else if (won > 0) {
			for (i = 0; i < 8; i++)
			{
				if (won >= money[i])
				{
					getmoney[i] = money[i] * (won / money[i]);
					won -= getmoney[i];
				}
				else if (i == 7)
				{
					for (i = 0; i < 8; i++)
					{
						won += getmoney[i];
					}
					printf("현재 들어간 금액은: \n");
					printf("%d원\n", won);
				}
			}
			break;
		}
	}
	if (won > 0)
	{
		int i, j = 0;
		for (;;)
		{
			printf("\n0.포카리:1200원\n1.코카콜라:1800원\n2.펩시콜라:1500원\n3.돈재투입\n4.거스름돈 반환\n");
			scanf_s("%d", &i);
			int drink[3] = { 1200,1800,1500 };
			if (i == 0)
			{
				if (won >= drink[i])
				{
					won -= drink[i];
					printf("현재남은금액:%d원\n", won);
				}
				else
				{
					printf("\n금액이 부족합니다\n");
					printf("0.포카리:1200원\n");
					printf("현재남은금액:%d원\n", won);
				}
			}
			else if (i == 1)
			{
				won -= drink[i];
				printf("현재남은금액:%d원", won);
			}
			else if (i == 2)
			{
				won -= drink[i];
				printf("현재남은금액:%d원", won);
			}

		}
	}
}