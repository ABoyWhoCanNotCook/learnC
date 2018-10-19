#include <stdio.h>
extern int n;
int search(const int a[])
{
	int x, i;
	if(n == 0)
	{
		printf("There is no data in the arrary\n");
		return -1;
	}
	printf("Please input a data to search\n");
	scanf("%d", &x);
	for(i = 0; i < n; i++)
		if(a[i] == x)
			break;
	if(i < n)
		return i;
	else
	{
		printf("Not find!\n");
		return -1;
	}
}
