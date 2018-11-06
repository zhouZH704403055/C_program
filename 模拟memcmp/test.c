#include<stdio.h>
#include<assert.h>
int MyMemcmp(const void* buf1, const void* buf2, size_t count)
{
	assert(buf1);
	assert(buf2);
	while (count--)
	{
		if (*((char*)buf1) == *((char*)buf2))
		{
			((char*)buf1)++;
			((char*)buf2)++;
		}
		else if (*(char*)buf1 > *(char*)buf2)
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}
	return 0;
	return 0;
}
int main()
{
	char* str1 = "Hello World!";
	char* str2 = "Hello";
	int ret = MyMemcmp(str1, str2, 6);
	return 0;
}