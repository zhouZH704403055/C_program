#include<stdio.h>
#include<string.h>
void reverse(char* start, char* end)
{
	char tmp;
	while (start < end)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
void reverse_str(char* str)
{
	int len = strlen(str);
	char* left = str;
	char* right = str + len - 1;
	reverse(left, right);
	right = left;
	while (*left != '\0' && *right != '\0')
	{
		while ((*right != ' ') && (*right != '\0'))
		{
			right++;
		}
		reverse(left, right - 1);
		right++;
		left = right;
	}

}
int main()
{
	char arr[] = "student a am i";
	reverse_str(arr);
	printf("%s", arr);
	return 0;
}