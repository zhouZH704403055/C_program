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
	//VS������strcmp��dst>srcʱ����1��dst<srcʱ����-1
	//if (*dst > *src)
	//{
	//	return 1;
	//}
	//else
	//{
	//	return -1;
	//}
	return *dst - *src;//���ַ���dst>srcʱ����һ��������dst<srcʱ����һ������
}
int main()
{
	char* str1 = "Hello World.";
	char* str2 = "Hello World!";
	int ret = MyStrcmp(str1, str2);
	return 0;
}