#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,666,5,4,3,2,1 };
	int ret = 0;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		ret ^= arr[i];
	}
	return 0;
}