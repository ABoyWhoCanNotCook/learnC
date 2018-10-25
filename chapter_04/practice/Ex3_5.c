// Ex3_5.c
// 用辗转相除法求两个数的最大公约数
#include <stdio.h>

int main()
{
	int a, b, d;
	printf("input two number: ");
	scanf("%d%d", &a, &b);
	d = a % b;
	while(d)
	{
		a = b;
		b = d;
		d = a % b;
	}
	printf("the greatest common divisor is: %d\n", b);
	return 0;
}
