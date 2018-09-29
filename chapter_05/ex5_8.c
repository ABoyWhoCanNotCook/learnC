// ex5_8.c
// 数制转换，各个进制之间的转换，
#include<stdio.h>

void MultiBase(int n, int B);
int main()
{
    int n, B;
    do
    {
        scanf("%d%d", &n, &B);
    }while(n <= 0 || B <= 1 || B > 16);
    printf("change result:\n");
    MultiBase(n, B);
    printf("\n");
    return 0;
}
void MultiBase(int n, int B)
{
    int m;
    if(n)
    {
        MultiBase(n / B, B);
        m = n % B;
        if(m < 10)
            printf("%d", m);
        else
            printf("%c", m + 55);
    }
}