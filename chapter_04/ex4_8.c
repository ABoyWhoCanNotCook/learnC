// ex4_8.c
// 数列求和，求已知公式的结果
#include <stdio.h>

int main()
{
	int i, sign;
	double item, sum;
	sum = 0;
	sign = 1;
	for(i = 1; i <= 1000; i++)
	{
		item = sign / (2.0 * i - 1);
		sum += item;
		sign = -sign;
	}
	printf("sum=%f\n", sum);
	return 0;
}