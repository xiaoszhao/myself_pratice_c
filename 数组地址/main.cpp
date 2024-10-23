#include <stdio.h>
//一维数组
int main()
{
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("&arr[%d] = %p\n ", i,&arr[i]);//访问元素，里面可以是变量,打印地址
    }
    return 0;
}