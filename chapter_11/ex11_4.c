// ex11_4.c
// 使用fscanf读取computer.txt的内容，并输出到屏幕
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
	fp = fopen("computer.txt", "r");
	if(fp == 0)
	{
		printf("file error\n");
		exit(1);
	}
	fscanf(fp, "%d%s%lf", &st.ID, st.name, &st.score);
	while(!feof(fp))
	{
		fprintf(stdout, "%d %-8s\t%.2f\n", st.ID, st.name, st.score);
		fscanf(fp, "%d%s%lf", &st.ID, st.name, &st.score);
	}
	fclose(fp);
	return 0;
}

