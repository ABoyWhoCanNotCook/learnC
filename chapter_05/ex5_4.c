// ex5_4.c
// 判断一个数是否为质数
#include <stdio.h>
#include <math.h>

int JudgePrime(int n)
{
	int i, k;
	int judge = 1;
	if(n == 1)
		judge = 0;
	k = (int)sqrt(n);
	for(i = 2; judge && i <= k; i++)
		if(n % i == 0)
			judge = 0;
	return judge;
}
int main()
{
	int number;
	printf("type '0' to exit: ");
	scanf("%d", &number);
	while(number > 0)
	{
		if(JudgePrime(number))
			printf("%d is prime.\n", number);
		else
			printf("%d is not prime.\n", number);
		printf("type '0' to exit: ");
		scanf("%d", &number);
	}
	return 0;
}
