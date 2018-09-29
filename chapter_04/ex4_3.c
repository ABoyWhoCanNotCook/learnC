// ex4_3.c
// 求三角形面积，输入三边，输出面积，改进程序，使其对用户不合理输入进行判别
#include <stdio.h>
#include <math.h>

int main()
{
	double edge1, edge2, edge3, p, area;
	printf("Enter three edges of a tringle:");
	scanf("%lf%lf%lf", &edge1, &edge2, &edge3);
	if(edge1 > 0 && edge2 > 0 && edge3 > 0 && edge1 + edge2 > edge3 
	&& edge1 + edge3 > edge2 && edge2 + edge3 > edge1)
	{
		p = (edge1 + edge2 + edge3) /2;
		area = sqrt(p * (p -edge1) * (p- edge2) * (p - edge3));
		printf("area=%f\n", area);
	}
	else
	{
		printf("Error input!\n");
	}
	return 0;
}