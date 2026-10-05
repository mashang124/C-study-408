#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int a, int b)
{
	int t = a;
	a = b;
	b = t;
	printf("%d %d\n", a, b);
}

void swap2(int *a,int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}


int main()
{
	int a = 4;
	int b = 7;
	swap(a, b);
	printf("%d %d\n", a, b);
	swap2(&a, &b);
	printf("%d %d", a, b);
	return 0;
}