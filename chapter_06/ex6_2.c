// ex6_2.c
// 输入50以内学生的成绩，并计算平均值
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float score[50] = {0};
    int num;
    float sum = 0, average;
    int i;
    do
    {
        printf("input the number of students:\n");
        scanf("%d", &num);
    } while (num <= 0 || num > 50);
    printf("Input the score:\n");
    for (i = 0; i < num; i++)
    {
        scanf("%f", &score[i]);
        sum += score[i];
    }
    average = sum / num;
    printf("The average is:%5.2f\n", average);
    return 0;
}
