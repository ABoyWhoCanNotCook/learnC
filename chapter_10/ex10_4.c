// ex10_4.c
// 结构体指针
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
	Student s1, *p;
	p = &s1;
	s1.ID = 2001;
	strcpy(p->name, "Liang");
	p->birthday.year = 1978;
	p->birthday.month = 4;
	p->birthday.day = 20;
	p->sex = 'M';
	p->score = 100;
	printf("%d %s %d.%d.%d %c %.2f\n", p->ID, p->name, p->birthday.year,
			p->birthday.month, p->birthday.day, (*p).sex, (*p).score);

	return 0;
}
