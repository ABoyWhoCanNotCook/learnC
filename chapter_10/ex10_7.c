// ex10_7.c
// 链表的访问
#include <stdio.h>
struct Node
{
	int data;
	struct Node *next;
};

int main()
{
	struct Node n1, n2, n3, *head, *p;
	head = &n1;
	n1.data = 3;
	n1.next = &n2;
	n2.data = 4;
	n2.next = &n3;
	n3.data = 6;
	n3.next = 0;
	p = head;
	while(p != '\0')
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
	return 0;
}
