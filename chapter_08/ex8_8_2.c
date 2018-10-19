// ex8_8_2.c
// 利用二维字符数组实现字符串排序
#include <stdio.h>
#include "string.h"

void sort(char (*str)[10], int n)
{
	char temp[20];
	int i, j, k;
	for(i = 0; i < n - 1; i++)
	{
		k = i;
		for(j = i + 1; j < n; j++)
			if(strcmp(str[k], str[j]) > 0)
				k = j;
		if(k != i)
		{
			strcpy(temp, str[i]);
			strcpy(str[i], str[k]);
			strcpy(str[k], temp);
		}
	}
}

int main()
{
	char string[][10] = {"FORTRAN", "PASCAL", "BASIC", "C"};
	int i, nNum = 4;
	sort(string, nNum);
	for(i = 0; i < nNum; i++)
		printf("%s\n", string[i]);
	return 0;
}
