// ex7_20.c
// 使用函数指针调用函数
#include <stdio.h>

int larger(int x, int y);
int smaller(int x, int y);

int main()
{
    int a, b;
    int (*pf)();
    printf("Enter two integer values:\n");
    scanf("%d%d", &a, &b);
    pf = larger;
    printf("The larger value is %d. \n", (*pf)(a, b));
    pf = smaller;
    printf("The smaller value is %d. \n", (*pf)(a, b));
    return 0;
}

int larger(int x, int y)
{
    if (y > x)
        return y;
    return x;
}

int smaller(int x, int y)
{
    if (y < x)
        return y;
    return x;
}