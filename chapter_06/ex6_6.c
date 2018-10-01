// ex6_6.c
// 向函数传递二元数组，打印一个二元数组
#include <stdio.h>
#define ROW 3
#define COL 4

void print(int a[][COL], int r);

int main()
{
    int array_a[ROW][COL] = {{1, 2}, {0}, {9, 10, 11}};
    print(array_a, ROW);
    return 0;
}

void print(int a[][COL], int r)
{
    int i, j;
    printf("The array is:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}
