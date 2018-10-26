#include<stdio.h>
int MyStrcmp(const char* dst, const char* src)
{
	while (*dst == *src)
	{
		if (*dst == '\0')
		{
			return 0;
		}
		dst++;
		src++;
	}
	//VS环境下strcmp在dst>src时返回1，dst<src时返回-1
	//if (*dst > *src)
	//{
	//	return 1;
	//}
	//else
	//{
	//	return -1;
	//}
	return *dst - *src;//当字符串dst>src时返回一个正数，dst<src时返回一个负数
}
int main()
{
	char* str1 = "Hello World.";
	char* str2 = "Hello World!";
	int ret = MyStrcmp(str1, str2);
	return 0;
}