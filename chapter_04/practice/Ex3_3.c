// Ex3_3.c
// 输出Fibonacci数列的前十项
#include <stdio.h>
int main()
{
	int n1 = 1, n2 = 1, npre, n = 0;
	int i, temp;
	printf("Fibonacci:\n");
	printf("%d %d", n1, n2);
	npre = n2;
	n = n1 + n2;
	for(i = 2; i < 10; i++)
	{
		printf(" %d", n);
		temp = n;
		n = npre + n;
		npre = temp;
	}
	putchar(10);
	return 0;
}
