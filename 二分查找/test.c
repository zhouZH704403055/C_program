#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//�����С��������
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
			printf("�ҵ��ˣ���%d��Ԫ�ء�\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("������û�����Ԫ�ء�\n");
	}
	return 0;
}