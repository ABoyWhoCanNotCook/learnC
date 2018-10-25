// Ex4_2.c
// 输出圆柱体的高和半径，求出其体积和表面积
#include <stdio.h>
#define PI 3.14159

int main()
{
	double r, h;
	double area, volume;
	printf("input r: ");
	scanf("%lf", &r);
	printf("input h: ");
	scanf("%lf", &h);
	area = 2 * PI * r * h + PI * r * r * 2;
	volume = PI * r * r * h;
	printf("the area is: %.3f\n", area);
	printf("the volume is: %.3f\n", volume);
	return 0;
}
