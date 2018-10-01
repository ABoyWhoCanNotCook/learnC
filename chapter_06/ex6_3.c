// ex7_3.c
// 斐波那契数列问题
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, fib[20] = {0, 1, 1};
    int count;
    i = 3;
    do
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        i++;
    } while (fib[i - 1] < 1000);
    count = i - 1;
    for (i = 1; i <= count; i++)
    {
        printf("%10d", fib[i]);
        if ((i) % 5 == 0)
            printf("\n");
    }
    printf("\nIn the %d month, we have enough rabits!\n", count);
    return 0;
}
