// ex_3.2.c
// 逻辑运算符及其表达式示例
#include <stdio.h>

int main()
{
	int a = 3, b = 5, c = 8;
	printf("a=%d, b=%d, c=%d\n", a, b, c);
	printf("%d\n", b > a && b < c);
	printf("%d\n", a == 3 || b < 1);
	printf("%d\n", !a && b);
	return 0;
}