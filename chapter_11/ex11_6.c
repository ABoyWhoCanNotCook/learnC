// ex11_6.c
// 使用fread函数读取computer.dat文件的内容并输出至屏幕
#include <stdio.h>
#include <stdlib.h>
struct Student
{
	int ID;
	char name[20];
	double score;
};
int main()
{
	FILE *fp;
	struct Student st;
	fp = fopen("computer.dat", "rb");
	if(fp == 0)
	{
		printf("file error\n");
		exit(1);
	}
	fread(&st, sizeof(st), 1, fp);
	while(!feof(fp))
	{
		printf("%d %-8s \t%.2f\n", st.ID, st.name, st.score);
		fread(&st, sizeof(st), 1, fp);
	}
	fclose(fp);
	return 0;
}
