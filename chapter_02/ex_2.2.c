// ex_2.2.c
// 变量定义及输入输出示例
#include <stdio.h>

int main()
{
	char ch1, ch2;
	int a;
	double d;
	float f1 = 3.14F, f2;
	f2 = -123.4567f;
	printf("Please input ch1, a, d: ");
	scanf("%c%d%lf", &ch1, &a, &d);
	printf("ch1=%%c: %c\n", ch1);
	printf("ch1=%%d: %d\n", ch1);
	ch2 = ch1 + 32;
	printf("ch2=%%c: %c\n", ch2);
	printf("a=%%d: %d\n", a);
	printf("a=%%x: %x\n", a);
	printf("d=%%f: %f\n", d);
	printf("f1=%%f: %f\n", f1);
	printf("f1=%%g: %g\n", f1);
	printf("f1=%%e: %e\n", f1);
	printf("f2=%%10.2f: %10.2f\n", f2);
	return 0;
}