#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < i + 1; j++)
		{
			printf("  %d¡Á%d = %-2d", i, j, i*j);
		}
		putchar('\n');
	}
	return 0;
}