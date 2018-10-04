//辗转相除法
#include<stdio.h>
int main()
{
	int a = 319;
	int b = 377;
	while (a%b)
	{
		int tmp = a%b;
		a = b;
		b = tmp;
	}
	printf("%d", b);
	return 0;
}


//更相损减法
//#include<stdio.h>
//int main()
//{
//	int a = 260;
//	int b = 104;
//	int m = a;
//	int n = b;
//	int ret = 0;
//	int t = 0;
//	if (m < n)
//	{
//		int temp = m;
//		m = n;
//		n = temp;
//	}
//	while ((m % 2) && (n % 2))
//	{
//		m = m / 2;
//		n = n / 2;
//		ret++;
//	}
//	t = m - n;
//	while (t != n)
//	{
//		m = n;
//		n = t;
//		t = m - n;
//		if (t < 0)
//		{
//			t = -t;
//		}
//	}
//	while (ret)
//	{
//		t = t * 2;
//		ret--;
//	}
//	printf("%d", t);
//	return 0;
//}