#include<stdio.h>
#include<assert.h>
int MyStrlen(const char* str)
{
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return MyStrlen(str + 1) + 1;
	}
}
int main()
{
	char* ch = "Hello World!";
	int len = MyStrlen(ch);
	printf("%d\n", len);
	return 0;
}