// ex5_5.c
// 打印一条由30个减号组成的横线
#include <stdio.h>

void DrawLine()
{
    int i;
    for(i = 1; i <= 30; i++)
    {
        printf("-");
    }
    printf("\n");
    return ;
}
int main()
{
    DrawLine();
    printf("I am some text.\n");
    DrawLine();
    return 0;
}