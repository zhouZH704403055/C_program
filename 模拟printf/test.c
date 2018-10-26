#include<stdio.h>
#include<stdarg.h>
void int_out(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		int_out(n / 10);
	}	
	putchar((n % 10) + '0');
}
void MyPrintf(char* format,...)
{
	va_list arg;
	va_start(arg, format);
	char* next = NULL;
	char* str = NULL;
	char ch = 0;
	int num = 0;
	unsigned int _num = 0;
	while (*format)
	{
		next = format + 1;
		if (*format == '%')
		{
			switch (*next)
			{
			case 's':
				str = va_arg(arg, char*);
				while (*str)
				{
					putchar(*str);
					str++;
				}
				format = next + 1;
				break;
			case 'c':
				ch = va_arg(arg, char);
				putchar(ch);
				format = next + 1;
				break;
			case 'd':
				num = va_arg(arg, int);
				int_out(num);
				format = next + 1;
				break;
			case 'u':
				_num = va_arg(arg, unsigned int);
				int_out(_num);
				format = next + 1;
				break;
			default:
				putchar('%');
				format++;
				break;
			}
		}
		else
		{
			putchar(*format);
			format++;
		}
	}	
}
int main()
{
	MyPrintf("%s %c%c%c%c%c! %d\n", "Hello", 'W', 'o', 'r', 'l', 'd', -100);
	return 0;
}