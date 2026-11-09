#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXSIZE 100

//定义
typedef int ElemType;
typedef struct
{
	ElemType* data;
	int len;
}SeqList;

//初始化
SeqList* initList()
{
	SeqList* L = (SeqList*)malloc(sizeof(SeqList));
	L->data = (ElemType*)malloc(sizeof(ElemType) * MAXSIZE);
	L->len = 0;
	return L;
}

//尾插
int appendElem(SeqList* L, ElemType e)
{
	if (L->len >= MAXSIZE)
	{
		printf("fail\n");
		return 0;
	}
	L->data[L->len] = e;
	L->len++;
	return 1;
}

//list
void listElem(SeqList* L)
{
	for (int i = 0; i < L->len; i++)
	{
		printf("%d ", L->data[i]);
	}
	printf("\n");
}

//指定位置插(不包含尾插)
int insertElem(SeqList* L, int pos, ElemType e)
{
	if (L->len >= MAXSIZE)
	{
		printf("表满了\n");
		return 0;
	}
	if (pos<1 || pos>L->len)
	{
		printf("位置错误\n");
		return 0;
	}
	//if (pos >= 1 && pos <= L->len)
	//{
	for (int i = L->len - 1; i >= pos - 1; i--)
	{
		L->data[i + 1] = L->data[i];
	}
	L->data[pos - 1] = e;
	L->len++;
	//}
	return 1;
}

//删除数据
int deleteElem(SeqList* L, int pos, ElemType* e)
{
	if (L->len == 0)
	{
		printf("空表\n");
		return 0;
	}
	if (pos<1 || pos>L->len)
	{
		printf("位置错误\n");
		return 0;
	}
	*e = L->data[pos - 1];
	//if (pos >= 1 || pos <= L->len)
	//{
	for (int i = pos; i < L->len; i++)
	{
		L->data[i - 1] = L->data[i];
	}
	L->len--;
	return 1;
	//}
}

//查找数
int findElem(SeqList* L, ElemType e, ElemType* b)
{
	if (L->len == 0)
	{
		printf("空列表\n");
		return 0;
	}
	for (int i = 0; i < L->len; i++)
	{
		if (L->data[i] == e)
		{
			*b = i + 1;
			return 1;
		}
	}
	printf("没找到\n");
	return 0;
}


int main()
{
	SeqList* list = initList();
	printf("占用%zu字节\n", sizeof(list->data));
	appendElem(list, 1);
	appendElem(list, 2);
	appendElem(list, 3);
	appendElem(list, 4);
	appendElem(list, 5);
	listElem(list);
	insertElem(list, 2, 22);
	listElem(list);
	ElemType a;
	deleteElem(list, 2, &a);
	listElem(list);
	printf("删的%d\n", a);
	ElemType b;
	findElem(list, 2, &b);
	printf("2在第%d位\n", b);
	return 0;
}
