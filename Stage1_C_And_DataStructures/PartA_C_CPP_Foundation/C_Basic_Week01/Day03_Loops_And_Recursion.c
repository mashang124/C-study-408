#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
int main()
{
	int a;
	scanf("%d", &a);
	while(a>0)
	{
		printf("%d", a % 10);
		a = a / 10;
	}
	return 0;
}
*/

/*int main()
{
	int a;
	for (int b = 0; b < 9; b++)
	{
		for (int c = 0; c < 9; c++)
		{
			a = b * 1000 + b * 100 + c * 10 + c;
			if (b != c)
			{
				for (int d = 1; d*d<=a; d++)
				{
					if (d*d==a)
					{
						printf(" % d", a);
					}
				}
			}
		}
	}
	return 0;
}
*/

int fa(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		return fa(n - 1) + fa(n - 2);
	}
}

int main()
{
	printf("%d", fa(5));
}