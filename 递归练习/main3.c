//strlen的模拟（递归实现）逆序一个字符串
#include <stdio.h>
//void reverse_string(char arr[])
//{
//	int l = 0;
//	int r = strlen(arr) - 1;
//
//	while (l < r)
//	{
//		char tmp = arr[l];
//		arr[l] = arr[r];
//		arr[r] = tmp;
//		l++;
//		r--;
//	}
//	
//}
int Strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
void reverse_string(char* str)
{
	int len = Strlen(str);
	char tmp = *str;
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (Strlen(str + 1) >= 2)
		reverse_string(str + 1);
	*(str + len - 1) = tmp;

}

int main()
{

	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}