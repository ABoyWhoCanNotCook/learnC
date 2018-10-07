// ex7_19.c
// 二级指针实现动态数组
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int i, j, row, col;
    int **array;
    printf("Input row and col\n");
    scanf("%d%d", &row, &col);
    array = (int **)malloc(row * sizeof(int *));
    for (i = 0; i < row; i++)
        array[i] = (int *)malloc(col * sizeof(int));
    srand(time(0));
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            array[i][j] = rand() % 100;
        printf("Matrix is:\n");
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printf("%6d", array[i][j]);
        printf("\n");
    }
    for (i = 0; i < row; i++)
    {
        free(array[i]);
    }
    free(array);
    return 0;
}