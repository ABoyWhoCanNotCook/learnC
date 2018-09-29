// ex5_7.c
// 求n的阶乘
#include <stdio.h>

double Fact(int n)
{
    if(!n)
    {
        return (1.0);
    }
    return (n*Fact(n-1));
}
int main(int argc, char const *argv[])
{
    int n;
    double t;
    printf("Please input n:\n");
    scanf("%d", &n);
    if(n < 0)
        n = -n;
    t = Fact(n);
    printf("%d!=%lf\n", n, t);
    return 0;
}
