// ex10_12.c
// 联合类型的使用
#include <stdio.h>
union Score
{
	int i;
	double d;
	char c;
};
typedef union Score Score;

int main()
{
	Score sc;
	printf("sizeof(Score) is %d\n", sizeof(Score));
	printf("sizeof(sc) %d\n", sizeof(sc));
	printf("sizeof(sc.i)=%d, sizeof(sc.d)=%d, sizeof(sc.c)=%d\n", sizeof(sc.i),
			sizeof(sc.d), sizeof(sc.c));
	sc.i = 88;
	printf("sc.i=%d, sc.d=%f, sc.c=%c\n", sc.i, sc.d, sc.c);
	sc.d = 78.5;
	printf("sc.i=%d, sc.d=%f, sc.c=%c\n", sc.i, sc.d, sc.c);
	sc.c = 'C';
	printf("sc.i=%d, sc.d=%f, sc.c=%c\n", sc.i, sc.d, sc.c);
	return 0;
}
