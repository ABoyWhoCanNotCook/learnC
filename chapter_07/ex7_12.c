// ex7_12.c
// 十进制转二进制
#include <stdio.h>

int main()
{
    int r[16];
    int *p = r;
    int m;
    printf("Input an integer which belong to 0~65535\n");
    do
    {
        scanf("%d", &m);
    } while (m < 0 || m > 65535);
    while (m != 0)
    {
        *p = m % 2;
        m = m / 2;
        p++;
    }
    printf("The binary is:");
    p--;
    for (; p >= r; p--)
        printf("%d", *p);
    printf("\n");
    return 0;
}