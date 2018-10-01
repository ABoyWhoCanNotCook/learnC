// ex6_4.c
// 二维数组的应用，矩阵的转置
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define ROW 3
#define COL 4

int main(int argc, char const *argv[])
{
    int array_a[ROW][COL];
    int array_b[COL][ROW];
    int i, j;
    srand(time(NULL));
    printf("%d", rand() % 100 + 1);
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
            array_a[i][j] = rand() % 100 + 1;
    }
    printf("Before transpose:\n");
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
            printf("%4d", array_a[i][j]);
        printf("\n");
    }
    for (i = 0; i < COL; i++)
        for (j = 0; j < ROW; j++)
            array_b[i][j] = array_a[j][i];
    printf("After transpose:\n");
    for (i = 0; i < COL; i++)
    {
        for (j = 0; j < ROW; j++)
            printf("%4d", array_b[i][j]);
        printf("\n");
    }
    return 0;
}
