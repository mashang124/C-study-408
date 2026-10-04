#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
int main()
{
	int a[] = { 22,45,67,34,56 };
	int len = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (a[i] > a[j])
			{
				int c = a[i];
				a[i] = a[j];
				a[j] = c;
			}
		}
	}
	for (int i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
*/

/*
int main()
{
	int a[] = { 22,45,67,34,56 };
	int len = sizeof(a) / sizeof(a[0]);
	for (int i = len-1; i >0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[j]>a[j+1])
			{
				int c = a[j];
				a[j] = a[j+1];
				a[j+1] = c;
			}
		}
	}
	for (int i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
*/

int main()
{
	int a[][3] = { 1,2,3,4,5,6 };
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		for (int j = 0; j < sizeof(a[0]) / sizeof(a[0][0]); j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}