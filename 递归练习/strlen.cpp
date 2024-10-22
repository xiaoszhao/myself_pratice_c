#include <stdio.h>
//strlen的模拟（递归实现）
int Strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + Strlen(str + 1);
	}
	else
	{
		return 0;
	}
}

int main()
{
	char arr[] = "abcdef";
	int n = Strlen(arr);
	printf("%d", n);

	return 0;
}