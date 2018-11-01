#include<stdio.h>
char* MyStrcat(char* dst, const char* src)
{
	char* ret = dst;
	while (*dst)
	{
		dst++;
	}
	while (*dst++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr[20] = "Hello ";
	char* p = "World!";
	MyStrcat(arr, p);
	puts(arr);
	return 0;
}