#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char psw[20] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", psw);
		if (strcmp(psw, "sixsixsix") == 0)
		{
			printf("��½�ɹ�!\n");
			break;
		}
	}
	if (i == 3)
	{
		printf("��½ʧ��!\n");
	}
	return 0;
}