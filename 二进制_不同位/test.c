#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int ret = 0;
	int count = 0;
	scanf("%d %d", &m, &n);
	ret = m ^ n;
	while (ret)
	{
		count++;
		ret = ret & (ret - 1);
	}
	printf("%d", count);
	return 0;
}