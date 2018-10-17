#include<stdio.h>
#define MAX(x,y) (((x)>(y))?(x):(y))
int main()
{
	int a = 2;
	int b = 4;
	int ret = MAX(a, b);
	printf("%d\n", ret);
	return 0;
}