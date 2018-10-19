// ex8_7.c
// 输入密码，检查输入的密码是否正确
#include <stdio.h>

int check(char *ps)
{
	char passwd[] = "PLWRV";
	int i = 1;
	int flag = 1;
	for(i = 0; *ps != '\0' && flag; ps++)
	{
		if(*ps >= 'a' && *ps <= 'z')
			*ps = *ps -32+2;
		if(*ps != passwd[i])
			flag = 0;
		else
			i++;
	}
	return flag;
}

int main()
{
	char str[10];
	int i = 0;
	printf("Input your password:\n");
	while((str[i] = getchar()) != '#')
		i++;
	str[i] = '\0';
	if(check(str))
		printf("Pass!\n");
	else
		printf("Error!\n\a\a\a");
	return 0;
}
