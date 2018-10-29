#include<stdio.h>
int Power_k(int n,int k)
{
	if (k == 0)
		return 1;
	else
	{
		return n * Power_k(n, k - 1);
	}
}
int main()
{
	int a = 2;
	int b = 4;
	int ret = Power_k(a, b);
	return 0;
}