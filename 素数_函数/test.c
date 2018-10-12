#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int is_prime(int num)
{
	for (int i = 2; i < sqrt(num); i++)
	{
		if (num%i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int num;
	scanf("%d", &num);
	if (is_prime(num))
	{
		printf("%d是素数\n", num);
	}
	else
	{
		printf("%d不是素数\n", num);
	}
	return 0;
}