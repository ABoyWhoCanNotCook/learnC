// ex10_10.c
// 链表的插入操作

#include <stdio.h>
#include <malloc.h>
struct Node
{
	int data;
	struct Node *next;
};
typedef struct Node Node;

Node *Create();
Node *Insert(Node *head, int num);
void Print(Node *head);
void Release(Node *head);

int main()
{
	Node *head;
	int num;
	head = Create();
	Print(head);
	printf("请输入要删除的数：\n");
	scanf("%d", &num);
	head = Insert(head, num);
	printf("插入%d之后的单链表：\n", num);
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

Node *Insert(Node *head, int num)
{
	Node *p, *p1, *p2;
	p = (Node *)malloc(sizeof(Node));
	p->data = num;
	p->next = NULL;

	p1 = head;
	while(p1 && p->data > p1->data)
	{
		p2 = p1;
		p1 = p1->next;
	}
	if(p1 == head)
		head = p;
	else
		p2->next = p;
	p->next = p1;
	printf("数据插入成功！\n");
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
