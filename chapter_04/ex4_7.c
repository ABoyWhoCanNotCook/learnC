// ex4_7.c
// 求n的阶乘
#include <stdio.h>

int main()
{
	int n, i;
	double fac;
	printf("Enter a positive integer: ");
	scanf("%d", &n);
	if(n < 0)
	{
		n = -n;
	}
	i = 1;
	fac = 1;
	do	{
		fac *= i;
		i++;
	}while(i <= n);
	printf("%d!=%f\n", n, fac);
	return 0;
}