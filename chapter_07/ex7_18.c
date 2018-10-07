// ex7_18.c
// 筛选法求n以内的所有质数
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n;
    int *s;
    do
    {
        printf("Please input n:\n");
        scanf("%d", &n);
    } while (n <= 0);
    s = (int *)calloc(n + 1, sizeof(int));
    if (s == NULL)
    {
        printf("alloction failure");
        exit(1);
    }
    s[0] = s[1] = 1;
    for (i = 2; i <= n; i++)
    {
        if (s[i] == 0)
        {
            for (j = 2 * i; j < n + 1; j = j + i)
                s[j] = 1;
        }
    }
    for (i = 0; i <= n; i++)
    {
        if (!s[i])
            printf("%5d", i);
    }
    printf("\n");
    free(s);
    return 0;
}