#include<stdio.h>
void* MyMemcpy(void* dst, const void* src, size_t count)
{
	void* ret = dst;
	while (count--)
	{
		*(char*)dst = *(char*)src;
		dst = (char*)dst + 1;
		src = (char*)src + 1;
	}
	return ret;
}
int main()
{
	char str1[] = "Hello World!";
	char str2[20] = { 0 };
	MyMemcpy(str2, str1, sizeof(str1));
	printf("%s", str2);
	return 0;
}