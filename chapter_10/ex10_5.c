// ex10_5.c
// 结构体数组的定义和使用
#include <stdio.h>
#include <string.h>

struct Date
{
	int year;
	int month;
	int day;
};
typedef struct Date Date;

struct Student
{
	int ID;
	char name[20];
	Date birthday;
	char sex;
	double score;
};
typedef struct Student Student;

int main()
{
	Student st[3] = {{1001, "Zhang", {1992, 5, 21}, 'F', 83}, {1002, "Wang",
		{1993, 6, 18}, 'M', 66}};
	int i;
	st[2].ID = 1003;
	strcpy(st[2].name, "Li");
	st[2].birthday.year = 1993;
	st[2].birthday.month = 7;
	st[2].birthday.day = 22;
	st[2].sex = 'M';
	st[2].score = 65;
	for(i = 0; i < 3; i++)
	{
		printf("%d %s %d.%d.%d %c %.2f\n", (st + i)->ID, (st + i)->name,
				(st + i)->birthday.year, (st + i)->birthday.month, 
				(st + i)->birthday.day, (st + i)->sex, (st + i)->score);
	}
	return 0;
}
