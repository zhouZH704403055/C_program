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
		printf("小端存储模式\n");
	}
	else
	{
		printf("大端存储模式\n");
	}
	return 0;
}