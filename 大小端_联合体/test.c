#include<stdio.h>
int check_sys()
{
	union Un
	{
		int i;
		char c;
	}un;
	un.i = 1;
	return un.c;
}
int main()
{
	if (check_sys())
	{
		printf("С�˴洢ģʽ\n");
	}
	else
	{
		printf("��˴洢ģʽ\n");
	}
	return 0;
}