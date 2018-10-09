#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int count_one_bits(int value)
{
	int count = 0;
	while (value)
	{
		count++;
		value = value & (value - 1);
	}
	return count;
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int n = count_one_bits(num);
	printf("%d\n", n);
	return 0;
}