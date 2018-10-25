// Ex3_1.c
// 输入x的值，输出符号函数sign(x)的值：
// x<0 -> sign(x)=-1
// x=0 -> sign(x)=0
// x>0 -> sign(x)=1
#include <stdio.h>

int main()
{
	int x = 0;
	printf("input x: ");
	scanf("%d", &x);
	if(x < 0)
		printf("sign(%d)=-1\n", x);
	else if(x == 0)
		printf("sign(%d)=0\n", x);
	else
		printf("sign(%d)=1\n", x);
	return 0;
}
