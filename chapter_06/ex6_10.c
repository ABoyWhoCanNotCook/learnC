// ex6_10.c
// 冒泡排序
#include <stdio.h>
#define SIZE 10

void print(int a[], int n)
{
    int i;
    printf("The array is:\n");
    for (i = 0; i < n; i++)
        printf("%5d", a[i]);
    printf("\n");
}

void BubbleSort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = n - 1; j > i; j--)
        {
            if (a[j] < a[j - 1])
            {
                temp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{
    int array[SIZE], i = 0, n;
    do
    {
        printf("Please input n(1<=n<=%d):\n", SIZE);
        scanf("%d", &n);
    } while (n < 1 || n > SIZE);
    printf("Please input %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);
    BubbleSort(array, n);
    print(array, n);
    return 0;
}