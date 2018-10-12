#include<stdio.h>
void init(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = i+1;
	}
}
void empty(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = 0;
	}
}
void reverse(int arr[], int size)
{
	int left = 0;
	int right = size - 1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
void print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int size = sizeof(arr) / sizeof(arr[0]);
	print(arr, size);
	empty(arr, size);
	print(arr, size);
	init(arr, size);
	print(arr, size);
	reverse(arr, size);
	print(arr, size);
	return 0;
}