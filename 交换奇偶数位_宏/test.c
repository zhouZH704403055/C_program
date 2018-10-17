#include<stdio.h>
#define SWAPBIT(x) (((x&0xaaaaaaaa)>>1)^((x&0x55555555)<<1))
int main()
{
	int i = 10;
	int ret = SWAPBIT(i);
	printf("%d\n", ret);
	return 0;
}