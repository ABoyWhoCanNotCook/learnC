// ex11_8.C
// 文件复制
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fin, *fout;
	char s1[] = "dream.txt", s2[] = "dreamout.txt";
	char ch;

	fin = fopen(s1, "r");
	if(fin == 0)
	{
		printf("file error\n");
		exit(1);
	}
	fout = fopen(s2, "w");
	if(fout == 0)
	{
		printf("file error\n");
		exit(1);
	}
	while((ch = fgetc(fin)) != EOF)
		fputc(ch, fout);
	fclose(fin);
	fclose(fout);
	return 0;
}
