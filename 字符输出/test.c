#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	char arr_1[] = "welcome to my code world!";
	char arr_2[] = "#########################";
	int left = 0;
	int right = strlen(arr_1)-1;
	printf("%s\n", arr_2);
	for (; left <= right; left++, right--)
	{
		arr_2[left] = arr_1[left];
		arr_2[right] = arr_1[right];
		Sleep(500);
		system("cls");
		printf("%s\n", arr_2);
	}
	return 0;
}