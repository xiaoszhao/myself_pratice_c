//#define _CRT_SECURE_NO_WARNINGS
//
//
//#include<stdio.h>
//int Add(int x,int y) Add���������ӣ��Զ��庯��
//{
//	int z = x +y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 900;
//		int num2 = 700;
//		int sum = 0;
//		sum = Add(num1, num2);
//		printf("sum=%d\n", sum);
//	return 0;
//}


//#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS       ���������
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf_s("%d%d", &num1, &num2);    ��ӵ�ַ������ӿ�λ��������������
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//		return 0;
//
//}

//#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//int Add(int a, int b, int c)
//{
//	int e = a + b * c;
//	return e;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int num3 = 4;
//	int num4 = 40;
//	int num5 = 10;
//	int num6 = 10;
//	int sum=Add(num1, num2, num3);
//	int num =Add(num4,num5,num6);       #num������������ԣ����Ҳ�֪����������Ժ��ٿ�
//	printf("sum=%d\n",sum);
//	printf("num=%d\n,num");
//	return 0;
//
//}


//#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	printf("��ð�!\n");
//		return 0;
//}

//#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };�±�0��Ӧ��Ϊ1      ��N������Ӧ���±�ΪN-1
//	int i = 0;
//	while (i < 10)      while(**)��Ҫ���κ���ĸ���㣬���ܵ��³��ֵĲ�����Ҫ�Ķ������ߵ��¿հ�
//	{printf("%d", arr[i]);    ���Σ�arr����±�0��ʼ��Ӧ��Ԫ�����˴�ӡ����
//	i++; }
//	return 0;
//
//
//}

//#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };  #�޷��оٳ���1-10�����֣���ָ����ǿհ�
//	for (i=0,i < 10;i++;)
//	
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	
//	return 0;
//}

//#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//int input = 0;
//int inset = 0;
//int main()
//{
//	printf("��ð����Һܸ��������㣡\n");
//	printf("��ΪʲôҪ�����(1��>:");
//	scanf_s("%d", &input);
//	if (input == 1)
//		printf("���㣬����������Ҳ����Ʋ����㣬���ܰ�����ô����(1)>:");
//  scanf_s("%d",&inset);            ��ַ���붼�У�Ҫ��Ȼ��һ�������޷�ִ�У�����νһ����һ����
//	if (inset == 1)
//		printf("�ҿ��Լ���̫����\n");   
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//����������,��Ŀ��������a>b����ģ�ȡa �ٵģ�ȡb
//	if (a > b)
//		printf("%d\n", max);
//	else
//		printf("%d\n", max);
//	return 0;
//}

//#define _CRT_FECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int sum = 10;
//	printf("%d\n", &sum);//��ӡ��sum�ĵ�ַ
//	double a = 3.14;
//	double* b = &a;
//	*b = 5.3;   *�����ò�����/��ӷ��ʲ�����
//	printf("%lf\n", a);//��ӡdouble��lf
// printf("%ld\n",*sum);
//	return 0;
//}

//#include<stdio.h>
//struct People 
//{
//	char name[7];
//	short life;
//	char school[19];
//	char kid[28];//����
//	char weapon[7];//����
//	char skill[13];
//};
//int main()
//
//{   
//	int output = 0;
//	int input = 0;
//	int sumput = 0;
//	int gatput = 0;
//	int aput = 0;
//	printf("Ҫ��ʼ��Ϸ��?(1)>:" );
//	scanf_s("%d", &input);
//	if (input == 1)
//		printf("����Ϊ������������,������1���������䡣(1)>:%d\n");
//	scanf_s("%d", &output);
//	struct People b1 = { "����",99,"��������ѧУ","����������������ֵ","����","��֮һ��" }; //����ȫ����Ӣ��д�����ģ�Ҫ��Ȼ���ܻ����в�������������Ҳ����ʹ��Ӣ��
//	printf("����:%s\n",b1.name);
//	printf("����:%d\n", b1.life);
//	printf("ѧУ:%s\n", b1.school);
//	printf("����:%s\n", b1.kid);
//	printf("����:%s\n", b1.weapon);
//	printf("����:%s\n", b1.skill);
//	printf("���Ƿ�ʼ�Ĳ�������1��ʼ�Ĳ�...��1)>:");
//	scanf_s("%d", &sumput);
//	b1.life = 88;
//	printf("���ڶĲ�������ܳ����½�������ֵ��Ϊ%d��\n", b1.life);
//	{int a;
//begin: scanf_s("%d", &a);
//	printf("���Ƿ�Ҫ�����Ĳ�������1�����Ĳ��������Ӽ���...(1/2)>:");
//	scanf_s("%d", &gatput);
//	if (gatput == 1)
//		printf("��ʧ���ˣ�Ƿ��һƨ��ծ����������,����1����ѡ��...��1��>:");
//	else
//		printf("�˷��˶Ĳ����Ӵ����Ϲ�����·��������һ����ҵ��%d\n");
//	scanf_s("%d", &aput);//��֪����δ�184�з��ص�179�м�������
//	if (aput == 1)
//		goto begin; }//����������з������У�ʵ���ٴ�����179�д���
//	
//	return 0;
//
//
//}

//#include<string.h>//δʶ���ַ���string.h�󲻼�s,����ʹ��strcpy���뿪ͷ˵��Դ�ļ����ſ���ʹ��
//#include<stdio.h>
//struct People
//{
//	char name[7];
//};
//int main()
//{
//	struct People b1={"C++"};
//	strcpy_s(b1.name, "phthy");//strcpy�ַ�δ����,��ʹ��strcpy_s������������������ַ���һ�����ڽṹ�����޸ĵ�ʹ��strcpy_s
//	printf("%s\n", b1.name);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 2;
//	int b = 6;
//	int i = 0;
//	i = a;
//	a = b;
//	b = i;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//#include<stdio.h>
//struct Book
//{
//	char name[7];
//};
//int main()
//{
//	struct Book q1 = { "C++" };
//	struct Book* aq = &q1;
//	printf("%s\n", (* aq).name);//�����ò�����
//	printf("%s\n", aq->name);//����д��
//	printf("%s\n", q1.name);//����д����ֱ������
//	return 0;
//
//}

//#include<stdio.h>                          //�﷨�ṹ֮��֧��䣨ѡ����䣩��if��䣩
//int main()
//{
//	int age = 10;          //if(age>=18&&age<=28)�������ã�18<=age<=28),��ageȡ10ʱ��18<=10Ϊ�ٲ�����ȡ0����0<28Ϊ�棬�����Ļ����ض�Ϊ�棬�����⣬������ͬ�߼�һ��һ����
//	if (age < 10) //����age�Ǹ����������޸ģ����������Ҳ�Ͳ�ͬ
//		printf("���Ŭ���ˡ�%d\n");
//	else if (age > 18)       //else if ����ʹ�ö��
//		printf("��Ŭ�������ˡ�%d\n");
//	else
//		printf("�������군�ˡ�%d\n");
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	printf("������һ������>:");
//	scanf_s("%d", &i);
//	{if ((i % 2) == 1)
//		printf("Ϊ����\n");
//	else
//		printf("Ϊż��\n"); }
//	return 0;
//}

//#include <stdio.h>
//#define _CRT_FECURE_NO_WARNINGS
//int main()
//{   
//	int i=0 ;
//	for (i==1;i<101;i++)
//	if(i%2==1)
//	printf("%d", i);
//	
//	return 0;
//}

//#include<stdio.h>
//#define _CRT_FECURE_NO_WARNINGS
//int main()
//{
//	int i =1;
//	while (i < 101)
//	{
//		
//		if (i % 2 == 1)
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//#include<stdio.h>
//#define _CRT_FECURE_NO_WARNINGS
//int main()
//{int day = 0;
//scanf_s("%d", &day);
//switch (day)                      //switch�����default ��䣬case���
//{                                 //switch����������Σ���������Ϊint��ʽ��case�������Ϊ����
//    case 1:                       //һ��case���break,�������������Ķ����Ͳ����ٳ���
//	case 2:                         //���else if���Ӽ����ʵ�ã������ر��鷳
//	case 3:
//	case 4:
//	case 5:
//		printf("�ù����ˣ������ǹ����ա�\n");
//		break;
//	case 6:
//	case 7:
//		printf("�ߺ����żپ����档\n");
//		break;
//default:
//	printf("��������ʲô������\n");
//	break;
//}
//return 0;
//
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i < 11)
//	{
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{   
//	
//	for (int i = 1;i<11;i++)   //��ס�������м���;���ӣ��ã����ܻ�������޲�ѭ���Ķ����������ۻ�����
//
//		printf("%d", i);
//	
//		return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);       //ǧ������Ǽ�&��ȡ��ַ�����У�Ҫ��Ȼͬ����bug�޷����гɹ�
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("�úúá�\n");  //break������ϣ����ӵĻ������ȫ���֣�����bug
//		break;
//	case 6:
//	case 7:
//		printf("���ò��ò���\n");
//		break;
//	default:                  //default������ᵽ��֮������ͻ�������������
//		printf("���󰡴���\n");
//		break;
//	}
//			return 0;
//	}
//	
// 	
//#include<stdio.h>
//int main()
//{
//	int ch = 0;                   //getchar��ȡ�ַ���putchar����ַ�
//	while ((ch = getchar())!= EOF)//��ȡ�ַ��ŵ�ch����ch������EOF�ַ��������ch����ʹ����EOFҲ����ֹͣ����Ctrl+z������ֹ����
//		putchar(ch);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{   
//	
//	int ch = putchar();  //���Ǹ������
//	putchar();
//	printf("%c\n", ch);
//	return 0;
//
//}

//#include<stdio.h>
//int main()
//{
//	int ret = 0;
//	char password[20] = { 0 };     //���Ǹ�����룬������ʲô������������������
//	printf("����������...:>");       //��Ϊ����������ʱ��password��ȡ������������֣�ʵ���Ϻ��滹ʣ��\n��\nֱ�ӱ�getcharʶ��!=y,����ֱ��ȡ��ȷ��
//	scanf_s("%c\n", password);     //Ҫ�������£���Ҫ����getchar()�ѻ������������ȡ�ɾ����������ܼ�������
//	printf("��ȷ�������Ƿ���ȷ��(Y/N):>");//��ֻ��һ��getchar()�޷���֤����������123 abc������123��password��ȡ���ո�getchar��ȡ����ʣ��abc���ڶ���geetcgar��ȡ��!=y,���Ի��ǻ�ֱ�ӳ���ȷ��ʧ��
//	ret = getchar();
//	if (ret == 'Y')
//		printf("ȷ�ϳɹ�");
//	else
//		printf("ȡ��ȷ��");
//		return 0;
//
//
//}                            //��Ȼ��bug����Ҫ��������һ�����Ǹ����ĺ��

//#include<stdio.h>
//int main()
//{
//	int ret = 0;
//	int i = 0;
//	char password[20] = { 0 }; 
//	printf("����������>:");
//	scanf_s("%c", password);
//	while ((i =getchar()) != '\n')  //�����Ǹ�ֵ����˼Ӧ�ã�������������û������ʱ��\n������\nʱ��Ϊ�٣�ѭ��ֹͣ����ʼ���������
//	{
//		;
//	}
//	printf("��ȷ�������Ƿ���ȷ(Y/N)>:");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("ȷ�ϳɹ�....\n");
//	else
//		printf("ȡ��ȷ��....\n"); 
//	return 0;
//		
//
//}

//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)   //������EOF�������
//	{
//		if (ch < '0' || ch>'9')   // ISK����С��0���ߴ���9�����������ѭ����������ʼʶ����һ��ѭ��
//			continue;
//		putchar(ch);              //����ڷ�Χ���ڣ�������ַ�
//    }
//	return 0;                   //ֻ����������ַ��������������ַ��������
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;            //forѭ����whileѭ���е�break������ͬ��������ֹѭ�����У�����˵��ֹͣѭ��
//	while (i <= 10)       //��continueȴ��ͬ�����ݵ�����λ�ò�ͬҲ����ֲ�ͬ���������������һ������ô������ѭ�����Ϊ01234����for��������012346789
//	{   
//	                      //contine��i++��ǰ���������1234567891011��break�л���1234
//		if (i == 5)
//			/*break;*/
//		continue;
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}

////forѭ����
////for(���ʽ1�����ʽ2�����ʽ3����
////���ʽ1����ʾ��ʼ�����֣����ڳ�ʼ��ѭ����������ѭ���ĳ�ʼֵ
////���ʽ2����ʾ�����жϲ��֣������ж�ѭ����ֹ��Ҳ�������Ʒ�Χ����ѭ������
////���ʽ3:��ʾ�������֣�����ѭ�������ĵ���������i++ʲô֮��ģ�����i+=2.......

//#include<stdio.h>
//int main()
//{   
//	int i[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a = 0;
//	for (a = 0; a <10; a++) //�˴�����ǰ�պ󿪵�д������������for�ڲ��޸�ѭ����������ֹѭ��ʧȥ����
//	{
//		printf("%d", i[a]);
//	}
//	return 0;
//}

//#include<stdio.h>    //����ѭ��������������ô����
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2|| y < 5; x++, y++)//���ţ�||���ǻ��ߵ���˼����һ��ɣ���&&�ǲ��ҵ���˼��ȱһ����
//	{
//		printf("������\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int z = 0;
//	for (i = 0, z = 0; z = 0; i++, z++) //�����и���������z����Ǹ�ֵ���ţ���0��ֵ����z����������zΪ�٣��ж�Ϊ�٣�ѭ���޷���ȥ�޷�����
//		z++;                            //����ǰ��Ϊʲô��0Ϊ��ѭ������ȥ��������ѭ��ѭ��00��
//	return 0;                           //�������ֵΪ���㣬��Ϊ�棬ѭ����Զ����Ϊ��ѭ��
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("hehe\n");     //do whileѭ������ӡ�Ǹ�hehe
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}
 
//#include<stdio.h>
//int main()
//{   
//	int i = 1;
//	int q = 1;
//	int a = 0;
//		scanf_s("%d", &a);
//		while (i <= a)
//		{
//			 q=q * i; //����q�ȵ���1*i������i�����ӣ�qҲ��֮���ӣ�һ���һ�����˽׳˵�Ч��
//			 i++;
//			
//			
//			
//		}
//		printf("%d", q);
//	
//	
//	
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int sum = 1;
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	scanf_s("%d",& a);
//	for (i = 1; i <= a; i++)//�׳���׳˸��������
//	{
//		sum = sum * i;
//		b = b + sum;
//
//		
//	}
//	printf("%d", sum);
//	printf("%d", b);
//	return 0;
//}

//# include<stdio.h>
//int main()
//{   
//	
//	int b = 1;
//	int sum = 1;
//	int a = 0;
//	scanf_s("%d", &a);
//	do
//	{
//		sum = sum * b;
//		b++;
//
//	}
//	while (b <= a);
//	printf("%d", sum);  //do while�����н׳ˣ���printf�ŵ�����������ʱ����ӡ��������ÿ��ѭ���ĳ˻������ŵ�������ܴ�ӡ�����ս��
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int sum = 1;
//	int c = 0;
//	int b = 0;
//	scanf_s("%d",& b);
//	do
//	{
//		sum = sum * a;
//		c = c + sum;
//		a++;
//	} 
//	while (a <= b);       //do while�н׳���׳���ӣ����л��п����ú�׺\n�������뻻�еľ��Ӻ������puts("");����ʵ�ֻ��С�
//	printf("%d", sum);    //���и��Եĺô������и��ķ������﷨��ֵ�����ѭ����ѡ����ʵ��龰״̬���д������ʵ�ָ�������Ч�Ĵ���
//	puts("");
//	printf("%d", c);
//	return 0;
//}
 
//#include<stdio.h>             //����һ��������������������Ƿ���������֣�����ӡ�������±�
//int main()
//{   
//	int b = 0;
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = sizeof(arr) / sizeof(arr[0]);  //���ַ����Ե����ĵ����ܸ���
//	int a = 0;
//	scanf_s("%d", &a);
//	for (b = 0; b < i; b++)
//	{   
//		if (a==arr[b])                       // ����arr[]�е��±ꡪ������������Զ���±��1����ѭ��ģʽ��ѭ��С��ʮ�Σ����������ڶ�����ɵ�һ������
//		{
//			printf("�ҵ���,�±�Ϊ��%d\n", b);  
//			break;                        //�����break������ӣ����������Ҳһ���ӡ������ѭ��û��ֹͣ������������
//		}
//	}
//	if (b ==i)
//		printf("�Ҳ���\n");
//	
//	return 0;
//}
//
////#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±���:%d\n", i);//�ҵ�����Ϊ7���±겢��ӡ����
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 999;    
//	printf("%p\n", a);//�Ե�ַ��ʽ��ӡ��C������%p�������ָ�����������ֵ�� Ҳ����˵ %p���������ַ��
//	printf("%x\n",a);//��ʮ�����Ƶķ�ʽ��ӡ����
//	printf("%s\n", a);//%sΪ�ַ�������˼���˴����д�ӡ����������Ϊ�������ַ���
//}


//#include<stdio.h>   //һ���ַ��аѴ�дת��ΪСд������ת���ɴ�д
//int main()
//{
//	char ch[80] = "123abcdEFG*&";//һ���ַ������а�����Щ
//		int j;
//		puts(ch);
//		for (j = 0; ch[j] != '\0'; j++)
//			if (ch[j] >= 'A' && ch[j] <= 'Z') 
//				ch[j] = ch[j] + 'e' - 'E';// һ����ĸ��Ӧ�Ĵ�д��Сд֮���ASCII��ֵ���32������Сд�Ĵ��ڴ�д�ġ���������'e'��'E'֮���ASCII��ֵ���32��ch[j] + 'e' - 'E'�൱��ch[j] + 32����һ����ĸ�Ӵ�дת��ΪСд�������������� + 32��Сдת��д���� - 32
//		puts(ch);
//		return 0;
//
//}

//#include<stdio.h>
//int main()         //����һ����д����ĸת����Сд����ĸ��Сд�ȴ�д��ĸ��32
//{
//	int ch = 0;
//	scanf_s("%c", &ch);
//	ch= ((ch >= 'A' && ch<= 'Z') ? ch + 32 : ch);
//	if (ch >= 'A' && ch <= 'Z')
//		printf("%c\n",ch);
//	else
//		printf("%c\n", ch);
//	return 0;
//}


//#include<stdio.h>
//int main()         //����һ��Сд����ĸת���ɴ�д����ĸ
//{
//	int ch = 0;
//	scanf_s("%c", &ch);
//	ch= ((ch >= 'a' && ch<= 'z') ? ch - 32 : ch);
//	if (ch >= 'a' && ch <= 'z')
//		printf("%c\n",ch);
//	else
//		printf("%c\n", ch);
//	return 0;
//}

//#include<stdio.h>                   //����һֱ�������������0�Ļ����Ѵ�д���Сд����Сд��ɴ�д
//int main()
//{
//begin:
//	char sum = 0;
//	scanf_s("%c", &sum);
//	{if (sum >= 'a' && sum <= 'z')
//		printf("%c\n", sum - 32);
//	else if (sum >= 'A' && sum <= 'Z')
//		printf("%c\n", sum + 32);
//	else
//		printf("%c\n", sum);
//	}
//	if (sum == '0')
//		return 0;
//	else
//		goto begin;
//}

//#define CRT _SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{   
//	                                          //����һ�����������������Ƿ���������������˶��ֲ����㷨���۰�����㷨��
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };    //�����Ԫ�ز�һ���ǰ�˳�����еģ��п����Ǻ���˳�����
//	int a = 0;
//	scanf_s("%d", &a);
//	
//    int c = sizeof(arr) / sizeof(arr[0]);  //���㼸��Ԫ��
//	int left = 0;                         //���±�Ϊ0����ζ�����±��0��ʼ
//	int right = c - 1;                    //���±�ΪԪ�ظ�����һ����Ϊ�±��Ǵ��㿪ʼ��
//	
//	while(left<=right)                    
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > a)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < a)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ���,�±��ǣ�%d\n", mid);
//			break;
//		}
//		
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//
//
//		
//}


//#define CRT _SECURE_NO_WARNINGS   //������ӡ��welcome to my word
//#include<string.h>
//#include<stdio.h>
//#include<windows.h>
//#include<stdlib.h>
//
//int main()
//{
//	char arr1[] = "Welcome To My Word";
//	char arr2[] = "##################";
//	int left = 0;
//	int  right = strlen(arr1)-1;//����ֱ�����ַ����ĳ��ȼ�һ���Ƕ�Ӧ���±꣬Ҫ��Ȼ��sizeof(arr1)/sizeof(arr[0])
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];//arr2��ߵĻ���arr1����ߵ�
//		arr2[right] = arr1[right];//arr2�ұߵĻ���arr2���ұߵ�
//		printf("%s\n", arr2);//��ӡarr2
//		Sleep(500);//ͷ�ļ���windows.h����˼��������м���500�����ڽ�����һ�δ�ӡ
//		left++;
//		right--;
//		system("cls");//��˼��ÿ�������ӡ�����Ķ�����ͷ�ļ���stdlib.h
//		
//     }
//	printf("%s\n", arr2);//��β�ٴ�ӡһ��arr2����ʾȫ������ֱֹ���˳�
//	return 0;
//}

//#include<stdio.h>       //�ӡ���������㡱�����ǳ�ϲ���㡱�ļ��0.5����𽥱任�����ö��Դ�ļ�ʵ����һ����
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	char arr1[] = "�ҷǳ�ϲ���㣡����";
//	char arr2[] = "�Ҳ�������㣡����";
//	int left = 0;
//	//int right = strlen(arr1) - 1;
//	int right = sizeof(arr1) / sizeof(arr1[0])-2;//�������������Ҳ���Խ���
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];//�����λ�ù�ϵ����˭�任��˭
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);
//		left++;
//		right--;                 //������������Ĵ����࣬����������ѭ���ӱ任�ı��ԭ��
//		system("cls");
//     }
//	printf("%s", arr2);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{   
//	int a = 0;
//	char password[20] = { 0 };
//	
//	for (a = 0; a < 3; a++)
//	{
//		printf("����������>:\n");
//		scanf_s("%s", password,20);//������ָ��Խ�硣��� scanf Ϊ�����԰�ȫ��scanf_s Ҫ����¼���ַ�����ʱ��Ҫָ���������Ĵ�С�����Խ����������ָ���������Ĵ�С���������һ�����ڵ���һ�����ֶ��������У�Ҫ��Ȼ�������в���
//		if (strcmp(password ,"123456") == 0)//�����ǱȽ�ǰ�������֮��Ĵ�С�����һ����ô��ȡ�㣬���ǰ�ߴ��ں��ߣ��᷵��һ���������������strcmp�����ǰ��С�ں��ߣ��᷵��һ��С��0��������strcmp
//		{
//			printf("��¼�ɹ�����ϲ��\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������>:");
//			system("cls");        //�������ѭ��   ��Ϊ�հ�  cls������
//		}
//	}
//	if (a == 3)
//		printf("��������������Σ��˳�����\n");
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS  //������������⣬����֪��������ˣ���ʱ���ٿ�����Ƶ
//#include<stdio.h>
//int func(int a)
//	{
//		int b;
//		
//		switch (a)
//		{
//		case 1:b = 30;
//		case 2:b = 100;
//		case 3:b = 1000;
//		default:b = 0;
//		}
//		return b;
//	}

//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    scanf_s("%d", &a);
//    double b = 0;
//    {
//       double b = 3.14* a * a;
//        printf("%d",b);
//    }
//    return 0;
//}

//#include<stdio.h>
//#define CRT_SECURE_NO_WARNINGS
//int main()
//{
//    printf("�ú�ѧϰ����������");
//        return 0;
//}
//    

//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 0;
//	 c = a + b;
//	printf("%d\n", c);
//		return 0;
//}

//#include<stdio.h>
//int CEHNG(int x, int y)
//{
//	return x * y;
//}
//int main()
//{
//	
//    begin:
//	int c = 0;
//	int a, b = 0;
//	scanf_s("%d%d", &a, &b);
//	printf("%d*%d=%d", a, b, CEHNG(a, b));
//	goto begin;
//}
//#include"stdio.h"
//void main()
//{
//	putchar(97);
//	putchar('\t');
//    putchar('A');
//	putchar('\r');
//	putchar('\101');
//	putchar(48);
//	putchar('c');
//	#putchar('\b');
//	putchar('\n');
//	putchar(65);
//	putchar('567');
//	
//}
//#include"stdio.h"
//void main()
//{
//	putchar('\101');
//	putchar('\102');
//	putchar(92);
//	putchar(97);
//	putchar(65);
//	putchar('\100');
//}
//#include "stdio.h"
//void main()
//{
//	char c;
//	c = getchar();
//	putchar(c);
//	printf("\n");
//	printf("%d", c);
//}
//#include"stdio.h"
//void main()
//{
//	int a = 10;
//	int b = -22;
//	printf("%o,%x,%d,%u\r", a,a,a,b);
//	
//}

//#include <stdio.h>
//int main()
//{
//	printf("���� 2310507238\n");
//	char  ch;
//	ch = getchar();
//	if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
//		printf("char");
//	else
//		printf("other");
//	return 0;
//}

//#include<stdio.h>
//int fax(float x)
//{
//	float y;
//	if (x < 1) { y = x; }
//	else if (x >= 1 && x < 10) { y = 2 * x - 1; }
//	else { y = 3 * x - 11; }
//	return y;
//}
//int main()
//{
//	float b,c;
//	printf("���� 2310507238\n");
//	while (1)
//	{
//		scanf_s("%f", &b);
//		c=fax(b);
//		printf("y=%f\n", c);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("���� 2310507238\n");
//	float x;
//	while (1)
//	{
//		scanf_s("%f", &x);
//		if (x >= 90 && x <= 100) printf("�ɼ��ȼ���A\n");
//		if (x >= 80 && x < 90) printf("�ɼ��ȼ���	B\n");
//		if (x >= 70 && x < 80) printf("�ɼ��ȼ���	C\n");
//		if (x >= 60 && x < 70) printf("�ɼ��ȼ���D\n");
//		if (x >= 0 && x < 60) printf("�ɼ��ȼ���E\n");
//	};
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//
//	float x;
//	printf("���� 2310507238\n");
//	while (1)
//	{
//		scanf_s("%f",&x);
//		switch ((int)x / 10)
//		{
//			case 0:
//			case 1:
//			case 2:
//			case 3:
//			case 4:
//			case 5:
//				printf("�ɼ��ȼ���E\n");
//				break;
//			case 6:printf("�ɼ��ȼ���D\n");
//				break;
//			case 7:printf("�ɼ��ȼ���C\n");
//				break;
//			case 8:printf("�ɼ��ȼ���B\n");
//				break;
//			case 9:printf("�ɼ��ȼ���A\n");
//				break;
//			case 10:printf("�ɼ��ȼ���A\n");
//				break;
//		}
//	};
//	return 0;
//}
//
//
//
//
//
//
//
//
//


//struct list {
//	char name[20];
//	int age;
//	float height;
//	char senior[20];
//};
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main(){
//	printf("����\t        ����\t���\t�꼶\n");
//	struct list MyStruct = { "xiaohong",10,1.99,"three" };
//	struct list* p1 = &MyStruct;
//	printf("%s\t%d\t%.2f\t%s", p1->name, p1->age,  p1->height, p1->senior);
//	return 0;
//
//}

//#include<stdio.h>
//#define P 3
//#define S(a) P*a*a          //   3*3+5*3+5            aû������,ֱ�Ӵ������㼴��
//#define C(b) P*(b)*(b)      //   3*(3+5)*(3+5)        b�����ţ����Ŵ��Ͻ�������
//int main()
//{
//	int ar;
//	int sa;
//
//	sa = C(3 + 5);
//	ar = S(3 + 5);
//
//
//	printf("%d\n%d", ar,sa);
//	return 0;
//}

//#include <stdio.h>
//
//struct link {
//	char name[10];
//	int age;
//	float height;
//	char senior[10];
//	float grade;
//};


//struct link {									//�������Ƭ�������⡣���в��ˡ�
//	int num;
//	char name[10];
//	int score;
//	struct link *next;
//};
//#include <stdio.h>
//#include <stdlib.h>
//struct link * Create()
//{
//	struct link * head, * tail, * p;
//	int num;
//	head = (struct link*)malloc(sizeof(struct link));
//	head->next = NULL;
//	tail = head;
//	printf("Input data:\n");
//	scanf_s("%d", &num);
//	while (num != 0) {
//		p = (struct link*)malloc(sizeof(struct link));
//		p -> num = num;
//		scanf_s("%s %d",p->name, &p->score);
//		tail -> next = p;
//		tail = p;
//		scanf_s("%d",&num);
//	}
//	tail->next = NULL;
//	return head;
//};
//
//void Print(struct link* head) {
//	struct link *p;
//	p = head->next;
//	while (p) {
//		printf("%d,%s,%d,\n", p->num, p->name, p->score);
//		p = p->next;
//
//	}
//}
//#include "stdio.h"
//#include <stdlib.h>
//int main() {
//	struct link* head, * p;
//	char name[10];
//	int num;
//	head = Create();
//	Print(head);
//	return 0;
//
//
//}

//#include<stdio.h>
//#include<time.h>
//
//using namespace std;
//int main()
//{
//
//	time_t	seconds;
//	seconds = time(NULL);
//	printf("�Դ�1970-01-01�𣬾���������Ϊ%ld\n", seconds);
//	return 0;
//}

//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t curtime;
//	time(&curtime);
//	printf("���ڵ�ʱ��Ϊ��%s", ctime(&curtime));
//	return 0;
//}

//#include<vector>
//#include<stdio.h>
//#include<iostream>
//using namespace std;
//int main()
//{
//	vector<int> myVector;
//	vector<int> myVector2 = { 1,2,3,4,5 };
//	myVector.push_back(5);  //��ĩβ���������
//	int z = myVector[0];
//	int size1 = myVector.size();
//	int size = myVector2.size();//��ȡԪ�ظ���
//	int x = myVector2.at(1);   //��ȡ�ڶ���Ԫ��
//	int y = myVector2[0];      //��ȡ��һ��Ԫ��
//	printf("myVector����%d��Ԫ��,����%d��\n", size1, z);
//	cout << "myVector2����{0}��Ԫ�أ����ĵ�һ��Ԫ����{1},���ĵڶ���Ԫ����{0}��" << y << x << endl;
//	return 0;
//
//}


//#include<stdio.h>
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	std::vector<int> S1 = {1,2,3,4,5,6};
//	S1.push_back(8);
//
//	for (auto it = S1.begin(); it != S1.end(); ++it) 
//	{                                          
//		std::cout << *it <<" ";
//	}
//
//	for (int element : S1)
//	{
//		cout << element <<" ";
//
//		if (element == S1[S1.size()-1])
//		{                                        //�ռ���������ռ�Ԫ�����Ӧ��������������������ʲ���
//			cout << element << " ";
//		}
//	}
//	
//	S1.erase(S1.begin() + 2);//ɾ��������Ԫ��
//	for (int element : S1)
//	{
//		cout << element << " ";
//	}
//	return 0;
//
//}

//#include<iostream>
//#include<vector>
//int main()
//{
//	std::vector<int> S;
//	S.push_back(1);
//	S.push_back(11);
//	S.push_back(8);
//	S.push_back(7);
//	S.push_back(5);
//
//	std::cout << "�����ж��ٸ�Ԫ��:" << S.size() <<std::endl;
//	std::cout << "��ЩԪ�طֱ��ǣ�";
//	for (auto element : S)
//	{
//		std::cout << element << " ";
//	}
//
//	std::cout<<"*******************************************" << std::endl;
//
//
//	S.erase(S.begin());
//	S.erase(S.begin()+1);
//
//	std::cout << "ɾ���������ж��ٸ�Ԫ��:" << S.size() << std::endl;
//	std::cout << "ɾ�������ЩԪ�طֱ��ǣ�";
//	for (auto element : S)
//	{
//		std::cout << element << " ";
//	}
//	std::cout << "*******************************************" << std::endl;
//	S.clear();
//	std::cout << "��պ������ж��ٸ�Ԫ��:" << S.size() << std::endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	cout << "��һ��������{0}���ڶ���������{1}������������{2}��" << a << b << c << endl;
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//#define MSIZE 20
//#define OK 1
//#define ERROR 0
//
//typedef int Status;    //Status�Ǻ��������ͣ���ֵ�Ǻ������״̬���룬��OK��
//typedef int ElemType;  //ElemType�����͸���ʵ���������������ٶ�Ϊint
//
//typedef struct
//{
//	ElemType* elem;
//	int length;
//}SqList;
//
//Status InitList(SqList* L)   //����һ�����б�
//{
//	L->elem = (ElemType *)malloc(MSIZE * sizeof(ElemType));
//	if (!L->elem)
//	{
//		return ERROR;
//	}
//	L->length = 0;
//	return OK;
//}
//
//Status Listinsert(SqList* L, int i, ElemType e)
//{
//	int k;
//	if (L->length == MSIZE) 
//	{
//		return ERROR;
//	}
//	if (i<1 || i>L->length + 1)
//	{
//		return ERROR;
//	}
//	if (k <= L->length) {
//		for (k = L->length - 1; k >= i - 1; k--)
//		{
//			L->elem[k + 1] = L->elem[k];
//		}
//	}
//	L->elem[i - 1] = e;
//	L->length++;
//	return OK;
//}
//
//Status ListDelete(SqList* L, int i, ElemType* e)
//{
//	int k;
//	if (L->length == MSIZE)
//	{
//		return ERROR;
//	}
//	if (i<1 || i>L->length + 1)
//	{
//		return ERROR;
//	}
//	*e = L->elem[i - 1];
//
//	if (i < L->length) {  //���ɾ��λ�ò������λ��
//	for (k = i; k < L->length; k++) {
//		L->elem[k - 1] = L->elem[k];
//	}
//}
//L->length--;    //���ȼ�1
//return OK;
//} 

//#include <malloc.h>
//#include <stdio.h>
//#include <iostream>
//
//#define LIST_INIT_SIZE 100
//#define LIST_INCREMENT 10
//typedef int ElemType;
//typedef int Status;
//typedef struct{
//	ElemType * elem;
//	int length;
//	int listsize;
//}Sqlist;
//
//Status InitList_Sq(Sqlist &L)
//{
//	L.elem = (ElemType*)malloc(LIST_INIT_SIZE * sizeof(ElemType));
//	//L.elem = new ElemType[LIST_INIT_SIZE];   //C++
//	if (!L.elem)  return 0;
//	else {
//		L.length = 0;
//		L.listsize = LIST_INIT_SIZE;
//		return 1;
//	}
//}
//
//#include <stdio.h>
//int main()
//{
//	printf("%zd\n", sizeof(char *));
//	printf("%zd\n", sizeof(int *));
//	printf("%zd\n", sizeof(float *));  ////����4
//	printf("%zd\n", sizeof(long int *));
//	printf("%zd\n", sizeof(double *));
//	return 0;
//}
 
//

//#include <stdio.h>
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//������ӡ

//#include <stdio.h>
//#include <stdbool.h>
//bool idPrime(int num)
//{
//	//1��������
//	if (num <= 1)
//	{
//		return false;
//	}
//	for (int i = 2; i * i <= num; i++)
//	{
//		if (num % i == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//int main()
//{
//	int num;
//	scanf_s("%4d", &num);
//	for (int i = 100; i <= num; i++)
//	{
//		if (idPrime(i))
//		{
//			printf("%d ", i);
//		}
//		else
//			continue;
//	}
//
//	return 0;
//}
//�ж������Ƿ�
//#include <stdio.h>
//void Serchyear(int year)
//{
//	if (year % 4 == 0)
//	{
//		if (year % 100)
//		{
//			printf("%d", year);
//		}
//	}
//	if (year % 400 == 0)
//	{
//		printf("%d", year);
//	}
//}
//int main()
//{
//	for (int i = 1000; i <= 2000; i++)
//	{
//		Serchyear(i);
//	}
//	return 0;
//}

//�ҳ����������������
//#include<stdio.h>
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf_s("%d%d", &m, &n);
//    int min = 0;
//    if (m > n)
//        min = n;
//    else
//        min = m;     //�������Լ������m��n�Ľ�Сֵ
//    while (1)
//    {
//        if (m % min == 0 && n % min == 0)
//        {
//            printf("���Լ�����ǣ�%d\n", min);
//            break;
//        }
//        min--;
//    }
//    return 0;
//
//}


//for���99�˷��ھ�

//#include <stdio.h>
//int main()
//{
//	int sum;
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= 9; j++)
//		{
//			sum = i * j;
//			printf("%d X %d = %d\n", i, j, sum);
//			sum = 0;
//		}
//	}
//	return 0;
//
//}

//#include <stdio.h>
//int main()
//{
//	int j = 0;
//	int arr[10];
//	int max = 0;
//	for (int k = 0; k < 10; k++)
//	{
//		scanf_s("%d",& arr[k]);
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}
//������֡����
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int  Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//
//	c = Add(a, b);
//
//	printf("%d\n", c);
//
//	return 0;
//}


//������
//#include <stdio.h>
//int main()
//{
//	int a = 5/2;
//	double b = 5.0 / 2;
//	printf("%d\n", a);
//	printf("%lf\n", b);
//	return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//	int a = 5 % 2;
//	printf("%d\n", a);
//}
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = a << 2;   //����
//	int c = a >> 2;   //���� 
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	//������ԭ�롢���롢���붼����ͬ��
//	//����ռ4���ֽڣ�32bit)
//	//00000000000000000000000000001010 -ԭ��
//	//00000000000000000000000000001010 -����
//	//00000000000000000000000000001010 -����
//
//	int b = -10;
//	//������ԭ�밴��һ������������ֱ��д�����Ķ����ƾ���ԭ��
//	//�����ķ��롢������Ҫ����
//	//10000000000000000000000000001010 -ԭ��
//	//11111111111111111111111111110101 -����
//	//11111111111111111111111111110110 -����
//}
//#include <stdio.h>
//int main()
//{
//	int a = -10;
//	int b = a << 1;   //����һλ
//	printf("%d\n", b);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = -1;
//	int b = a >> 1;   //����һλ
//	printf("%d\n", b);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a ^ b;
//	//�ڴ��в�����м���
//	printf("%d\n", c);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = (char*) & a;
//	float* pd = (float*)&a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	printf("%p\n", pd);
//	printf("%p\n", pd + 1);
//
//	return 0;
//
//}
//#include<stdio.h>
//#define COUT 5
//float arr[COUT];
//
//int main()
//{
//	float* p;
//	for (p = &arr[0];p<&arr[COUT]; )
//	{
//		*p++;
//	}
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	int e = 5;
//	int* arr[5] = { &a,&b,&c,&d,&e };
//}

//#include<stdio.h>
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	int b[] = { 2,3,4,5 };
//	int c[] = { 3,4,5,6 };
//	int* arr[3] = { a,b,c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//struct Stu
//{
//	//�ṹ���Ա
//	char name;//����
//	int age;//����
//	char sex[10];//�Ա�
//	float score;//�ɼ�
//};
//
//int main()
//{
//	struct Stu s1, s2, s3;
//	return 0;
//}
//#include<stdio.h>
//
//struct Book
//{
//    int money;
//    char name[20];
//};
//
//int main()
//{
//    struct Book s1 = { 20,"Tom and Jerry" };
//    struct Book s2 = { 30,"YOU and I" };
//
//    printf("%d %s \n%d %s\n", s1.money, s1.name, s2.money, s2.name);
//    return 0;
//}

//#include <stdio.h>
//
//struct S
//{
//	int a;
//	char c;
//};
//
//struct P
//{
//	double d;
//	struct S s;
//	float f;
//};
//
//void Print1(struct P sp)
//{
//	printf("%d %c\n", sp.s.a, sp.s.c);
//}
//
//void Print2(struct P* sp)
//{
//	printf("%d %c\n", sp->s.a, sp->s.c);//*(sp).a,*(sp).c
//}
//
//int main()
//{
//	struct P p = { 5.5,{100,'b'},3.14f };
//	
//	return 0;
//}
//

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//// ��������
//void reverseString(char* str);
//
//int main() {
//    char* input;
//    size_t length;
//
//    // ��ȡ�����ַ���
//    printf("������һ���ַ���: ");
//    // ʹ�� getline() ����ȡ�����ո����������
//    getline(&input, &length, stdin);
//
//    // ���ú�����ת�ַ���
//    reverseString(input);
//
//    // �����ת����ַ���
//    printf("��ת����ַ���: %s\n", input);
//
//    // �ͷŶ�̬������ڴ�
//    free(input);
//
//    return 0;
//}

// ��ת�ַ����ĺ���ʵ��
//void reverseString(char* str) {
//    int length = strlen(str);
//    int start = 0;
//    int end = length - 1;
//    char temp;
//
//    // �����ַ�ֱ���м�λ��
//    while (start < end) {
//        temp = str[start];
//        str[start] = str[end];
//        str[end] = temp;
//        start++;
//        end--;
//    }
//}
//#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//
//// ��������
//int findFirstUniqueChar(const char* str);
//
//int main() {
//    const char* testStr = "leetcode";
//    int position = findFirstUniqueChar(testStr);
//    printf("��һ��ֻ����һ�ε��ַ���λ����: %d\n", position);
//
//    const char* testStr2 = "loveleetcode";
//    position = findFirstUniqueChar(testStr2);
//    printf("��һ��ֻ����һ�ε��ַ���λ����: %d\n", position);
//
//    const char* testStr3 = "aabbccddeeff";
//    position = findFirstUniqueChar(testStr3);
//    printf("��һ��ֻ����һ�ε��ַ���λ����: %d\n", position);
//
//    return 0;
//}
//
//// �ҵ���һ��ֻ����һ�ε��ַ���������λ�õĺ���ʵ��
//int findFirstUniqueChar(const char* str) {
//    if (str == NULL || *str == '\0') {
//        return 1; // ����ַ���Ϊ�գ��򷵻�1
//    }
//
//    int charCount[256] = { 0 }; // ���ڼ�¼ÿ���ַ����ֵĴ���������ֻ����ASCII�ַ�
//    int length = strlen(str);
//
//    // ͳ��ÿ���ַ����ֵĴ���
//    for (int i = 0; i < length; i++) {
//        charCount[(unsigned char)str[i]]++;
//    }
//
//    // ���ҵ�һ��ֻ����һ�ε��ַ�
//    for (int i = 0; i < length; i++) {
//        if (charCount[(unsigned char)str[i]] == 1) {
//            return i; // ���ص�һ��ֻ����һ�ε��ַ���λ��
//        }
//    }
//
//    return 1; // ���û���ҵ�ֻ����һ�ε��ַ����򷵻�1
//}


//#include <stdio.h>

// ��������
//int singleNumber(int* nums, int numsSize);
//
//int main() {
//    int nums[] = { 4, 1, 2, 1, 2 };
//    int numsSize = sizeof(nums) / sizeof(nums[0]);
//    int result = singleNumber(nums, numsSize);
//    printf("ֻ����һ�ε�����: %d\n", result);
//
//    return 0;
//}
//
//// �ҳ�ֻ����һ�ε����ĺ���ʵ��
//int singleNumber(int* nums, int numsSize) {
//    int result = 0;
//    for (int i = 0; i < numsSize; i++) {
//        result ^= nums[i]; // ��ÿ��Ԫ�ؽ����������
//    }
//    return result; // ����ֻ����һ�ε���
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//// ��������
//int* mergeSortedArrays(int* A, int m, int* B, int n, int* mergedSize);
//
//int main() {
//    int A[] = { 1, 3, 5, 7 };
//    int B[] = { 2, 4, 6, 8 };
//    int m = sizeof(A) / sizeof(A[0]);
//    int n = sizeof(B) / sizeof(B[0]);
//    int mergedSize = m + n;
//
//    // �����㹻���ڴ����洢�ϲ��������
//    int* mergedArray = (int*)malloc(mergedSize * sizeof(int));
//    if (mergedArray == NULL) {
//        fprintf(stderr, "�ڴ����ʧ��\n");
//        return 1;
//    }
//
//    // �ϲ�����
//    mergeSortedArrays(A, m, B, n, &mergedSize); // ע�⣺����mergedSize�������������ʵ�������ǲ���Ҫ�޸����Ĵ�С
//
//    // ����ϲ��������
//    printf("�ϲ������������: ");
//    for (int i = 0; i < mergedSize; i++) {
//        printf("%d ", mergedArray[i]);
//    }
//    printf("\n");
//
//    // �ͷŷ�����ڴ�
//    free(mergedArray);
//
//    return 0;
//}
//
//// �ϲ���������������ĺ���ʵ��
//int* mergeSortedArrays(int* A, int m, int* B, int n, int* mergedSize) {
//    int* mergedArray = (int*)malloc((*mergedSize) * sizeof(int));
//    if (mergedArray == NULL) {
//        fprintf(stderr, "�ڴ����ʧ��\n");
//        exit(1);
//    }
//
//    int i = 0, j = 0, k = 0;
//    while (i < m && j < n) {
//        if (A[i] <= B[j]) {
//            mergedArray[k++] = A[i++];
//        }
//        else {
//            mergedArray[k++] = B[j++];
//        }
//    }
//
//    // ��ʣ���Ԫ�أ�����еĻ�����ӵ��ϲ����������
//    while (i < m) {
//        mergedArray[k++] = A[i++];
//    }
//    while (j < n) {
//        mergedArray[k++] = B[j++];
//    }
//
//    // ʵ���ϣ����ǲ���Ҫ�޸�mergedSize����Ϊ���ڵ���ʱ�Ѿ���ȷ����Ϊm+n
//    // ��Ϊ�˷��Ϻ���ǩ�������ǻ���ͨ��ָ�봫����������������û���õ������޸Ĺ��ܣ�
//    // *mergedSize = k; // �����Ҫ������ȡ��ע�����д�������֤mergedSize��ֵ
//
//    return mergedArray;
//}
//#include <stdio.h>
//
//void Print(int* arr)
//{
//	int i = 0;
//	while (i<10)
//	{
//		printf("%d ", *(arr+i));
//		++i;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	Print(arr);
//	return 0;
//}

//��ӡ����
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 6;
//	char arr[13][13];
//	for (int v = 0; v < 13; v++)
//	{
//		for (int n = 0; n < 13; n++)
//		{
//			arr[v][n] = ' ';
//		}
//		
//	}
//
//	for (int i = 0; i < 7; i++)
//	{
//		for (int e = 0; e <=i; e++)
//		{
//			arr[i][j + e] = '*';
//			arr[i][j - e] = '*';
//		}
//	}//������
//
//	for (int c = 0; c <6; c++)
//	{
//		for (int t = 0; t <6-c; t++)
//		{
//			arr[7+c][j + t] = '*';
//			arr[7+c][j - t] = '*';
//		}
//	}
//
//	for (int a = 0; a < 13; a++)
//	{
//		for (int b = 0; b < 13; b++)
//		{
//			printf("%c", arr[a][b]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//ˮ�ɻ�
//#include <stdio.h>
//
//int Length(long int num)
//{
//	int count = 0;
//	while (num)
//	{
//		if (num <= 0)
//			break;
//		else
//		{
//			num = num / 10;
//			++count;
//		}
//	}
//	return count;
//}
//
//int Root(long int x,int index)
//{
//	int x1 = 1;
//	while (index)
//	{
//		if (index <1)
//			break;
//		else
//		{
//
//			x1*=x;
//			--index;
//		}
//	}
//	return x1;
//}
//
//void Print(long int num,int size)
//{
//	long int num3 = num;
//	long int num1 = 0;
//	long int sum = 0;
//	for (int i = 0; i < size; i++)
//	{
//		int ret = 0;
//		num1 = num % 10;
//		ret = Root(num1, size);
//		sum += ret;
//		num = num / 10;
//	}
//	if (sum == num3)
//	{
//		printf("%ld ", num3);
//	}
//}
//
//int main()
//{
//	long int num=0;
//	for (num= 1; num < 100001; num++)
//	{
//		int size = 0;
//		size=Length(num);
//		Print(num, size);
//	}
//	return 0;
//}

//sum=n+nn+nnn+nnnn....
//#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//void Print(int n,int m)
//{
//	long int sum = 0;
//	long int num = 0;
//	num = n;
//	while (m > 0)
//	{
//		sum += n;
//		n *= 10;
//		n += num;
//		--m;
//		/*printf("%d ", n);*/
//		
//	}
//	printf("%d ", sum);
//}
//
//int main()
//{
//	while (1)
//	{
//		int a = 0;
//		int x = 0;
//		scanf_s("%d %d", &a, &x);
//		Print(a, x);
//	}
//	
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    printf("    ********\n   ************\n   ####....#.\n #..###.....##....\n ###.......######              ###            ###\n    ...........               #...#          #...#\n   ##*#######                 #.#.#          #.#.#\n####*******######             #.#.#          #.#.#\n ...#***.****.*###....          #...#          #...#\n ....**********##.....           ###            ###\n ....****    *****....\n ####        ####\n######        ######\n##############################################################\n#...#......#.##...#......#.##...#......#.##------------------#\n###########################################------------------#\n#..#....#....##..#....#....##..#....#....#####################\n##########################################    #----------#\n#.....#......##.....#......##.....#......#    #----------#\n##########################################    #----------#\n#.#..#....#..##.#..#....#..##.#..#....#..#    #----------#\n##########################################    ############");
//    return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//size_t my_strlen(const char* str)
//{
//	assert(str != NULL);
//	const char* str1 = str;
//	
//	while(*str1++){}
//	return(str1 - str-1);
//	return 1;
//}
//
//int main()
//{
//	char a[]="abcdef";
//	printf("%d\n", my_strlen(a));
//
//}

//#include < stdio.h >
//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, * p = &a;
//	a.a = 99;
//	printf("%d\n", *p.a);//����һ�ִ����д��
//	printf("%d\n", p->a);
//	printf("%d\n", (*p).a);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int fullbottle = 0;
//	int emptybottle = 0;
//	int money = 20;
//	int num = 0;
//	num = (money / 1)+(money / 1) / 2;
//	printf("%d\n", num);
//	return num;
//}
// 
//һ�����������������߶������������涼��ż��
//#include <stdio.h>
//
//int Change(int arr[],int n)
//{
//	
//	int left = 0;
//	int right = n-1;
//	
//	while (left < right)
//	{
//		int num = 0;
//		while ((left<right)&&(arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2 == 0)) 
//		{
//			right--;
//		}
//		if(left<right)
//		{
//			num = arr[right];
//			arr[right] = arr[left];
//			arr[left] = num;
//			left++;
//			right--;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int shu[10] = { 0 };
//	int n = sizeof(shu) / sizeof(shu[0]);
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &shu[i]);
//	}
//	Change(shu,n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ",shu[i]);
//	}
//	return 0;
//}

//ʵ��strcpy����
//#include<stdio.h>
//
//void MY_strcpy(char* arr, const char* arr1)
//{
//	int n = sizeof(arr1) / sizeof(arr[0]);
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = arr1[i];
//	}
//}
//
//
//int main()
//{
//	char arr[] = "adc";
//	char arr1[]="";
//	MY_strcpy(arr1, arr);
//	printf("%s", arr1);
//	return 0;
//}

//ʵ��strlen����
//#include <stdio.h>
//#include<string.h>
//
//size_t MY_strlen(const char* arr)
//{
//	return sizeof(arr) / sizeof(arr[0]);
//
//}
//int main()
//{
//	char arr[] = { 0 };
//	scanf_s("%c", &arr);
//	printf("%d", MY_strlen(arr));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 20;
//	int b = -10;
//	return 0;
//}

//�жϴ�С������

//#include<stdio.h>
//int main()
//{
//	int a = 1;              //0x00 00 00 01
//	char* p = (char*)&a;    //0x01 00 00 00����0x00 00 00 01
//	if (1==*p)
//	{
//		printf("С��");
//	}
//	else
//		printf("���");
//	return 0;
//}
//

//#include<stdio.h>
//int main()
//{
//	int a = 9;
//	printf("%f", a);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char a = 'w';
//	char* b = &a��//�ַ�ָ�����
//	*b = 'w';
//	return 0;
//} 

//#include<stdio.h>
//int main()
//{
//	const char* pc = "hello";
//	printf("%s\n", pc);
//	return 0;
//}

//ָ������
//#include<stdio.h>
//int main()
//{
//	const char* arr[4] = { "abc","edf","ghi","mno" };//����ַ�ָ�������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	return 0;
//}
//��ָ��������ģ���ά����
//#include<stdio.h>
//int main()
//{
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 2,3,4,5 };
//	int arr3[4] = { 6,7,8,9 };
//	int arr4[4] = { 0,0,0,0 };
//
//	int* arr[4] = { arr1,arr2,arr3,arr4 };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10];
//	int (*pa)[10] = &arr;
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	return 0;
//}

//����ָ����ʶ�ά����

//#include<stdio.h>
//
//void print(int(*p)[4], int a, int b)
//{
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{
//		int k = 0;
//		for (k = 0; k < b; k++)
//		{
//			printf("%d ", (*(p + i))[k]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//	print(arr, 3, 4);
//	return 0;
//}

//#include<stdio.h>
//void test(int arr[]){}
//void test(int arr[10]){}
//void test(int *arr){}
//void test2(int *arr[20]){}
//void test2(int **arr[20]) {};
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr1[20] = { 0 };
//	test(arr);
//	test2(arr1);
//	return 0;
//}

//#include<stdio.h>
//void test(int arr[3][5]) {}
//void test(int arr[][5]){}
//void test(int *arr) {}
//void test(int* arr[5]){}
//void test(int(*arr)[5]){}
//void test(int **arr){}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}

//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*pc)(int, int) = &Add;
//	printf("%p", pc);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int my_strlen(const char* str)
//{
//	return 0;
//}
//
//
//int main()
//{
//	//����ָ��
//	int arr[10] = { 0 };
//	int(*pa)[10] = &arr;
//	//ָ������
//	char* ch[5];
//	//����ָ��
//	int(*str)(const char*) = &my_strlen;
//	return 0;
//}

//����������ָ������
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void menu()
//{
//	printf("********************************************\n");
//	printf("*********** 1.add         2.sub  ***********\n");
//	printf("***********                      ***********\n");
//	printf("*********** 3.mul         4.div  ***********\n");
//	printf("***********       0.exit         ***********\n");
//	printf("********************************************\n");
//
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
////����ָ������
//int (*pf[5])(int,int) = { NULL,Add,Sub,Mul,Div };
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("�˳�������\n");
//			break;
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("������������:>");
//			scanf("%d %d", &x, &y);
//			ret = pf[input](x, y);
//			printf("����ǣ� %d\n", ret);
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//	return 0;
//}


//���ڿ��������stdlib�����qsort��������

//#include<stdio.h>
//#include<stdlib.h>
//
//int comper(const void*e1, const void*e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int main()
//{
//	int arr[5] = { 4,6,2,3,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), comper);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
////�ṹ������
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
////��������
//int comper(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
////��������������
//int comper1(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name , ((struct Stu*)e2)->name) ;//�����ֵ����������
//}
//
//void test2()
//{
//	struct Stu s[3] = { {"zhangsan",30},{"lisi",50},{"wanghu",33} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s,sz,sizeof(s[0]),comper1);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%s %d\n", s[i].name, s[i].age);
//	}
//}
//
//int main()
//{
//	test2();
//	return 0;
//}
//�������
//#include<stdio.h>
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j <=i; j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if(i==j)
//				arr[i][j] = 1;
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j-1] + arr[i-1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j <=i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//}

#include<stdio.h>
#include<string.h>

void left_move(char arr[], int k)
{
	int i = 0;
	int len = strlen(arr);
	for (i = 0; i < k; i++)
	{
		char tmp = arr[0];
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[len - 1] = tmp;
	}
}
int main()
{
	char arr[] = "abcdef";
	int k = 2;
	left_move(arr, k);
	printf("%s\n", arr);
	return 0;
}




