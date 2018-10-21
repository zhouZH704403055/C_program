#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int factorial(int n)
{
	if (n < 2)
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = factorial(n);
	printf("%d\n", ret);
	return 0;
}