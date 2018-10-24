#include<stdio.h>
#include<string.h>
#include<assert.h>
char* left_move(char str[], int n)
{
	char ch = 0;
	int len = strlen(str);
	assert(n <= len);
	for (int i = 0; i < n; i++)
	{
		ch = str[0];
		for (int j = 1; j < len; j++)
		{
			str[j - 1] = str[j];
		}
		str[len - 1] = ch;
	}
	return str;
}
int main()
{
	char arr[] = "Hello World!";
	left_move(arr, 6);
	return 0;
}