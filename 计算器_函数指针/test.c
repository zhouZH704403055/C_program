#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Add(int a, int b)
{
	return a + b;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
int Div(int a, int b)
{
	return a / b;
}
int Fun(int(*p)(int, int), int a, int b)
{
	return (*p)(a, b);
}
void Test()
{
	int(*pFunArr[4])(int, int) = { Add,Sub,Mul,Div };
	int a = 0;
	int b = 0;
	char ch = 0;
	int ret = 0;
	while (ch != EOF)
	{
		scanf("%d%c%d", &a, &ch, &b);
		switch (ch)
		{
		case '+':
			ret = Fun(pFunArr[0], a, b);
			break;
		case '-':
			ret = Fun(pFunArr[1], a, b);
			break;
		case '*':
			ret = Fun(pFunArr[2], a, b);
			break;
		case '/':
			ret = Fun(pFunArr[3], a, b);
			break;
		default:
			printf(" ‰»Î¥ÌŒÛ£°\n");
		}
		printf("%d\n", ret);
	}
}
int main()
{
	//int(*pFun)(int, int);
	//int(*pFunArr[4])(int, int) = { Add,Sub,Mul,Div };
	//int(*(*ppFunArr[4]))(int, int) = &pFunArr;
	Test();
	return 0;
}