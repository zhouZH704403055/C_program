#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[])
{
	int ret = 0;
	switch (*(argv[1]+1))
	{
	case 'a':
		ret = atoi(argv[2]) + atoi(argv[3]);
		break;
	case 's':
		ret = atoi(argv[2]) - atoi(argv[3]);
		break;
	case 'm':
		ret = atoi(argv[2]) * atoi(argv[3]);
		break;
	case 'd':
		ret = atoi(argv[2]) / atoi(argv[3]);
		break;
	default:
		printf("²ÎÊý´íÎó\n");
		break;
	}
	printf("%d\n", ret);
	return 0;
}