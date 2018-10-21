// ex10_14.c
// 枚举类型的使用
#include <stdio.h>
enum Weekday{sun = 7, mon = 1, tue, wed, thu, fri, sat};
typedef enum Weekday Weekday;

int main()
{
	Weekday day[4] = {mon};
	int i;
	day[1] = 2;
	day[2] = 10;
	for(i = 0; i < 4; i++)
	{
		printf("day[%d]: %d  ", i, day[i]);
		switch(day[i])
		{
			case sun:
				printf("Sunday\n");
				break;
			case mon:
				printf("Monday\n");
				break;
			case tue:
				printf("tuesday\n");
				break;
			case wed:
				printf("Wednesday\n");
				break;
			case thu:
				printf("Thursday\n");
				break;
			case fri:
				printf("Friday\n");
				break;
			case sat:
				printf("Saturday\n");
				break;
			default:
				printf("Wrong!\n");
		}
	}
	return 0;
}
