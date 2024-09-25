#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a, b = 0;
	scanf("%d%d", &a, &b);
	if (a > b)
		printf("%d\n", a);
	else if (b > a)
		printf("%d\n", b);
	else
		printf("a=b\n");
	return 0;
}