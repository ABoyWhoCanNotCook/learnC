// ex7_5.c
// 返回指针的函数，比较两个数的大小
#include <stdio.h>

int larger(int x, int y);
int *smaller(int *x, int *y);

int main()
{
    int a, b, big, *small;
    printf("Enter two integer values:\n");
    scanf("%d%d", &a, &b);
    big = larger(a, b);
    printf("The larger value is %d.\n", big);
    small = smaller(&a, &b);
    printf("The smaller value is %d.\n", *small);
    return 0;
}

int larger(int x, int y)
{
    if (y > x)
        return y;
    return x;
}

int *smaller(int *x, int *y)
{
    if (*y < *x)
        return y;
    return x;
}