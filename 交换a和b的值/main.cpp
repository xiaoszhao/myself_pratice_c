#include <stdio.h>//由于实参和形参的不同，地址也不同，所以打印出来并没有交换。
//void Swap1(int x, int y)
//{
//    int c = 0;
//    x = c;
//    x = y;
//    y = c;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf_s("%d %d", &a, &b);
//    printf("交换前 ：a= %d b= %d\n", a, b);
//    Swap1(a, b);
//    printf("交换后 ：a= %d b= %d\n", a, b);
//    return 0;
//}

//int main() //除了直接改变a的值，还可以通过指针变量的方式来改变a的值
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d", a);
//	return 0;
//}
void Swap2(int* pa, int* pb)
{
    int tmp = *pa; //tmp=a;
    *pa = *pb;
    *pb = tmp;     //b=tmp; 
}
int main()
{
    int a = 0;
    int b = 0;
    scanf_s("%d %d", &a, &b);
    printf("交换前 ：a= %d b= %d\n", a, b);
    Swap2(&a, &b);
    printf("交换后 ：a= %d b= %d\n", a, b);
    return 0;
}