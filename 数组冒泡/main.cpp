#include <stdio.h>
//排序：
void Sort(int arr[],int sz)
{
	/*int sz = sizeof(arr) / sizeof(arr[0]);*/
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序,决定了一趟排序进行了多少对比较
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	//整形数据
	int arr[] = { 3,1,4,2,9,8,6,5,7,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//写一个函数对数组进行排序
	Sort(arr,sz);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}