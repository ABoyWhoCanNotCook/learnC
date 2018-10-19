// ex8_3.c
// 利用二维字符数组读入，输出多个字符串
#include <stdio.h>
int main()
{
	char a[5][7];
	int i;
	for(i = 0; i < 5; i++)
		gets(a[i]);
	for(i = 0; i < 5; i++)
		puts(a[i]);
	return 0;
}
