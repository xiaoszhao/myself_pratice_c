#include<stdio.h>

int DigitSum(long n)
{
	int sum=0;
	if (n / 10 ==0)
	{
		return n%10;
	}
	else
	{
		return	DigitSum(n / 10)+n%10;
	}
	return sum;
}



int main()
{
	int sum=0;
	long n = 0;
	scanf_s("%ld", &n);
	sum = DigitSum(n);
	printf("%d", sum);
	return 0;
}

