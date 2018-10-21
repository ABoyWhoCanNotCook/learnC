// ex10_3.c
// 结构体变量定义及其使用
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
	Student s1 = {1001, "Zhu", {1991, 3, 12}, 'F', 78};
	Student s2, s3, s4;
	scanf("%d%s%d%d%d%c%lf", &s2.ID, s2.name, &s2.birthday.year, &s2.birthday.month,
			&s2.birthday.day, &s2.sex, &s2.score);
	s3 = s1;
	s4.ID = 1004;
	strcpy(s4.name, "Liu");
	s4.birthday.year = 1992;
	s4.birthday.month = 7;
	s4.birthday.day = 5;
	s4.sex = 'F';
	s4.score = 80;
	printf("%d %s %d.%d.%d %c %lf\n", s1.ID, s1.name, s1.birthday.year,
			s1.birthday.month, s1.birthday.day, s1.sex, s1.score);
	printf("%d %s %d.%d.%d %c %lf\n", s2.ID, s2.name, s2.birthday.year,
			s2.birthday.month, s2.birthday.day, s2.sex, s2.score);
	printf("%d %s %d.%d.%d %c %lf\n", s3.ID, s3.name, s3.birthday.year,
			s3.birthday.month, s3.birthday.day, s3.sex, s3.score);
	printf("%d %s %d.%d.%d %c %lf\n", s4.ID, s4.name, s4.birthday.year,
			s4.birthday.month, s4.birthday.day, s4.sex, s4.score);

	return 0;
}
	
