// ex7_4.c
// 指针返回多个值，求两个整数的最大公约数和最小公倍数
#include <stdio.h>

int get(int m, int n, int *p);

int main()
{
    int m, n;
    int gcd, gbd;
    scanf("%d%d", &m, &n);
    gcd = get(m, n, &gbd);
    printf("gcd: %d\tgbd:%d\n", gcd, gbd);
    return 0;
}

int get(int m, int n, int *p)
{
    int r;
    *p = m * n;
    do
    {
        r = m % n;
        m = n;
        n = r;
    } while (r);
    *p = *p / m;
    return m;
}