#include <stdio.h>
extern int n;

void input(int a[])
{
	int i;
	do
	{
		printf("Please input n(1<=n<=10)\n");
		scanf("%d", &n);
	}while(n < 1 || n > 10);
	printf("Please input %d elements\n", n);
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
}

void output(int a[])
{
	int i;
	if(n == 0)
	{
		printf("There is no data in the arrary\n");
		return ;
	}
	printf("The array is:\n");
	for(i = 0; i < n; i++)
		printf("%d  ", a[i]);
	printf("\n");
}
