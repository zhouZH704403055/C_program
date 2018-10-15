#include<stdio.h>
int main()
{
	int a = 45;
	int b = 16;
	int c = 57;
	if (a < b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	if (a < c)
	{
		int temp = a;
		a = c;
		c = temp;
	}
	if (b < c)
	{
		int temp = b;
		b = c;
		c = temp;
	}
	printf("%d  %d  %d", a, b, c);
	return 0;
}