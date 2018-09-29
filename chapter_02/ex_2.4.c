// ex_2.4.c
// const只读变量定义的示例
#include <stdio.h>
int main()
{
	const double pi = 3.14159;
	double r;
	scanf("%lf", &r);
	printf("area=%f\n", pi * r * r);
	printf("perimeter=%f\n", 2 * pi * r);
	return 0;
}