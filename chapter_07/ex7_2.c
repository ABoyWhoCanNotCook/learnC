// ex7_2.c
// 定义整形变量和指向它的指针变量，输出它们的起始地址和值
#include <stdio.h>
int main()
{
    int count = 10;
    int *p = &count;
    printf("\t address\t\t value\n");
    printf("count:\t%10p\t%10d\n", &count, count);
    printf(" p:\t%10p\t%10p\n", &p, p);
    printf(" \nchange count: \n");
    count = 20;
    printf("p=%10p\t*p=%10d\n ", p, *p);
    return 0;
}