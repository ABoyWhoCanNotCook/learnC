// ex4_6.c// 计算1到n的累加
#include <stdio.h>

int main()
{
	int n, i, sum;
	printf("Enter a positive integer: ");
	scanf("%d", &n);
	if(n < 0)
	{
		n = -n;
	}
	i = 1;
	sum = 0;
	while(i <= n)
	{
		sum += i;
		i++;
	}
	printf("∑%d=%d\n", n, sum);
	return 0;
}