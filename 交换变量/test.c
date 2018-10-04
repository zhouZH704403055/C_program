//#include<stdio.h>
//void swap(int* a, int* b)
//{
//	int temp = 0;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	swap(&a, &b);
//	return 0;
//}

//不创建临时变量
#include<stdio.h>
void swap(int* a, int* b)
{
	*a = *a^*b;
	*b = *a^*b;
	*a = *a^*b;
	return 0;
}
int main()
{
	int a = 1;
	int b = 2;
	swap(&a, &b);
	return 0;
}