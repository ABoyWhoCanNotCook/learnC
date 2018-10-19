// ex8_8.c
// 字符串的排序, 用一维字符指针数组实现
#include <stdio.h>
#include "string.h"

void sort(char *str[], int n)
{
	char *temp;
	int i, j, k;
	for(i = 0; i < n - 1; i++)
	{
		k = i;
		for(j = i + 1; j < n; j++)
			if(strcmp(str[k], str[j]) > 0)
				k = j;
		if(k != i)
		{
			temp = str[i];
			str[i] = str[k];
			str[k] = temp;
		}
	}
}

int main()
{
	char *pstring[4] = {"FORTRAN", "PASCAL", "BASIC", "C"};
	int i, nNum = 4;
	sort(pstring, nNum);
	for(i = 0; i < nNum; i++)
		printf("%s\n", pstring[i]);
	return 0;
}
