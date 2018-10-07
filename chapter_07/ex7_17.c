// ex7_17.c
// 用行指针实现二维数组的传递
#include <stdio.h>
#define COL 3
#define ROW 3

void Output(int (*pa)[COL])
{
    int i, j;
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
            printf("%d\t", pa[i][j]);
        printf("\n");
    }
    printf("\n");
}

int Sum(int (*pa)[COL])
{
    int i;
    int sum = 0;
    for (i = 0; i < ROW; i++)
        sum += pa[i][i];
    return sum;
}

int main()
{
    int a[ROW][COL] = {{5, 6, 7}, {10, 11, 12}, {15, 16, 17}};
    Output(a);
    printf("\nThe sum of diagonal is: %d\n", Sum(a));
    return 0;
}