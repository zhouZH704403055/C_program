#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n = 0;
	int ret = 1;
	int sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		ret *= i;
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}