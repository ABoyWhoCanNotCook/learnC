// Ex3_7.c
// 打印倒三角形和菱形
#include <stdio.h>

int main()
{
	for(int i = 0; i < 5; i++)
	{
		for(int k = 0; k < i; k++)
			printf(" ");
		for(int j = 0; j < 9 - i * 2; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
