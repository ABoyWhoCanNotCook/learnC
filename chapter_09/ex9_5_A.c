// ex9_5_A.c
// 外部变量与外部函数的使用
#include <stdio.h>
extern void fb();
extern void fc();
int x = 0;
int main()
{
	printf("x=%d\n", x);
	fb();
	fc();
	x++;
	printf("x=%d\n", x);
	return 0;
}

