#include <stdio.h>//����ʵ�κ��βεĲ�ͬ����ַҲ��ͬ�����Դ�ӡ������û�н�����
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
//    printf("����ǰ ��a= %d b= %d\n", a, b);
//    Swap1(a, b);
//    printf("������ ��a= %d b= %d\n", a, b);
//    return 0;
//}

//int main() //����ֱ�Ӹı�a��ֵ��������ͨ��ָ������ķ�ʽ���ı�a��ֵ
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
    printf("����ǰ ��a= %d b= %d\n", a, b);
    Swap2(&a, &b);
    printf("������ ��a= %d b= %d\n", a, b);
    return 0;
}