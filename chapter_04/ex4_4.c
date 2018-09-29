// ex4_4.c// 判断三角形是否为等边三角形
#include <stdio.h>

int main()
{
	int a, b, c;
	printf("Enter three positive integers: ");
	scanf("%d%d%d", &a, &b, &c);
	if(a <= 0 || b <= 0 || c <= 0)
	{
		printf("Error input!\n");
	}
	else
	{
		if(a + b > c && a + c > b && b + c > a)
		{
			if(a == b && a == c)
			{
				printf("%d, %d, %d is an equilateral triangle.\n", a, b, c);
			}
			else
			{
				printf("%d, %d, %d is an ordinary triangle.\n", a, b, c);
			}
		}
		else
		{
			printf("%d, %d, %d is not a triangle.\n", a, b, c);
		}
	}
	return 0;
}