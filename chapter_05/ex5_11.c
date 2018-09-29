// ex5_11.c
// 求二项式定理，即n个a+b的和的乘积
#include <stdio.h>
#include <math.h>

double Fact(int n);
double Comb(int m, int n);
double Term(int n, int r, double a, double b);
double Sum(double a, double b, int n);

int main()
{
    int n;
    double a, b, s;
    scanf("%d%lf%lf", &n, &a, &b);
    if(n < 0) n = -n;
    s = Sum(a, b, n);
    if(b >= 0)
        printf("(%lf + %lf)^%d=%lf\n", a, b, n, s);
    else
        printf("(%lf%lf)^%d=%lf\n", a, b, n, s);
    return 0;
}
double Fact(int n)
{
    double f = 1.0;
    int i;
    for(i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}
double Comb(int m, int n)
{
    return Fact(m) / Fact(n) / Fact(m - n);
}
double Term(int n, int r, double a, double b)
{
    double t;
    t = Comb(n, r) * pow(a, n - r) * pow(b, r);
    return t;
}
double Sum(double a, double b, int n)
{
    int r;
    double t = 0.0;
    for(r = 0; r <= n; r++)
    {
        t += Term(n, r, a, b);
    }
    return t;
}