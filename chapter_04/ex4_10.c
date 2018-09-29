// ex4_10.c
// 打印图形， 打印等腰梯形
#include <stdio.h>

int main()
{
	int i, j;
	for(i = 1; i <= 4; i++)
	{
		for(j = 1; j <= 4-i; j++)
		{
			printf(" ");
		}
		for(j = 1; j <= 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}