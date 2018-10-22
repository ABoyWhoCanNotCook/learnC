// ex11_7.c
// 修改dream.txt中的内容，将所有小写字母改为大写字母
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	fp = fopen("dream.txt", "r+");
	if(fp == 0)
	{
		printf("file error\n");
		exit(1);
	}
	while((ch = fgetc(fp)) != EOF)
	{
		if(ch >= 'A' && ch <= 'Z')
		{
			ch += 32;
			fseek(fp, -1L, 1);
			fputc(ch, fp);
			fflush(fp);
		}
	}
	fclose(fp);
	return 0;
}
