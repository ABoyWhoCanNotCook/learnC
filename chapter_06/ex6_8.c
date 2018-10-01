// ex6_8.c
// 插入数组元素
#include <stdio.h>
#define SIZE 7

void print(int a[], int n);
void insert(int a[], int n, int x);

int main()
{
    int array[SIZE] = {12, 23, 34, 45, 56, 67};
    int x;
    print(array, SIZE - 1);
    printf("Please input x be inserted:\n");
    scanf("%d", &x);
    insert(array, SIZE - 1, x);
    print(array, SIZE);
    return 0;
}

void print(int a[], int n)
{
    int i;
    printf("The array is:\n");
    for (i = 0; i < n; i++)
        printf("%5d", a[i]);
    printf("\n");
}

void insert(int a[], int n, int x)
{
    int i, j;
    for (i = 0; i < n && a[i] < x; i++)
        ;
    for (j = n - 1; j >= i; j--)
        a[j + 1] = a[j];
    a[i] = x;
}