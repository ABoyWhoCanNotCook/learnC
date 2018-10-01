// ex6_9.c
// 数组元素的删除
#include <stdio.h>
#define SIZE 5

void print(int a[], int n)
{
    int i;
    printf("The array is:\n");
    for (i = 0; i < n; i++)
        printf("%5d", a[i]);
    printf("\n");
}

int delArray(int a[], int n, int x)
{
    int i, j;
    int flag = 1;
    for (i = 0; i < n && a[i] != x; i++)
        ;
    if (i == n)
        flag = 0;
    else
    {
        for (j = i; j < n - 1; j++)
            a[j] = a[j + 1];
    }
    return flag;
}

int main()
{
    int array[SIZE] = {23, 45, 34, 12, 56};
    int x;
    print(array, SIZE);
    printf("Please input x be deleted:\n");
    scanf("%d", &x);
    if (delArray(array, SIZE, x))
    {
        print(array, SIZE - 1);
    }
    else
        printf("Can not delete x!\n");
    return 0;
}