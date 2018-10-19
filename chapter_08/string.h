#ifndef STRING_H
#define STRING_H

// 获取字符串的长度
int strlen(const char *str);

// 字符串复制
char* strcpy(char *destination, const char *source);

// 字符串连接
char* strcat(char *destination, const char *source);

// 字符串比较
int strcmp(const char *str1, const char *str2);

// 字符串转大写
char* strupr(char *str);

// 字符串转小写
char* strlwr(char *str);

#endif
