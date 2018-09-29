// ex4_5.c// 计算月份的天数， 输入年份和月份，输出该月的天数
#include <stdio.h>

int main()
{
	int year, month, daySum;
	printf("Enter the year and the month: ");
	scanf("%d%d", &year, &month);
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			daySum = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			daySum = 30;
			break;
		case 2:
			if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
			{
				daySum = 29;
			}
			else
			{
				daySum = 28;
			}
	}
	printf("%d.%d has %d days.\n", year, month, daySum);
	return 0;
}