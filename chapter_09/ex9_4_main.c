// ex9_4_main.c
// 多文件工程，计算矩形和圆形的周长和面积
#include <stdio.h>
#include "ex9_4_circle.h"
#include "ex9_4_rectangle.h"
int main()
{
	double r, w, h;
	printf("Input radius:\n");
	scanf("%lf", &r);
	printf("Circle area=%f\n", circle_area(r));
	printf("Circle perimeter==%f\n", circle_perimeter(r));
	printf("Input width and height:\n");
	scanf("%lf%lf", &w, &h);
	printf("Rectangle area=%f\n", rectangle_area(w, h));
	printf("Rectangle perimeter==%f\n", rectangle_perimeter(w, h));
	return 0;
}

