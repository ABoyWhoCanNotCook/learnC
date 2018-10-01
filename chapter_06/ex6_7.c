// ex6_7.c
// 数组元素的查找
#include <stdio.h>
#define SIZE 10

int find(int a[], int n, int x);
int main()
{
    int array[SIZE], i = 0, n, x;
    int pos;
    do
    {
        printf("Please input n(1<=n<=%d):\n", SIZE);
        scanf("%d", &n);
    } while (n < 1 || n > SIZE);
    printf("Please input %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);
    printf("Please input x be searched:\n");
    scanf("%d", &x);
    pos = find(array, n, x);
    if (pos < n)
        printf("value=%d, index=%d\n", x, pos);
    else
        printf("Not present!\n");
    return 0;
}

int find(int a[], int n, int x)
{
    int i = 0;
    while (i < n)
    {
        if (x == a[i])
            break;
        i++;
    }
    return i;
}