#include<stdio.h>
#include<assert.h>
char* My_Strcpy(char* destination,const char* source)
{
	assert(destination);
	assert(source);
	char* t1 = destination;
	const char* t2 = source;
	while (*t1++ = *t2++)
	{
		;
	}
	return destination;
}
int main()
{
	char arr_1[20] = { 0 };
	char arr_2[] = "Hello World!";
	My_Strcpy(arr_1, arr_2);
	printf("%s\n", arr_1);
	return 0;
}