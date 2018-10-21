#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fib(int n)
{
	int first = 1;
	int second = 1;
	int result = first;
	while (n > 2)
	{
		result = first + second;
		first = second;
		second = result;
		n--;
	}
	return result;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d\n", ret);
	return 0;
}