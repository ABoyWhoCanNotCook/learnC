// ex8_9.c
// 带参数的main函数
#include <stdio.h>
int main(int argc, char **argv)
{
	int i;
	for(i = 1; i < argc; i++)
		printf("%8s", argv[i]);
	printf("\n");
	return 0;
}
