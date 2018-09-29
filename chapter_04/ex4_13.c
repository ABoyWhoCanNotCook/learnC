// ex4_13.c// 三元一次方程求解，一百块钱买一百只鸡，公鸡5元，母鸡三元，小鸡一元三只。
#include <stdio.h>

int main()
{
	int a, b, c;
	for(a = 0; a <= 20; a++)
	{
		for(b = 0; b <= 33; b++)
		{
			c = 100 - a - b;
			if(15 * a + 9 * b + c == 300)
			{
				printf("%d, %d, %d\n", a, b, c);
			}
		}
	}
	return 0;
}