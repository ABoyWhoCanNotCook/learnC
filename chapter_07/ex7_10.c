// ex7_10.c
// 二维数组的访问
#include <stdio.h>
#define ROW_SIZE 4
#define COLUMN_SIZE 4

int main()
{
    int i, j;
    int count = 0;
    int a[ROW_SIZE][COLUMN_SIZE];
    for (i = 0; i < ROW_SIZE; i++)
    {
        for (j = 0; j < COLUMN_SIZE; j++)
        {
            printf("%p\t", a[i] + j);
            *(a[i] + j) = count;
            count++;
        }
        printf("\n");
    }
    for (i = 0; i < ROW_SIZE; i++)
    {
        for (j = 0; j < COLUMN_SIZE; j++)
            printf("%d\t", *(*(a + i) + j));
        printf("\n");
    }
    return 0;
}