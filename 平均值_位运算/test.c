#include<stdio.h>
int main()
{
	int a = 2;
	int b = 4;
	int average = (a&b) + ((a^b) >> 1);
	printf("%d", average);
	return 0;
}