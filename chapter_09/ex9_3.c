// ex9_3.c
// 条件编译，利用条件编译调试程序
#include <stdio.h>
#include <math.h>
#define DEBUG
int main()
{
	double a = 0, b = 0, c = 0;
	double s = 0, area;
	scanf("%lf%lf%lf", &a, &b, &c);
#ifdef DEBUG
	printf("DEBUG: a=%f, b=%f, c=%f\n", a, b, c);
#endif
	s = (a + b + c) / 2;
#ifdef DEBUG
	printf("DEBUG: s=%f\n", s);
#endif
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	printf("Area=%f\n", area);
	return 0;
}
