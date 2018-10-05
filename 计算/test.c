#include<stdio.h>
int main()
{
	int i = 0;
	double sum = 0.0;
	int flog = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flog*(1.0/i);
		flog = -flog;
	}
	printf("%lf\n", sum);
	return 0;
}