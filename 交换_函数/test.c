#include<stdio.h>
void swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
int main()
{
	int a = 2;
	int b = 4;
	swap(&a, &b);
	printf("a=%d b=%d", a, b);
	return 0;
}