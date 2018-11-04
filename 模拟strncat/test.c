#include<stdio.h>
#include<assert.h>
char* MyStrncat(char* dst, const char* src, int n)
{
	char* ret = dst;
	while (*dst)
	{
		dst++;
	}
	while ((n--) && (*src))
	{
		*dst++ = *src++;
	}
	return ret;
}
int main()
{
	char str[20] = "Hello ";
	char* p = "World!";
	MyStrncat(str, p, 6);
	puts(str);
	return 0;
}