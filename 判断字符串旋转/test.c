#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
bool is_move(char str[], char* p)
{
	char* ret = NULL;
	int len = strlen(str);
	int _len = strlen(p);
	if (len != _len)
	{
		return false;
	}
	strncat(str, str, len);
	if (strstr(str, p) == NULL)
	{
		return false;
	}
	return true;
}
int main()
{
	char arr[20] = "abcdefg";
	char* str = "efgabcd";
	bool ret = is_move(arr, str);
	return 0;
}