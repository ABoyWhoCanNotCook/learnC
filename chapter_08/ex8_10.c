// ex8_10.c
// 单词本管理，单词本有新增单词，删除单词，查找单词，
// 显示单词等功能
#include <stdio.h>
#include "string.h"
#define SIZE 100

int addword(char p[][20], int n);
int findword(char p[][20], int n, char *f);
int delword(char p[][20], int n, char *f);
void display(char p[][20], int n);
void menu();
int main()
{
	char myword[100][20];
	char word[20];
	char choice;
	int count = 0;
	int pos = -1;
	do
	{
		menu();
		printf("Please input your choice: ");
		scanf("%c", &choice);
		getchar();
		switch(choice)
		{
			case '1':
				count = addword(myword, count);
				break;
			case '2':
				printf("Please input what you are find: ");
				gets(word);
				pos = findword(myword, count, word);
				if(pos != -1)
					printf("It's the %d word\n", pos + 1);
				else
					printf("It's not in my word list!\n");
				break;
			case '3':
				printf("Please input what you want to delete:");
				gets(word);
				count = delword(myword, count, word);
				break;
			case '4':
				display(myword, count);
				break;
			case '0':
				choice = 0;
				break;
			default:
				printf("Error input, please input your choice again!\n");
		}
	}while(choice);
	return 0;
}

void menu()
{
	printf("\t\t---- 1. 增加单词 ----\n");
	printf("\t\t---- 2. 查询单词 ----\n");
	printf("\t\t---- 3. 删除单词 ----\n");
	printf("\t\t---- 4. 显示单词 ----\n");
	printf("\t\t---- 0. 退  出 ----\n");
}

int addword(char p[][20], int n)
{
	int i, j;
	int pos = -1;
	char flag = 'y';
	char tmp[20];
	while(flag == 'y' || flag == 'Y')
	{
		if(n == SIZE)
		{
			printf("Word list is full\n");
			break;
		}
		else
		{
			printf("Input your word:");
			gets(tmp);
			pos = findword(p, n, tmp);
			if(pos != -1)
			{
				printf("the word is exit!\n");
				break;
			}
			else
			{
				if(n)
				{
					for(i = 0; i < n && strcmp(tmp, p[i]) > 0; i++)
						;
					for(j = n; j > i; j--)
						strcpy(p[j], p[j - 1]);
					strcpy(p[i], tmp);
					n++;
				}
				else
				{
					strcpy(p[0], tmp);
					n = 1;
				}
			}
			printf("Another word?(y/n):");
			scanf("%c", &flag);
			getchar();
		}
	}
	return n;
}

int findword(char p[][20], int n, char *f)
{
	int i;
	int pos = -1;
	for(i = 0; i < n; i++)
	{
		if(!strcmp(p[i], f))
		{
			pos = i;
			break;
		}
	}
	return pos;
}

int delword(char p[][20], int n, char *f)
{
	int i;
	int pos = -1;
	pos = findword(p, n, f);
	if(pos == -1)
		printf("It's not in myword list!\n");
	else
	{
		for(i = pos; i < n - 1; i++)
		{
			strcpy(p[i], p[i + 1]);
		}
		n = n - 1;
	}
	return n;
}

void display(char p[][20], int n)
{
	int i;
	if(n)
	{
		for(i = 0; i < n; i++)
			puts(p[i]);
	}
	else
		printf("There is no word in myword list!\n");
}
