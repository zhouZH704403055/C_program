#include<stdio.h>
#include<stdarg.h>
int Max(int n, ...)
{
	va_list arg;
	va_start(arg, n);
	int max = va_arg(arg, int);
	for (int i = 1; i < n; i++)
	{
		int tmp = va_arg(arg, int);
		if (max < tmp)
		{
			max = tmp;
		}
	}
	return max;
}
int main()
{
	int a = Max(2, 2, 4);
	int b = Max(3, 2, 4, 5);
	int c = Max(4, 1, 2, 4, 6);
	int d = Max(5, 2, 3, 4, 5, 7);
	return 0;
}