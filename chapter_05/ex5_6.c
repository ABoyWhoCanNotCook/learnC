// ex5_5.c
// 求两个数的最大公约数
#include <stdio.h>

int gcd(int m, int n);
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    printf("gcd: %d\n", gcd(m, n));
}
int gcd(int m, int n)
{
    int r;
    do
    {
        r = m % n;
        m = n;
        n = r;
    }while(r);
    return m;
}
