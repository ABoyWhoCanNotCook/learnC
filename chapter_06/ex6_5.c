// ex6_5.c
// 像函数传递一维数组，求最大最小值
#include <stdio.h>
#define N 10

void printarr(int a[], int n);
int maxnum(int a[], int n);
int minnum(int a[], int n);

int main()
{
    int array[N], i, n;
    int max, min;
    do
    {
        printf("Please input n(1<=n<=10):\n");
        scanf("%d", &n);
    } while (n < 1 || n > N);
    printf("Please input %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printarr(array, n);
    max = maxnum(array, n);
    min = minnum(array, n);
    printf("max element: %d\n", max);
    printf("min element: %d\n", min);
    return 0;
}

void printarr(int a[], int n)
{
    int i;
    printf("The elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%5d", a[i]);
    }
    printf("\n");
}

int maxnum(int a[], int n)
{
    int i, max;
    max = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

int minnum(int a[], int n)
{
    int i, min;
    min = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}