// ex11_5.c
// 使用fwrite函数将一批学生的数据：学号 姓名 成绩；存入comput.dat文件中
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
	struct Student st[3] = {{1001, "Tom", 74}, {1002, "Jack", 83}, {1003,
		"Lisa", 66}};
	fp = fopen("computer.dat", "wb");
	if(fp == 0)
	{
		printf("file error\n");
		exit(1);
	}
	fwrite(st, sizeof(st), 1, fp);
	fclose(fp);
	return 0;
}
