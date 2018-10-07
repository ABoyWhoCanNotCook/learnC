// ex7_8.c
// 指针访问二维数组
#include <stdio.h>

int main()
{
    int a[3][2] = {1, 2, 3, 4, 5, 6};
    int i;
    int *p = &a[0][0];
    for (i = 0; i < 6; i++)
    {
        printf("%p\t%d\n", p + i, *(p + i));
    }
    return 0;
}