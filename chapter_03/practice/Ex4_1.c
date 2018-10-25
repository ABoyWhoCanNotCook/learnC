// Ex4_1.c
// 输入四个整数，求其中的最大值最小值
#include <stdio.h>

int main()
{
	int a, b, c, d;
	int max, min;
	printf("input four number:\n");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	max = a > b ? a : b;
	max = max > c ? max : c;
	max = max > d ? max : d;
	min = a < b ? a : b;
	min = min < c ? min : c;
	min = min < d ? min : d;
	printf("max=%d, min=%d", max, min);
	return 0;
}
