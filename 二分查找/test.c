#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//数组从小到大排列
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int left = 0;
	int right = (sizeof(arr) / sizeof(arr[0]) - 1);
	int mid = 0;
	int key = 0;
	scanf("%d", &key);
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，第%d个元素。\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("数组中没有这个元素。\n");
	}
	return 0;
}