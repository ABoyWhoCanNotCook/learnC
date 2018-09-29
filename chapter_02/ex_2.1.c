// ex_2.1.c
// 计算两个整数的乘积
#include <stdio.h>

int multiply(int a, int b)
{
	return (a * b);
}
int main()
{
	int a, b, product;
	printf("Please input two integers: ");
	scanf("%d%d", &a, &b);
	product = multiply(a, b);
	printf("The product is: %d", product);
	return 0;
}