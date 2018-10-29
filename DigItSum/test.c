#include<stdio.h>
int DigItSum(unsigned int n)
{
	if (n < 10)
	{
		return n;
	}
	else
	{
		return (n % 10) + DigItSum(n / 10);
	}
}
int main()
{
	int n = 1998;
	int ret = DigItSum(n);
	return 0;
}