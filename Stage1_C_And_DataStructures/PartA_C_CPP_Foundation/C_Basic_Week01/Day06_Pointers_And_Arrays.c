#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
int main()
{
	int a = 1;
	int b = 2;
	const int* p = &a;
	p = &b;
	return 0;
}

int main()
{
	int a = 1;
	int b = 2;
	int const * p = &a;
	*p = 3;
	return 0;
}


int main()
{
	int a[] = { 1,2,3,4 };
	int len = sizeof(a) / sizeof(a[0]);
	int* p = a;
	for (int n = 0; n < len; n++)
	{
		printf("%d ", a[n]);
		printf("%d ", *(p + n));
	}
	return 0;
}
*/

/*
void fun(int* p , int len)
{
	for (int n = 0; n < len; n++)
	{
		printf("%d ", *(p + n));
	}
}

int main()
{
	int a[] = { 1,2,3,4 };
	int len = sizeof(a) / sizeof(a[0]);
	fun(a, len);
	return 0;
}
*/

int main()
{
	char st[] = "hello";
	char* p = st;
	printf("%s", st);
	printf("%s", p);
	printf("%c\n", *p);

	p++;
	printf("%s", p);
	printf("%c\n", *p);

	*p = 'o';
	printf("%s\n", p);

	//str="abc";
	p = "abc";
	printf("%s\n", p);

	strcpy(st, "abc");
	printf("%s", st);

	return 0;
}

