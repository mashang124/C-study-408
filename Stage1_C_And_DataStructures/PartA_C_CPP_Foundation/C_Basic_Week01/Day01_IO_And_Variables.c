#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 180;
	float b = 80.5f;
	double c = 100;
	const int d = 7;

	printf("身高=%d\n", a);
	printf("体重=%f\n", b);
	printf("分数=%lf\n", c);
	printf("一周%d天\n", d);
	printf("%zu\n", sizeof(b));

	return 0;
}