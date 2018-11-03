#include<stdio.h>
#include<assert.h>
char* MyStrchr(const char* str, char ch)
{
	assert(str);
	while (*str)
	{
		if (*str == ch)
		{
			return str;
		}
		else
		{
			str++;
		}
	}
	return NULL;
}
int main()
{
	char* str = "Hello World!";
	char ch = 'H';
	char* p = MyStrchr(str, ch);
	if (p)
	{
		printf("%c", *p);
	}
	return 0;
}