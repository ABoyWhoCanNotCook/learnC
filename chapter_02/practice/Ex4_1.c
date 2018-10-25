// Ex4_1.c
// 使用sizeof函数输出数据类型所占用的内存空间大小
#include <stdio.h>

int main()
{
	printf("char=%d\n", sizeof(char));
	printf("unsigned char=%d\n", sizeof(unsigned char));
	printf("short=%d\n", sizeof(short));
	printf("unsigned short=%d\n", sizeof(unsigned short));
	printf("int=%d\n", sizeof(int));
	printf("unsigned int=%d\n", sizeof(unsigned int));
	printf("long=%d\n", sizeof(long));
	printf("unsigned long=%d\n", sizeof(unsigned long));
	printf("float=%d\n", sizeof(float));
	printf("double=%d\n", sizeof(double));
	printf("long double=%d\n", sizeof(long double));
	return 0;
}
