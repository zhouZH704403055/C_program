#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	int j = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < sqrt(i); j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			printf("%d ", i);
		}
	}
	return 0;
}