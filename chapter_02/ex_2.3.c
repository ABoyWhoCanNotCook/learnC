// ex_2.3.c
// 函数getchar, putchar用法示例
#include <stdio.h>

int main()
{
	char ch1, ch2;
	ch1 = getchar();
	getchar();
	ch2 = getchar();
	putchar(ch1);
	putchar('\t');
	putchar(ch2);
	putchar('\n');
	printf("%c\t%c\n", ch1, ch2);
	return 0;
}