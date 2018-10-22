// ex11_3.c
// 使用fgets函数读取文本文件dream.txt的内容，并输出到屏幕
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char str[200];
	fp = fopen("dream.txt", "r");
	if(fp == 0)
	{
		printf("file error\n");
		exit(1);
	}
	while((fgets(str, 200, fp)) != NULL)
		printf("%s", str);
	putchar('\n');
	fclose(fp);
	return 0;
}
