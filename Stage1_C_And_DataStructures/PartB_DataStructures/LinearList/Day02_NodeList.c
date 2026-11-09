#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef int ElemType;
typedef struct node
{
	ElemType data;
	struct node* next;
}Node;

//初始化（带头结点的单链表）
Node* initList()
{
	Node* head = (Node*)malloc(sizeof(Node));
	if (head == NULL)
	{
		return NULL;
	}
	head->data = 0;
	head->next = NULL;
	return head;
}

//头插法
void insertHead(Node* L, ElemType e)
{
	Node* p = (Node*)malloc(sizeof(Node));
	if (p == NULL)
	{
		return;
	}
	p->data = e;
	p->next = L->next;
	L->next = p;
}

//遍历
void listNode(Node* L)
{
	if (L == NULL)
	{
		return;
	}
	Node* p = L->next;
	while (p != NULL)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}

//尾插法：返回尾结点。
//注意从 L 开始找：空链表时返回的是头结点，
//这样 insertTail(L, e) 正好把元素插到第一个位置，也不会解引用空指针。
Node* get_tail(Node* L)
{
	if (L == NULL)
	{
		return NULL;
	}
	Node* p = L;
	while (p->next != NULL)
	{
		p = p->next;
	}
	return p;
}

Node* insertTail(Node* tail, ElemType e)
{
	if (tail == NULL)
	{
		return NULL;
	}
	Node* p = (Node*)malloc(sizeof(Node));
	if (p == NULL)
	{
		return tail;
	}
	p->data = e;
	p->next = NULL;
	tail->next = p;
	return p;
}

//在指定位置插入数据（pos 从 1 开始，不包含头结点）
int insertNode(Node* L, int pos, ElemType e)
{
	if (L == NULL || pos < 1)
	{
		return 0;
	}
	Node* p = L;
	int i = 0;
	while (i < pos - 1)
	{
		p = p->next;
		i++;
		if (p == NULL)
		{
			return 0;
		}
	}
	Node* q = (Node*)malloc(sizeof(Node));
	if (q == NULL)
	{
		return 0;
	}
	q->data = e;
	q->next = p->next;
	p->next = q;
	return 1;
}

//在指定位置删除数据（pos 从 1 开始，不包含头结点）
int deleteNode(Node* L, int pos)
{
	if (L == NULL || pos < 1)
	{
		return 0;
	}
	Node* p = L;
	int i = 0;
	while (i < pos - 1)
	{
		p = p->next;
		i++;
		if (p == NULL)
		{
			return 0;
		}
	}

	if (p->next == NULL)
	{
		return 0;
	}

	Node* q = p->next;
	p->next = q->next;
	free(q);
	return 1;
}

//获取链表长度（只数数据结点，不含头结点）
int listLength(Node* L)
{
	if (L == NULL)
	{
		return 0;
	}
	Node* p = L->next;
	int len = 0;
	while (p != NULL)
	{
		p = p->next;
		len++;
	}
	return len;
}

//释放链表：传头指针的地址，释放完把调用者的指针置空，避免野指针
void freeList(Node** L)
{
	if (L == NULL || *L == NULL)
	{
		return;
	}
	Node* p = *L;
	while (p != NULL)
	{
		Node* q = p->next;
		free(p);
		p = q;
	}
	*L = NULL;
}

int main()
{
	Node* list = initList();
	insertHead(list, 1);
	insertHead(list, 2);
	listNode(list);
	Node* tail = get_tail(list);
	tail = insertTail(tail, 3);
	tail = insertTail(tail, 4);
	listNode(list);
	insertNode(list, 2, 15);
	listNode(list);
	deleteNode(list, 2);
	listNode(list);
	printf("%d\n", listLength(list));
	freeList(&list);
	printf("list == NULL after free: %s\n", list == NULL ? "yes" : "no");
	return 0;
}
