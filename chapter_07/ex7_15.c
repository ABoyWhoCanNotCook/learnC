// ex7_15.c
// 二级指针的定义和使用
#include <stdio.h>
int main()
{
    int a = 10;
    int *b = &a;
    int **c = &b;
    printf("a and b:\n");
    printf("&a:%p\tb:%p\n", &a, b);
    printf("a:%d\t\t*b:%d\n", a, *b);
    printf("\nb and c:\n");
    printf("&b:%p\tc:%p\n", &b, c);
    printf("b:%p\t*c:%p\n", b, *c);
    printf("\na and c:\n");
    printf("a:%d\t**c:%d\n", a, **c);
    return 0;
}