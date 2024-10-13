#include <stdio.h>
#include <string.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int Size = sizeof(arr) / sizeof(int);
	printf("����Ϊ%d\n", Size);
	int head = 0;
	int tail = Size;
	int num = 0;
	scanf_s("%d", &num);
	if (num <= 0 || num > Size)
	{
		printf("û���ҵ���Ҫ�����֡�\n");
		return 0;
	}
	while (head<tail)
	{
		int middle = head + (tail - head) / 2;
		if (arr[middle] < num)
		{
			head = middle + 1;
		}
		else if(arr[middle]>num)
		{
			tail = middle - 1;
		}
		else if (arr[middle] == num)
		{
			printf("�ҵ��ˣ������±�Ϊ��%d", middle);
			break;
		}
	}
	return 0;
}