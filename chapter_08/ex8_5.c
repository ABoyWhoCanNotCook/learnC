// ex8_5.c
// 判断一个字符串是否回文
#include <stdio.h>
#include "string.h"
#define MAX 80

int Palindrome(const char *str);

int main()
{
	char str[MAX], ch;
	do
	{
		printf("Input a string:\n");
		gets(str);
		if(Palindrome(str))
			printf("It is a padindrom.\n");
		else
			printf("It is not a palindrom.\n");
		printf("continue?(Y/N)\n");
		ch = getchar();
		getchar();
	}while(ch != 'N' && ch != 'n');
	return 0;
}

int Palindrome(const char *str)
{
	int i = 0, j = strlen(str) - 1;
	while(i < j)
	{
		while(str[i] == 32)
			i++;
		while(str[j] == 32)
			j--;
		if(str[i] == str[j])
		{
			i++;
			j--;
		}
		else
			return 0;
	}
	return 1;
}
