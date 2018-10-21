// ex10_8.c
// 单链表的建立， 打印和释放
#include <stdio.h>
#include <malloc.h>
struct Node
{
	int data;
	struct Node *next;
};
typedef struct Node Node;

Node *Create();
void Print(Node *head);
void Release(Node *head);

int main()
{
	Node *head;
	head = Create();
	Print(head);
	Release(head);
	return 0;
}

Node *Create()
{
	Node *head, *tail, *p;
	int num;
	head = tail = NULL;
	printf("请输入一批数据，并以-9999结尾： \n");
	scanf("%d", &num);
	while(num != -9999)
	{
		p = (Node *) malloc(sizeof(Node));
		p->data = num;
		p->next = NULL;
		if(NULL == head)
			head = p;
		else
			tail->next = p;
		tail = p;
		scanf("%d", &num);
	}
	return head;
}

void Print(Node *head)
{
	Node *p;
	p = head;
	if(NULL == head)
		printf("链表为空!\n");
	else
	{
		printf("链表如下\n");
		while(p != NULL)
		{
			printf("%d  ", p->data);
			p = p->next;
		}
	}
	printf("\n");
}

void Release(Node *head)
{
	Node *p1, *p2;
	p1 = head;
	while(p1 != NULL)
	{
		p2 = p1;
		p1 = p1->next;
		free(p2);
	}
	printf("链表释放内存成功！\n");
}
	
