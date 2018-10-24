#include<stdio.h>
#include<stdbool.h>
bool search(int arr[3][3], int x, int y, int key)
{
	int row = 0;
	int col = y - 1;
	while ((row < x) && (col >= 0))
	{
		if (arr[row][col] == key)
		{
			return true;
		}
		else if (arr[row][col] > key)
		{
			col--;
		}
		else
		{
			row++;
		}
	}
	return false;
}
int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int key = 4;
	bool ret = search(arr, 3, 3, key);
	return 0;
}