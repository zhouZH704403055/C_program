#include<stdio.h>
void fun(int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		while ((arr[left] % 2 == 1) && (left < right))
		{
			left++;
		}
		while ((arr[right] % 2 == 0) && (left < right))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
			left++;
			right--;
		}
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int size = sizeof(arr) / sizeof(arr[0]);
	fun(arr, size);
	return 0;
}