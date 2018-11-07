#include<stdio.h>
#include<assert.h>
void* MyMemset(void* dst, int set, size_t count)
{
	assert(dst);
	void* ret = dst;
	while (count--)
	{
		*((char*)dst)++ = set;
	}
	return ret;
}
int main()
{
	char arr[10] = { 0 };
	int sz = sizeof(arr);
	MyMemset(arr, 'A', sz);
	return 0;
}