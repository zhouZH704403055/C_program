#include<stdio.h>
int main()
{
	char ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'A'&&ch <= 'Z')
		{
			ch += 32;
			printf("%c\n", ch);
		}
		else if (ch >= 'a'&&ch <= 'z')
		{
			ch -= 32;
			printf("%c\n", ch);
		}
	}
	return 0;
}