// Ex8_1.c
// 字符数组和字符串的区别
#include <stdio.h>
int main()
{
	int i;
	char ch[12] = {'H', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l',
		'd', '!'};
	for(i = 0; i < 12; i++)
		printf("%c", ch[i]);

	return 0;
}
