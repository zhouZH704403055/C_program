#include<stdio.h>
#include<assert.h>
char* MyStrncpy(char* dst, const char* src, int n)
{
	char* ret = dst;
	while (n-- > 0 && (*dst++ = *src++))
	{
		;
	}
	return ret;
}
int main()
{
	char* p = "Hello World!";
	char str[20] = { 0 };
	MyStrncpy(str, p, 11);
	puts(str);
	return 0;
}