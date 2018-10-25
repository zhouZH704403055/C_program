#include<stdio.h>
#include<stdarg.h>
int average(int n, ...)
{
	int sum = 0;
	va_list arg;
	va_start(arg, n);
	for (int i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	return sum / n;
}
int main()
{
	int a = average(2, 2, 4);
	int b = average(3, 1, 2, 3);
	int c = average(4, 2, 3, 4, 5);
	int d = average(5, 2, 2, 3, 4, 5);
	return 0;
}