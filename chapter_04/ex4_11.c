// ex4_11.c
// 比较break和continue的区别
#include <stdio.h>

int main()
{
	int i, n;
	printf("break:\n");
	for(i = 1; i <= 5; i++)
	{
		printf("Enter n: ");
		scanf("%d", &n);
		if(n < 0)
			break;
		printf("n = %d\n", n);
	}
	printf("The end.\n");
	
	printf("continue:\n");
	for(i = 1; i <= 5; i++)
	{
		printf("Enter n: ");
		scanf("%d", &n);
		if(n < 0)
			continue;
		printf("n = %d\n", n);
	}
	printf("The end.\n");
}