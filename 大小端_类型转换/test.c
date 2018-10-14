#include<stdio.h>
int check_sys()
{
	int i = 1;
	return *(char*)(&i);
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