// ex6_1.c
// 一维数组的定义和访问
#include <stdio.h>

int main()
{
    int score1[5] = {98, 95, 67, 83, 76};
    int score2[5];
    int i;

    printf("score1 is: ");
    for(i = 0; i < 5; i++)
        printf("%5d", score1[i]);
    printf("\n");
    printf("Input score2: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &score2[i]);
    }
    printf("score2 is: ");
    for (i = 0; i < 5; i++)
        printf("%5d", score2[i]);
    printf("\n"); 
    for (i = 0; i < 5;i++)
        score1[i] = score2[i];
    printf("\n");
    printf("now score1 is equal to score2: ");
    for (i = 0; i < 5; i++)
        printf("%5d", score2[i]);
    printf("\n");
    return 0;
}