// ex5_10.c
// 利用局部变量求解1到5的阶乘
#include <stdio.h>

int fun(int n)
{
    static int f = 1;
    f = f * n;
    return f;
}
int main(int argc, char const *argv[])
{
    int i;
    for(i = 1; i <= 5; i++)
    {
        printf("%d != %d\n", i, fun(i));
    }
    return 0;
}
