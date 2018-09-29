// ex4_2.c
// 从键盘上读取两个整数，输出较大的值
#include <stdio.h>
int main()
{
	int m, n, p;
	scanf("%d%d", &m, &n);
	if(m >= n)
	{
		p = m;
	}
	else
	{
		p = n;
	}
	printf("p = %d\n", p);
	return 0;
}