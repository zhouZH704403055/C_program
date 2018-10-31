#include<stdio.h>
#include<string.h>
void Swap(void* p1, void* p2, int size)
{
	//每次循环交换一个字节的内容
	for (int i = 0; i < size; i++)
	{
		char tmp = *((char*)p1 + i);
		*((char*)p1 + i) = *((char*)p2 + i);
		*((char*)p2 + i) = tmp;
	}
}
//默认从小到大排列
void BubbleSort(void *base, int count, int width, int(*cmp)(const void*, const void*))
{
	for (int i = 0; i < count - 1; i++)
	{
		for (int j = 0; j < count - i - 1; j++)
		{
			//base为void型指针，不能直接进行指针加减运算，先强转为char*
			if (cmp((char*)base + j * width, (char*)base + (j + 1)*width) > 0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1)*width, width);
			}
		}
	}
}

int int_cmp(const void* p1, const void* p2)
{
	return (*((int*)p1) > *((int*)p2));
}
int char_cmp(const void* p1, const void* p2)
{
	return(*((char*)p1) > *((char*)p2));
}
int str_cmp(const void* p1, const void* p2)
{
	return (strcmp(*(char**)p1, *(char**)p2));
}
int main()
{
	int arr1[10] = { 0,5,4,2,9,7,3,1,6,8 };
	char arr2[5] = { 'd','g','r','q','x' };
	char* arr3[4] = { "lijk","efgh","ABCD","LMNO" };
	BubbleSort(arr1, sizeof(arr1) / sizeof(arr1[0]), sizeof(arr1[0]), int_cmp);
	BubbleSort(arr2, sizeof(arr2) / sizeof(arr2[0]), sizeof(arr2[0]), char_cmp);
	BubbleSort(arr3, sizeof(arr3) / sizeof(arr3[0]), sizeof(arr3[0]), str_cmp);
	return 0;
}