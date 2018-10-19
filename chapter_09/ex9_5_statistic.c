#include <stdio.h>
extern int n;
int find_max(const int a[])
{
	int max, i;
	if(n == 0)
	{
		printf("There is no data in the array\n");
		return -1;
	}
	max = a[0];
	for(i = 1; i < n; i++)
		if(a[i] > max)
			max = a[i];
	return max;
}

int find_min(const int a[])
{
	int min, i;
	if(n == 0)
	{
		printf("There in no data in the arrary\n");
		return -1;
	}
	min = a[0];
	for(i = 1; i < n; i++)
		if(a[i] < min)
			min = a[i];
	return min;
}
