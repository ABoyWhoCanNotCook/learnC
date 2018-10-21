// ex10_6.c
// 结构体的应用，输入不超过10个学生的信息，包括学号，姓名，成绩，按成绩由高到低
// 输出
#include <stdio.h>
struct Student
{
	int ID;
	char name[20];
	double score;
};
typedef struct Student Student;

int Input(Student[]);
void Sort(Student[], int len);
void Output(const Student[], int len);

int main()
{
	Student st[10];
	int num;
	num = Input(st);
	Output(st, num);
	Sort(st, num);
	Output(st, num);
	return 0;
}

int Input(Student s[])
{
	int i, n;
	do
	{
		printf("Enter the sum of students: \n");
		scanf("%d", &n);
	}while(n <= 0 || n > 10);
	for(i = 0; i < n; i++)
	{
		printf("Enter %d-th student: ", i + 1);
		scanf("%d%s%lf", &s[i].ID, s[i].name, &s[i].score);
	}
	return n;
}

void Sort(Student st[], int len)
{
	int i, k, index;
	Student temp;
	for(k = 0; k < len - 1; k++)
	{
		index = k;
		for(i = k + 1; i < len; i++)
			if(st[i].score > st[index].score)
				index = i;
		if(index != k)
		{
			temp = st[index];
			st[index] = st[k];
			st[k] = temp;
		}
	}
}

void Output(const Student s[], int len)
{
	int i;
	printf("学号\t姓名\t成绩\n");
	for(i = 0; i < len; i++)
	{
		printf("%4d\t%-8s %.0f\n", s[i].ID, s[i].name, s[i].score);
	}
}

