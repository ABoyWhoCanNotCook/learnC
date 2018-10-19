// string.c
// 重写string.h

// 获取字符串的长度
int strlen(const char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}

// 字符串复制
char* strcpy(char *destination, const char *source)
{
	int i = 0;
	while(source[i] != '\0')
		destination[i] = source[i++];
	destination[i] = '\0';
	return destination;
}

// 字符串连接
char* strcat(char *destination, const char *source)
{
	int i = 0;
	while(*(destination + i) != '\0')
		i++;
	while(*source != '\0')
		*(destination + i++) = *source++;
	*(destination + i) = '\0';
	return destination;
}

// 字符串比较
int strcmp(const char *str1, const char *str2)
{
	int i = 0;
	while(str1[i] != '\0' && str2[i] != '\0')
	{
		if(str1[i] != str2[i])
			break;
		i++;
	}
	if(str1[i] > str2[i])
		return 1;
	else if(str1[i] < str2[i])
		return -1;
	else
		return 0;
}

// 字符串转大写
char* strupr(char *str)
{
	char *p = str;
	while(*p)
	{
		if(*p >= 'a' && *p <= 'z')
			*p -= 32;
		p++;
	}
	return str;
}

// 字符串转小写
char* strlwr(char *str)
{
	char *p = str;
	while(*p)
	{
		if(*p >= 'A' && *p <= 'Z')
			*p += 32;
		p++;
	}
	return str;
}
