// Ex4_2.c
// 输入一个华氏温度，输出其对应的摄氏温度，并四舍五入保留两位小数点
#include <stdio.h>

int main()
{
	double fahrenheit;
	double celsius;
	printf("input faheheit temperature:");
	scanf("%lf", &fahrenheit);
	celsius = 5.0 / 9 * (fahrenheit - 32);
	printf("celsius temperature: %.2f\n", celsius);
	return 0;
}
