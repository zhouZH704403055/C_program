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
		printf("С�˴洢ģʽ\n");
	}
	else
	{
		printf("��˴洢ģʽ\n");
	}
	return 0;
}