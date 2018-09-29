// ex_3.1.c
// 算数运算符及其表达式示例
#include <stdio.h>
#include <math.h>

int main()
{
	int a = 3, b = 5, c = 8;
	double d = 5.0;
	printf("%d, %f\n", a + b / c, a + b / c);
	printf("%d, %d\n", a % 2, (-a) % (-2));
	printf("%f, %f\n", sqrt(b), sqrt(d));
	return 0;
}