// ex9_1.c
// 宏定义，无参数宏指令
#include <stdio.h>
#define PI 3.14159
#define ISPOSITIVE > 0
#define FORMAT "Area = %f\n"
#define ERRMSG "Input error!\n"
int main()
{
	double r;
	scanf("%lf", &r);
	if(r ISPOSITIVE)
		printf(FORMAT, PI * r * r);
	else
		printf(ERRMSG);
	return 0;
}
