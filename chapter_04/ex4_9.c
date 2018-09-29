// ex4_9.c
// 打印九九加法表
#include <stdio.h>

int main()
{
	int i, j;
	for(i = 1; i <= 9; i++)
	{
		for(j = 1; j <= i; j++)
		{
			printf("%d+%d=%d\t", i, j, i + j);
		}
		printf("\n");
	}
	return 0;
}