// Ex3_2.c
// 从键盘读入一个百分制成绩x(0<=x<=100),将其转换成等级制,
// 90~100 -> A
// 80~90 -> B
// 70~80 -> C
// 60~70 -> D
// 0~60 -> E
#include <stdio.h>

int main()
{
	int sorce;
	printf("input sorce: ");
	scanf("%d", &sorce);
	sorce = sorce / 10;
	switch(sorce)
	{
		case 10:
		case 9:
			printf("A\n");
			break;
		case 8:
			printf("B\n");
			break;
		case 7:
			printf("C\n");
			break;
		case 6:
			printf("D\n");
			break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			printf("E\n");
			break;
		default:
			printf("input error\n");
	}
	return 0;
}
