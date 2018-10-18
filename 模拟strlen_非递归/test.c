#include<stdio.h>
#include<assert.h>
int MyStrlen(const char* str)
{
	assert(str);
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char* ch = "Hello World!";
	int len = MyStrlen(ch);
	printf("%d\n", len);
	return 0;
}