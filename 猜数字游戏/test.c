#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("#############################\n");
	printf("#                           #\n");
	printf("#                           #\n");
	printf("#  1.��ʼ��Ϸ   0.������Ϸ  #\n");
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
		printf("�����������µ�����:");
		scanf("%d", &n);
		if (n > num)
		{
			printf("�´��ˣ�\n");
		}
		else if (n < num)
		{
			printf("��С�ˣ�\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
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
		printf("���ַ�ΧΪ1��100����ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			break;
		case 1:
			game();
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} while (input);
	return 0;
}