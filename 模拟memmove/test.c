#include<stdio.h>
void* MyMemmove(void* dst, const void* src, int count)
{
	void* ret = (char*)dst;
	if (dst <= src || dst >= (char*)src + count)
	{
		for (int i = 0; i < count; i++)
		{
			*((char*)dst)++ = *((char*)src)++;
		}
		return ret;
	}
	else
	{
		while (count--)
		{
			*(((char*)dst) + count) = *(((char*)src) + count);
		}
	}
}
int main()
{
	char str[20] = "Hello World!";
	char p[20] = { 0 };
	MyMemmove(p, str, 5);
	puts(p);
	return 0;
}