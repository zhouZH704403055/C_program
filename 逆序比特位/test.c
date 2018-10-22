#include<stdio.h>
int reverse_bit(int n)
{
	int tmp = 0;
	int ret = 0;
	for (int i = 0; i < 32; i++)
	{
		tmp = n & 1;
		n = n >> 1;		
		ret = ret << 1;
		ret = ret ^ tmp;
	}
	return ret;
}
int main()
{
	int n = 25;
	printf("%u", reverse_bit(n));
	return 0;
}