#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void mul_table(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d¡Á%d=%-2d  ", i, j, i*j);
		}
		putchar('\n');
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	mul_table(n);
	return 0;
}