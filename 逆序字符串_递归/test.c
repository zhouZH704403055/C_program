#include<stdio.h>
int MyStrlen(const char* str)
{
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - str;
}
void reverse_string(char* str)
{
	char* end = str + (MyStrlen(str) - 1);
	char tmp = *str;
	*str = *end;
	*end = '\0';
	if (MyStrlen(str) > 1)
	{	
		reverse_string(str + 1);
	}
	*end = tmp;
}
int main()
{
	char str[20] = "Hello World!";
	int ret = MyStrlen(str);
	reverse_string(str);
	printf("%s", str);
	return 0;
}