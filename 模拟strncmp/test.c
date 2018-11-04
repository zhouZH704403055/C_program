#include<stdio.h>
#include<assert.h>
int MyStrncmp(const char* str1, const char* str2, int n)
{
	while ((*str1) && (*str2) && n--)
	{
		if (*str1 == *str2)
		{
			str1++;
			str2++;
			if (*str1 == '\0'&&*str2 != '\0'&& n!=0)
			{
				return -1;
			}
			else if (*str1 != '\0'&&str2 == '\0'&& n!=0)
			{
				return 1;
			}
		}
		else if (*str1 > *str2)
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}
	return 0;
}
int main()
{
	char* p1 = "Hello World!";
	char* p2 = "Hello";
	int ret = MyStrncmp(p2, p1,10);
	return 0;
}