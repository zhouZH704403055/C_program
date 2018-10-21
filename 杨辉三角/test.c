#include<stdio.h>
int main()
{
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == 0 || i == j)
			{
				arr[i][j] = 1;
			}
			if (i > 1)
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10 - i - 1; j++)
		{
			printf("  ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("%-3d ", arr[i][j]);
		}
		putchar('\n');
	}
	return 0;
}