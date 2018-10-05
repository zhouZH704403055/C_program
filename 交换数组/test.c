#include<stdio.h>
int main()
{
	int arr_1[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int arr_2[10] = { 9,8,7,6,5,4,3,2,1,0 };
	for (int i = 0; i < 10; i++)
	{
		int temp = arr_1[i];
		arr_1[i] = arr_2[i];
		arr_2[i] = temp;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr_1[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr_2[i]);
	}
	printf("\n");
	return 0;
}