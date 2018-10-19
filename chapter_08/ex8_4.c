// ex8_4.c
// 
#include <stdio.h>
#include "string.h"

int main()
{
	char str[20] = " Programming";
	char cstr[20];
	char temp[20];
	int i;

	printf("Input a string:\n");
	gets(cstr);
	if(strcmp(str, cstr) > 0)
	{
		strcpy(temp, str);
		strcpy(str, cstr);
		strcpy(cstr, temp);
	}
	strcat(cstr, "**");
	i = strlen(cstr);
	if(i + strlen(str) < 20)
	{
		strcat(cstr, str);
		puts(cstr);
	}
	else
		printf("Strcat can't be executed!\n");
	strupr(cstr);
	puts(cstr);
	return 0;
}
