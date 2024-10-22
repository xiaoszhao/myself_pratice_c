//打印一个数的每一位

#include<stdio.h>

void Printf(long n)
{
	if (n / 10 == 0)
	{
		printf("%d  ",n);
	}
	else
	{

		
		Printf(n / 10);
		printf("%d  ", n % 10);
	}
}

int main()
{
	int n = 123456;
	Printf(n);
	return 0;
}