// ex9_2.c
// 宏定义，带参数的宏指令
#include <stdio.h>
#define SUB(a, b) a - b
int main()
{
	int a = 3, b = 2;
	int c;
	c = SUB(a, b);
	printf("%d\n", c);
	c = SUB(3, 1 + 2);
	printf("%d\n", c);
	return 0;
}
