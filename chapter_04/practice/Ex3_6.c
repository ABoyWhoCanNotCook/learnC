// Ex3_6.c
// 输入m的值，计算出m=m - m^2/2! + m^3/3! -m^4/4! + ...
#include <stdio.h>
int main()
{
	double m;
	double result;
	int i, n = 1;
	printf("input m: ");
	scanf("%lf", &m);
	double temp;
	int count = -1;
	double fir, sec;
	fir = sec = 1;
	for(i = 0; i < n; i++)
	{
		fir *= m;
		sec *= i + 1;
	}	
	count *= -1;
	n++;
	while(fir / sec > 0.0001)
	{
		result += fir / sec * count;
		fir = sec = 1;
		for(i = 0; i < n; i++)
		{
			fir *= m;
			sec *= i + 1;
		}
		count *= -1;
		n++;
	}
	printf("the result is: %.2f\n", result);
}
