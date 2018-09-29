// ex4_1.c
// 从键盘上输入三角形3条边的边长，求三角形的面积
#include <stdio.h>
#include <math.h>

int main()
{
	double edge1, edge2, edge3, p, area;
	printf("Enter three edges of a triangle: ");
	scanf("%lf%lf%lf", &edge1, &edge2, &edge3);
	p = (edge1 + edge2 + edge3) / 2;
	area = sqrt(p * (p - edge1) * (p - edge2) * (p - edge3));
	printf("area=%f\n", area);
	return 0;
}