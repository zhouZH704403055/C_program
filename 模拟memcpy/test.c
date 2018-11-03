#include<stdio.h>
#include<assert.h>
void* MyMemcpy(void* dst, const void* src, size_t count)
{
	assert(dst);
	assert(src);
	char* ret = dst;
	for (int i = 0; i < count; i++)
	{
			*((char*)dst)++ = *((char*)src)++;
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