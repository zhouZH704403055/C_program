#include<stdio.h>
int main()
{
	char ch = 0;
	int count = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch == '{ ')
		{
			count++;
		}
		else if (count == 0 && ch == '}')
		{
			printf("�����Ų�ƥ��\n");
			return 0;
		}
		else if (ch == '}')
		{
			count--;
		}
	}
	if (count == 0)
	{
		printf("������ƥ��\n");
	}
	else
	{
		printf("�����Ų�ƥ��\n");
	}
	return 0;
}