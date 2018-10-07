// ex7_13.c
// 选择排序法
#include <stdio.h>

void Input(int *pa, int n)
{
    int i;
    printf("Please input %d elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", pa + i);
}

void sort(int *pa, int n)
{
    int index, i, k, temp;
    for (k = 0; k < n - 1; k++)
    {
        index = k;
        for (i = k + 1; i < n; i++)
        {
            if (pa[i] < pa[index])
                index = i;
        }
        if (index != k)
        {
            temp = pa[index];
            pa[index] = pa[k];
            pa[k] = temp;
        }
    }
}

void Output(const int *pa, int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%5d", *(pa + i));
    printf("\n");
}

int main()
{
    int a[10], n;
    do
    {
        printf("Please input n(1<=n<=10):\n");
        scanf("%d", &n);
    } while (n < 1 || n > 10);
    Input(a, n);
    printf("The original array is:\n");
    Output(a, n);
    sort(a, n);
    printf("The sorted array is:\n");
    Output(a, n);
    return 0;
}