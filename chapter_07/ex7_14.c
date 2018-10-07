// ex7_14.c
// 矩阵的运算，对角线元素累加
#include <stdio.h>
#define COL 3
#define ROW 3

void Output(int *pa)
{
    int i;
    for (i = 0; i < ROW * COL; i++)
    {
        if (!(i % COL) && i)
            printf("\n");
        printf("%d\t", pa[i]);
    }
}

int Sum(int *pa)
{
    int i;
    int sum = 0;
    for (i = 0; i < ROW; i++)
        sum += *(pa + i + i * COL);
    return sum;
}

int main()
{
    int a[ROW][COL] = {{5, 6, 7}, {10, 11, 12}, {15, 16, 17}};
    Output(a[0]);
    printf("\nThe sum of diagonal is: %d\n", Sum(a[0]));
    return 0;
}