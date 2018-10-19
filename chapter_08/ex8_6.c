// ex8_6.c
// 统计单词出现的次数
#include <stdio.h>
#include "string.h"

int search(const char *ps, const char *pf)
{
	int count = 0, i = 0;
	char dest[20];
	while(*ps)
	{
		i = 0;
		while((*ps >= 'a' && *ps <= 'z') || (*ps >= 'A' && *ps <= 'Z'))
			dest[i++] = *ps++;
		dest[i] = '\0';
		ps++;
		if(strcmp(dest, pf) == 0)
			count++;
	}
	return count++;
}

int main()
{
	char source[200];
	char key[15];
	puts("Input the source sentence: ");
	gets(source);
	puts("Input the key word: ")
		;
	gets(key);
	printf("There are %d key words in this sentence.\n", search(source, key));
	return 0;
}

