// ex7_11.c
// 批量数据统计，输入10个学生的成绩，统计不及格的人数
#include <stdio.h>
#define NUM 30

void Input(long *pn, float *pscore, int n)
{
    int i;
    printf("Please enter the number and score:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%ld%f", pn + i, pscore + i);
    }
}

int Find(long num[], float score[], int n)
{
    int i;
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (score[i] < 60)
        {
            if (!count)
                printf("Failed student:\n");
            printf("%ld %5.2f\n", num[i], score[i]);
            count++;
        }
    }
    return count;
}

int main()
{
    float score[NUM];
    long num[NUM];
    int n;
    int fail = 0;
    printf("Please enter total number:");
    scanf("%d", &n);
    Input(num, score, n);
    fail = Find(num, score, n);
    printf("%d students are fail!\n", fail);
    return 0;
}