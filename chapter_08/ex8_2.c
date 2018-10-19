// ex8_2.c
// 统计输入的文字的字母，数字，空格以及其他字符的个数
#include <stdio.h>

int main()
{
	int character = 0, digit = 0, space = 0, other = 0;
	char *p = "Hello!", s[20];
	puts(p);
	p = s;
	printf("input string:\n");
	gets(p);
	while(*p != '\0')
	{
		if(('A' <= *p && *p <= 'Z') || ('a' <= *p && *p <= 'z'))
			++character;
		else if(*p == ' ')
			++space;
		else if(*p >= '0' && *p <= '9')
			++digit;
		else
			++other;
		p++;
	}
	printf("character: %d\nspace: %d\ndigit: %d\nother: %d\n", character,
			space, digit, other);
	return 0;
}
