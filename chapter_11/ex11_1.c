// ex11_1.c
// 从键盘读入一段以$结尾的文本，将其输入 指dream.txt
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char ch;
	fp = fopen("dream.txt", "w");
	if(fp == 0)
	{
		printf("file error\n");
		exit(1);
	}
	printf("Enter a text (end with '$'):\n");
	ch = getchar();
	while(ch != '$')
	{
		fputc(ch, fp);
		ch = getchar();
	}
	fclose(fp);
	return 0;
}
	
