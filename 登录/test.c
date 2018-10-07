#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char psw[20] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("ÇëÊäÈëÃÜÂë£º");
		scanf("%s", psw);
		if (strcmp(psw, "sixsixsix") == 0)
		{
			printf("µÇÂ½³É¹¦!\n");
			break;
		}
	}
	if (i == 3)
	{
		printf("µÇÂ½Ê§°Ü!\n");
	}
	return 0;
}