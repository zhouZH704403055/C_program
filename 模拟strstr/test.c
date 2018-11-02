#include<stdio.h>
#include<assert.h>
char* MyStrstr(const char* dst, const char* src)
{
	int i = 0;
	assert(dst);
	assert(src);
	if (*dst == '\0')
	{
		if (*src == '\0')
		{
			return dst;
		}
		else
		{
			return NULL;
		}
	}
	else
	{
		while (*dst)
		{
			while (1)
			{
				if (*(src + i) == '\0')
				{
					return dst;
				}
				else if (*(dst + i) != *(src + i))
				{
					break;
				}
				i++;
			}
			dst++;
		}
		return NULL;
	}
}
int main()
{
	char* p1 = "Hello World!";
	char* p2 = "bit";
	char* ret = MyStrstr(p1, p2);
	if (ret)
	{
		puts(ret);
	}
	return 0;
}