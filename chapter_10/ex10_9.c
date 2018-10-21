// ex10_9.c
// 从单链表中删除数据

#include <stdio.h>
#include <malloc.h>
struct Node
{
	int data;
	struct Node *next;
};
typedef struct Node Node;

Node *Create();
Node *Delete(Node *head, int num);
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
	head = Delete(head, num);
	printf("删除%d之后的单链表：\n", num);
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

Node *Delete(Node *head, int num)
{
	Node *p1, *p2;
	if(NULL == head)
	{
		printf("链表为空！\n");
		return head;
	}
	p1 = head;
	while(p1->next && p1->data != num)
	{
		p2 = p1;
		p1 = p1->next;
	}
	if(p1->data == num)
	{
		if(head == p1)
			head = p1->next;
		else
			p2->next = p1->next;
		free(p1);
		printf("删除成功！\n");
	}
	else
		printf("链表中无此数据！\n");
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
