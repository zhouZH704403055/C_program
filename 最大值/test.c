#include<stdio.h>
int main()
{
	int arry[10] = { 15, 64, 216, 48, 1, 6, 59, 26, 59, 999 };
	int max = arry[0];
	for (int i = 1; i < 10; i++)
	{
		if (max < arry[i])
		{
			max = arry[i];
		}
	}
	printf("max=%d", max);
	return 0;
}