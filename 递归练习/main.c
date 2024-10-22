//编写一个函数实现n的k次方，使用递归实现。
#include <stdio.h>

int Power(int n,int k)
{
	if (k ==1)
	{
		return n;
	}
	else
	{
		return n * Power(n, k - 1);
	}
}



int main()
{
	int n = 0;
	int k = 0;
	scanf_s("%d%d", &n, &k);
	int sum=Power(n, k);
	printf("%d\n", sum);
	return 0;
}