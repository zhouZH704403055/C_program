#include<stdio.h>
#include<string.h>
#include<assert.h>
void reverse(char str[], int left, int right)
{
	while (left < right)
	{
		char tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
}
char* left_move(char str[], int n)
{
	int len = strlen(str);
	assert(n <= len);
	reverse(str, 0, n - 1);
	reverse(str, n, len - 1);
	reverse(str, 0, len - 1);
	return str;
}
int main()
{
	char arr[] = "Hello World!";
	left_move(arr, 5);
	return 0;
}