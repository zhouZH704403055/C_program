#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("#############################\n");
	printf("#                           #\n");
	printf("#                           #\n");
	printf("#  1.开始游戏   0.结束游戏  #\n");
	printf("#                           #\n");
	printf("#                           #\n");
	printf("#############################\n");
}
void game()
{
	int num = rand()%100+1;
	while (1)
	{
		int n = 0;
		printf("请输入您所猜的数字:");
		scanf("%d", &n);
		if (n > num)
		{
			printf("猜大了！\n");
		}
		else if (n < num)
		{
			printf("猜小了！\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("数字范围为1—100，请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			break;
		case 1:
			game();
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input);
	return 0;
}