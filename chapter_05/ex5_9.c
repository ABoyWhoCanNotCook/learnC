// ex5_9.c
// 统计整数个位数之和，遇到零或满五个终止
#include <stdio.h>

int count;
int sumDigit(int n);
int main()
{
    int a, sum;
    scanf("%d", &a);
    if(a < 0) a = -a;
    sum = sumDigit(a);
    printf("main: sum=%d, count=%d\n", sum, count);
    return 0;
}
int sumDigit(int n)
{
    int sum = 0, i;
    for(i = 1; i <= 5; i++)
    {
        int b;
        b = n % 10;
        if (!b) break;
        sum += b;
        n = n / 10;
        count++;
    }
    printf("SumDigit: i=%d, count=%d, n=%d\n", i, count, n);
    return sum;
}