#include<stdio.h>
#include<assert.h>
void* MyMemchr(const void* dst, char ch, size_t count)
{
	assert(dst);
	while (count--)
	{
		if (*(char*)dst == ch)
		{
			return dst;
		}
		else
		{
			((char*)dst)++;
		}
	}
	return NULL;
}
int main()
{
	char* str = "Hello World!";
	char ch = 'a';
	char* ret = (char*)MyMemchr(str, ch, 12);
	return 0;
}