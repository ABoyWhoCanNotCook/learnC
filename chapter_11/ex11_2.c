// ex11_2.c
// 读出文本文件dream.txt的内容，并输出到屏幕
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char ch;
	fp = fopen("dream.txt", "r");
	if(fp == 0)
	{
		printf("file error\n");
		exit(1);
	}
	while((ch = fgetc(fp)) != EOF)
		putchar(ch);
	putchar('\n');
	fclose(fp);
	return 0;
}
