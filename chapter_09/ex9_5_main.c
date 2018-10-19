// ex9_6_main.c
// 多文件处理数组问题，实现对一维数组的输入、输出、统计、查找
#include <stdio.h>
#include "ex9_5_arrayio.h"
#include "ex9_5_statistic.h"
#include "ex9_5_search.h"

int n = 0;
static void menu();
int main()
{
	int a[10];
	int i;
	int max, min, index;
	do
	{
		menu();
		printf("Please input your choice: ");
		scanf("%d", &i);
		switch(i)
		{
			case 1:
				input(a);
				break;
			case 2:
				output(a);
				break;
			case 3:
				max = find_max(a);
				printf("Max=%d\n", max);
				break;
			case 4:
				min = find_min(a);
				printf("Min=%d\n", min);
				break;
			case 5:
				index = search(a);
				printf("Index=%d\n", index);
				break;
			case 0:
				break;
			default:
				printf("Error input, please input your choice again!\n");
		}
	}while(i);
	return 0;
}

void menu()
{
	printf("\t---- 1. 输入数据 ----\n");
	printf("\t---- 2. 输出数据 ----\n");
	printf("\t---- 3. 求最大值 ----\n");
	printf("\t---- 4. 求最小值 ----\n");
	printf("\t---- 5. 查找数据 ----\n");
	printf("\t---- 0. 退    出 ----\n");
}
