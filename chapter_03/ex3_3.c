// ex_3.3.c
// 自增自减运算符示例运算
#include <stdio.h>

int main()
{
	int a = 1, b = 1, c, d;
	a++;
	++b;
	printf("a=%d, b=%d\n", a, b);
	c = --a;
	printf("a=%d, c=%d\n", a, c);
	d = b--;
	printf("b=%d, d=%d\n", b, d);
	c = (a++) + (++b);
	printf("a=%d, b=%d, c=%d,\n", a, b, c);
	d = -b++;
	printf("b=%d, d=%d\n", b, d);
	return 0;
}