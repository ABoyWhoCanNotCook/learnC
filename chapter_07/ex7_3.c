// ex7_3.c
// 传值和传地址的区别
#include <stdio.h>

void SwapByValue(int, int);
void SwapByAddress(int *, int *);

int main()
{
    int a = 3, b = 4;
    printf("SwapByValue:\n");
    SwapByValue(a, b);
    printf("a=%d, b=%d\n", a, b);
    a = 3;
    b = 4;
    printf("SwapByAddress:\n");
    SwapByAddress(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return 0;
}

void SwapByValue(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("x=%d, y=%d\n", x, y);
}
void SwapByAddress(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("x=%d, y=%d\n", *x, *y);
}