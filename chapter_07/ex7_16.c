// ex7_16.c
// 用指针数组输出二维数组
#include <stdio.h>
int main()
{
    int a[3][4] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23};
    int i, j;
    int *p[3];
    for (i = 0; i < 3; i++)
    {
        p[i] = a[i];
        for (j = 0; j < 4; j++)
            printf("%5d", *(p[i] + j));
        printf("\n");
    }
    return 0;
}