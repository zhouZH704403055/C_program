#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	for (i = 0; i < 1000; i++)
	{
		int tmp = i;
		int count = 1;
		int sum = 0;
		while (tmp > 9)
		{
			count++;
			tmp = tmp / 10;
		}
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, count);
			tmp = tmp / 10;
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}