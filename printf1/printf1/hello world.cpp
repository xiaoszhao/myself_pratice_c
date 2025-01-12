//#define _CRT_SECURE_NO_WARNINGS
//
//
//#include<stdio.h>
//int Add(int x,int y) Add代表添加相加，自定义函数
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
//#define _CRT_SECURE_NO_WARNINGS       两个数相加
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf_s("%d%d", &num1, &num2);    添加地址，即添加空位，带入上面数据
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
//	int num =Add(num4,num5,num6);       #num算出来的数不对，但我不知道哪里出错，以后再看
//	printf("sum=%d\n",sum);
//	printf("num=%d\n,num");
//	return 0;
//
//}


//#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	printf("你好啊!\n");
//		return 0;
//}

//#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };下标0对应的为1      第N个数对应的下标为N-1
//	int i = 0;
//	while (i < 10)      while(**)后不要加任何字母或标点，可能导致出现的不是想要的东西或者导致空白
//	{printf("%d", arr[i]);    整形，arr里从下标0开始对应的元素依此打印出来
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
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };  #无法列举出来1-10的数字，打开指令后是空白
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
//	printf("你好啊！我很高兴遇见你！\n");
//	printf("你为什么要来这里？(1）>:");
//	scanf_s("%d", &input);
//	if (input == 1)
//		printf("就你，你狠厉害吗？我不是瞧不起你，你能把我怎么样？(1)>:");
//  scanf_s("%d",&inset);            地址必须都有，要不然下一个命令无法执行，正所谓一个空一个答案
//	if (inset == 1)
//		printf("我可以鸡你太美！\n");   
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//条件操作符,三目操作符，a>b是真的，取a 假的，取b
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
//	printf("%d\n", &sum);//打印出sum的地址
//	double a = 3.14;
//	double* b = &a;
//	*b = 5.3;   *解引用操作符/间接访问操作符
//	printf("%lf\n", a);//打印double用lf
// printf("%ld\n",*sum);
//	return 0;
//}

//#include<stdio.h>
//struct People 
//{
//	char name[7];
//	short life;
//	char school[19];
//	char kid[28];//属性
//	char weapon[7];//武器
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
//	printf("要开始游戏吗?(1)>:" );
//	scanf_s("%d", &input);
//	if (input == 1)
//		printf("正在为您分配人物简介,请输入1完成人物分配。(1)>:%d\n");
//	scanf_s("%d", &output);
//	struct People b1 = { "赌神",99,"赌神塑造学校","持续增加自身幸运值","卡牌","神之一手" }; //必须全是用英文写出来的，要不然可能会运行不出来，标点符号也必须使用英文
//	printf("名字:%s\n",b1.name);
//	printf("生命:%d\n", b1.life);
//	printf("学校:%s\n", b1.school);
//	printf("属性:%s\n", b1.kid);
//	printf("武器:%s\n", b1.weapon);
//	printf("技能:%s\n", b1.skill);
//	printf("你是否开始赌博？输入1开始赌博...（1)>:");
//	scanf_s("%d", &sumput);
//	b1.life = 88;
//	printf("由于赌博身体机能持续下降，生命值变为%d年\n", b1.life);
//	{int a;
//begin: scanf_s("%d", &a);
//	printf("你是否还要继续赌博？输入1继续赌博，并发挥技能...(1/2)>:");
//	scanf_s("%d", &gatput);
//	if (gatput == 1)
//		printf("你失败了，欠了一屁股债，抑郁身亡,输入1重新选择...（1）>:");
//	else
//		printf("克服了赌博，从此走上光明大路并创造了一番事业。%d\n");
//	scanf_s("%d", &aput);//不知道如何从184行返回到179行继续运行
//	if (aput == 1)
//		goto begin; }//利用这个进行返回运行，实现再次运行179行代码
//	
//	return 0;
//
//
//}

//#include<string.h>//未识别字符，string.h后不加s,后面使用strcpy必须开头说明源文件，才可以使用
//#include<stdio.h>
//struct People
//{
//	char name[7];
//};
//int main()
//{
//	struct People b1={"C++"};
//	strcpy_s(b1.name, "phthy");//strcpy字符未定义,得使用strcpy_s，数组改名不能像数字符号一样，在结构体中修改得使用strcpy_s
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
//	printf("%s\n", (* aq).name);//解引用操作符
//	printf("%s\n", aq->name);//简易写法
//	printf("%s\n", q1.name);//正常写法，直接引用
//	return 0;
//
//}

//#include<stdio.h>                          //语法结构之分支语句（选择语句）（if语句）
//int main()
//{
//	int age = 10;          //if(age>=18&&age<=28)，不能用（18<=age<=28),当age取10时，18<=10为假不成立取0，而0<28为真，这样的话它必定为真，有问题，代码如同逻辑一步一步来
//	if (age < 10) //这里age是个变量可以修改，出来的语句也就不同
//		printf("你该努力了。%d\n");
//	else if (age > 18)       //else if 可以使用多次
//		printf("不努力就晚了。%d\n");
//	else
//		printf("你真是完蛋了。%d\n");
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	printf("请输入一个数。>:");
//	scanf_s("%d", &i);
//	{if ((i % 2) == 1)
//		printf("为奇数\n");
//	else
//		printf("为偶数\n"); }
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
//switch (day)                      //switch语句与default 语句，case语句
//{                                 //switch后必须是整形，变量必须为int形式，case后面必须为常量
//    case 1:                       //一般case后加break,代表结束，后面的东西就不会再出现
//	case 2:                         //相比else if更加简便与实用，不用特别麻烦
//	case 3:
//	case 4:
//	case 5:
//		printf("该工作了，今天是工作日。\n");
//		break;
//	case 6:
//	case 7:
//		printf("芜湖，放假就是玩。\n");
//		break;
//default:
//	printf("你在输入什么鬼东西？\n");
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
//	for (int i = 1;i<11;i++)   //记住，这里中间用;连接，用，可能会出现无限不循环的东西，让你眼花缭乱
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
//	scanf_s("%d", &day);       //千万别忘记加&，取地址好运行，要不然同样出bug无法运行成功
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("好好好。\n");  //break必须加上，不加的话后面会全出现，出现bug
//		break;
//	case 6:
//	case 7:
//		printf("不好不好不好\n");
//		break;
//	default:                  //default代表除提到的之外填入就会出现下面的内容
//		printf("错误啊错误啊\n");
//		break;
//	}
//			return 0;
//	}
//	
// 	
//#include<stdio.h>
//int main()
//{
//	int ch = 0;                   //getchar获取字符，putchar输出字符
//	while ((ch = getchar())!= EOF)//获取字符放到ch里，如果ch不等于EOF字符，则输出ch，即使输入EOF也不会停止，按Ctrl+z可以终止程序
//		putchar(ch);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{   
//	
//	int ch = putchar();  //这是个错代码
//	putchar();
//	printf("%c\n", ch);
//	return 0;
//
//}

//#include<stdio.h>
//int main()
//{
//	int ret = 0;
//	char password[20] = { 0 };     //这是个错代码，无论输什么数，结果还是输入错误
//	printf("请输入密码...:>");       //因为当输入数字时，password提取缓冲区里的数字，实际上后面还剩个\n，\n直接被getchar识别，!=y,所以直接取消确认
//	scanf_s("%c\n", password);     //要想解决此事，需要利用getchar()把缓存区里的数提取干净，这样才能继续运行
//	printf("请确认密码是否正确。(Y/N):>");//但只用一个getchar()无法保证，比如输入123 abc；这样123被password提取，空格被getchar提取，还剩个abc被第二个geetcgar提取，!=y,所以还是会直接出现确认失败
//	ret = getchar();
//	if (ret == 'Y')
//		printf("确认成功");
//	else
//		printf("取消确认");
//		return 0;
//
//
//}                            //既然有bug就需要改正，下一个就是该整改后的

//#include<stdio.h>
//int main()
//{
//	int ret = 0;
//	int i = 0;
//	char password[20] = { 0 }; 
//	printf("请输入密码>:");
//	scanf_s("%c", password);
//	while ((i =getchar()) != '\n')  //这里是赋值的意思应该，当缓冲区输入没有数的时候，\n不等于\n时候，为假，循环停止，开始下面的运行
//	{
//		;
//	}
//	printf("请确认密码是否正确(Y/N)>:");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("确认成功....\n");
//	else
//		printf("取消确认....\n"); 
//	return 0;
//		
//
//}

//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)   //不等于EOF，则输出
//	{
//		if (ch < '0' || ch>'9')   // ISK表中小于0或者大于9输入的数本次循环跳过，开始识别下一次循环
//			continue;
//		putchar(ch);              //如果在范围以内，则输出字符
//    }
//	return 0;                   //只会输出数字字符，其他非数字字符不会输出
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;            //for循环与while循环中的break作用相同，都是终止循环进行，或者说是停止循环
//	while (i <= 10)       //但continue却不同，根据调整的位置不同也会出现不同情况，如果如左代码一样，那么进入死循环输出为01234，而for中则会输出012346789
//	{   
//	                      //contine中i++放前面则会打出来1234567891011，break中还是1234
//		if (i == 5)
//			/*break;*/
//		continue;
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}

////for循环中
////for(表达式1；表达式2；表达式3；）
////表达式1：表示初始化部分，用于初始化循环变量，该循环的初始值
////表达式2：表示条件判断部分，用于判断循环终止，也就是限制范围或者循环条件
////表达式3:表示调整部分，用于循环条件的调整，例如i++什么之类的，或者i+=2.......

//#include<stdio.h>
//int main()
//{   
//	int i[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a = 0;
//	for (a = 0; a <10; a++) //此处建议前闭后开的写法，不可以在for内部修改循环变量，防止循环失去控制
//	{
//		printf("%d", i[a]);
//	}
//	return 0;
//}

//#include<stdio.h>    //两个循环变量，但不怎么常见
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2|| y < 5; x++, y++)//符号，||都是或者的意思，有一便可，而&&是并且的意思，缺一不可
//	{
//		printf("嗨嗨嗨\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int z = 0;
//	for (i = 0, z = 0; z = 0; i++, z++) //这里有个错误，这里z后边是赋值符号，把0赋值给了z，所以这里z为假，判断为假，循环无法进去无法进行
//		z++;                            //不管前面为什么，0为假循环进不去，因此这个循环循环00次
//	return 0;                           //但如果赋值为非零，则为真，循环永远进行为死循环
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("hehe\n");     //do while循环，打印是个hehe
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
//			 q=q * i; //这里q先等于1*i，随着i的增加，q也随之增加，一层叠一层起到了阶乘的效果
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
//	for (i = 1; i <= a; i++)//阶乘与阶乘各个项相加
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
//	printf("%d", sum);  //do while语句进行阶乘，当printf放到大括号里面时，打印出来的是每次循环的乘积，而放到外面才能打印出最终结果
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
//	while (a <= b);       //do while中阶乘与阶乘相加，其中换行可以用后缀\n或者在想换行的句子后面加上puts("");即可实现换行。
//	printf("%d", sum);    //各有各自的好处，各有各的方法和语法，值得深究，循环中选择合适的情景状态进行搭配才能实现更简便更高效的代码
//	puts("");
//	printf("%d", c);
//	return 0;
//}
 
//#include<stdio.h>             //输入一个数，检查这组数里面是否有这个数字，并打印出它的下标
//int main()
//{   
//	int b = 0;
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = sizeof(arr) / sizeof(arr[0]);  //总字符除以单个的等于总个数
//	int a = 0;
//	scanf_s("%d", &a);
//	for (b = 0; b < i; b++)
//	{   
//		if (a==arr[b])                       // 利用arr[]中的下标——真正的数永远比下标大1，以循环模式，循环小于十次，则数组以内都能完成第一个程序，
//		{
//			printf("找到了,下标为：%d\n", b);  
//			break;                        //必须加break如果不加，则会把下面的也一起打印出来，循环没有停止，导致最后成立
//		}
//	}
//	if (b ==i)
//		printf("找不到\n");
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
//			printf("找到了，下标是:%d\n", i);//找到数字为7的下标并打印出来
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 999;    
//	printf("%p\n", a);//以地址方式打印，C语言中%p用来输出指针类型自身的值。 也就是说 %p用来输出地址。
//	printf("%x\n",a);//以十六进制的方式打印出来
//	printf("%s\n", a);//%s为字符串的意思，此代码中打印不出来，因为他不是字符串
//}


//#include<stdio.h>   //一串字符中把大写转换为小写，或者转换成大写
//int main()
//{
//	char ch[80] = "123abcdEFG*&";//一组字符，其中包括这些
//		int j;
//		puts(ch);
//		for (j = 0; ch[j] != '\0'; j++)
//			if (ch[j] >= 'A' && ch[j] <= 'Z') 
//				ch[j] = ch[j] + 'e' - 'E';// 一个字母对应的大写和小写之间的ASCII码值相差32，而且小写的大于大写的。所以题中'e'和'E'之间的ASCII码值相差32（ch[j] + 'e' - 'E'相当于ch[j] + 32）。一个字母从大写转化为小写就是在它自身上 + 32，小写转大写则是 - 32
//		puts(ch);
//		return 0;
//
//}

//#include<stdio.h>
//int main()         //输入一个大写的字母转换成小写的字母，小写比大写字母多32
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
//int main()         //输入一个小写的字母转换成大写的字母
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

//#include<stdio.h>                   //代码一直进行如果不输入0的话，把大写变成小写，把小写变成大写
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
//	                                          //输入一个数，看看这里面是否有这个数，利用了二分查找算法（折半查找算法）
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };    //里面的元素不一定是按顺序排列的，有可能是毫无顺序可言
//	int a = 0;
//	scanf_s("%d", &a);
//	
//    int c = sizeof(arr) / sizeof(arr[0]);  //计算几个元素
//	int left = 0;                         //左下标为0，意味着左下标从0开始
//	int right = c - 1;                    //右下标为元素个数减一，因为下标是从零开始的
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
//			printf("找到了,下标是：%d\n", mid);
//			break;
//		}
//		
//	}
//	if (left > right)
//	{
//		printf("找不到。\n");
//	}
//	return 0;
//
//
//		
//}


//#define CRT _SECURE_NO_WARNINGS   //渐变款打印出welcome to my word
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
//	int  right = strlen(arr1)-1;//这里直接用字符串的长度减一就是对应的下标，要不然用sizeof(arr1)/sizeof(arr[0])
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];//arr2左边的换成arr1中左边的
//		arr2[right] = arr1[right];//arr2右边的换成arr2中右边的
//		printf("%s\n", arr2);//打印arr2
//		Sleep(500);//头文件是windows.h，意思是晚或者中间间隔500毫秒在进行下一次打印
//		left++;
//		right--;
//		system("cls");//意思是每次清除打印出来的东西，头文件是stdlib.h
//		
//     }
//	printf("%s\n", arr2);//结尾再打印一下arr2，显示全部，防止直接退出
//	return 0;
//}

//#include<stdio.h>       //从“不想见到你”到“非常喜欢你”的间隔0.5秒的逐渐变换，利用多个源文件实现这一过程
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	char arr1[] = "我非常喜欢你！！！";
//	char arr2[] = "我不想见到你！！！";
//	int left = 0;
//	//int right = strlen(arr1) - 1;
//	int right = sizeof(arr1) / sizeof(arr1[0])-2;//这里用这个代码也可以进行
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];//这里的位置关系到由谁变换到谁
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);
//		left++;
//		right--;                 //这个代码跟上面的代码差不多，都是利用了循环加变换改变的原理
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
//		printf("请输入密码>:\n");
//		scanf_s("%s", password,20);//发生了指针越界。相比 scanf 为了线性安全，scanf_s 要求在录入字符串的时候都要指定缓冲区的大小。所以解决方案就是指定缓冲区的大小。后面加上一个大于等于一的数字都可以运行，要不然报错运行不了
//		if (strcmp(password ,"123456") == 0)//这里是比较前者与后者之间的大小，如果一样那么就取零，如果前者大于后者，会返回一个大于零的数传给strcmp，如果前者小于后者，会返回一个小于0的数传给strcmp
//		{
//			printf("登录成功，恭喜。\n");
//			break;
//		}
//		else
//		{
//			printf("输入错误请重新输入>:");
//			system("cls");        //清除本次循环   变为空白  cls氯离子
//		}
//	}
//	if (a == 3)
//		printf("输入密码错误三次，退出程序\n");
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS  //这个代码有问题，但不知道哪里错了，到时候再看看视频
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
//    printf("好好学习，天天向上");
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
//	printf("赵阳 2310507238\n");
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
//	printf("赵阳 2310507238\n");
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
//	printf("赵阳 2310507238\n");
//	float x;
//	while (1)
//	{
//		scanf_s("%f", &x);
//		if (x >= 90 && x <= 100) printf("成绩等级：A\n");
//		if (x >= 80 && x < 90) printf("成绩等级：	B\n");
//		if (x >= 70 && x < 80) printf("成绩等级：	C\n");
//		if (x >= 60 && x < 70) printf("成绩等级：D\n");
//		if (x >= 0 && x < 60) printf("成绩等级：E\n");
//	};
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//
//	float x;
//	printf("赵阳 2310507238\n");
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
//				printf("成绩等级：E\n");
//				break;
//			case 6:printf("成绩等级：D\n");
//				break;
//			case 7:printf("成绩等级：C\n");
//				break;
//			case 8:printf("成绩等级：B\n");
//				break;
//			case 9:printf("成绩等级：A\n");
//				break;
//			case 10:printf("成绩等级：A\n");
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
//	printf("姓名\t        年龄\t身高\t年级\n");
//	struct list MyStruct = { "xiaohong",10,1.99,"three" };
//	struct list* p1 = &MyStruct;
//	printf("%s\t%d\t%.2f\t%s", p1->name, p1->age,  p1->height, p1->senior);
//	return 0;
//
//}

//#include<stdio.h>
//#define P 3
//#define S(a) P*a*a          //   3*3+5*3+5            a没有括号,直接带入运算即可
//#define C(b) P*(b)*(b)      //   3*(3+5)*(3+5)        b有括号，括号带上进行运算
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


//struct link {									//这则代码片段有问题。运行不了。
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
//	printf("自从1970-01-01起，经历的秒数为%ld\n", seconds);
//	return 0;
//}

//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t curtime;
//	time(&curtime);
//	printf("现在的时间为：%s", ctime(&curtime));
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
//	myVector.push_back(5);  //在末尾加上这个数
//	int z = myVector[0];
//	int size1 = myVector.size();
//	int size = myVector2.size();//获取元素个数
//	int x = myVector2.at(1);   //获取第二个元素
//	int y = myVector2[0];      //获取第一个元素
//	printf("myVector中有%d个元素,它是%d。\n", size1, z);
//	cout << "myVector2中有{0}个元素，它的第一个元素是{1},它的第二个元素是{0}。" << y << x << endl;
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
//		{                                        //空间内索引与空间元素相对应，超出索引即溢出，访问不了
//			cout << element << " ";
//		}
//	}
//	
//	S1.erase(S1.begin() + 2);//删除第三个元素
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
//	std::cout << "现在有多少个元素:" << S.size() <<std::endl;
//	std::cout << "这些元素分别是：";
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
//	std::cout << "删除后现在有多少个元素:" << S.size() << std::endl;
//	std::cout << "删除后的这些元素分别是：";
//	for (auto element : S)
//	{
//		std::cout << element << " ";
//	}
//	std::cout << "*******************************************" << std::endl;
//	S.clear();
//	std::cout << "清空后现在有多少个元素:" << S.size() << std::endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	cout << "第一个数字是{0}，第二个数字是{1}，第三个数字{2}。" << a << b << c << endl;
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//#define MSIZE 20
//#define OK 1
//#define ERROR 0
//
//typedef int Status;    //Status是函数的类型，其值是函数结果状态代码，如OK等
//typedef int ElemType;  //ElemType的类型根据实际情况而定，这里假定为int
//
//typedef struct
//{
//	ElemType* elem;
//	int length;
//}SqList;
//
//Status InitList(SqList* L)   //创建一个空列表
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
//	if (i < L->length) {  //如果删除位置不在最后位置
//	for (k = i; k < L->length; k++) {
//		L->elem[k - 1] = L->elem[k];
//	}
//}
//L->length--;    //长度减1
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
//	printf("%zd\n", sizeof(float *));  ////都是4
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

//素数打印

//#include <stdio.h>
//#include <stdbool.h>
//bool idPrime(int num)
//{
//	//1不是素数
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
//判断闰年是否
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

//找出两个数的最大公因数
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
//        min = m;     //假设最大公约数就是m和n的较小值
//    while (1)
//    {
//        if (m % min == 0 && n % min == 0)
//        {
//            printf("最大公约数就是：%d\n", min);
//            break;
//        }
//        min--;
//    }
//    return 0;
//
//}


//for语句99乘法口诀

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
//函数线帧测试
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


//操作符
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
//	int b = a << 2;   //左移
//	int c = a >> 2;   //右移 
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	//正数的原码、反码、补码都是相同的
//	//整形占4个字节（32bit)
//	//00000000000000000000000000001010 -原码
//	//00000000000000000000000000001010 -反码
//	//00000000000000000000000000001010 -补码
//
//	int b = -10;
//	//负数的原码按照一个数的正负，直接写出它的二进制就是原码
//	//负数的反码、补码需要计算
//	//10000000000000000000000000001010 -原码
//	//11111111111111111111111111110101 -反码
//	//11111111111111111111111111110110 -补码
//}
//#include <stdio.h>
//int main()
//{
//	int a = -10;
//	int b = a << 1;   //左移一位
//	printf("%d\n", b);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = -1;
//	int b = a >> 1;   //右移一位
//	printf("%d\n", b);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a ^ b;
//	//内存中补码进行计算
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
//	//结构体成员
//	char name;//名字
//	int age;//年龄
//	char sex[10];//性别
//	float score;//成绩
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
//// 函数声明
//void reverseString(char* str);
//
//int main() {
//    char* input;
//    size_t length;
//
//    // 读取输入字符串
//    printf("请输入一个字符串: ");
//    // 使用 getline() 来读取包含空格的整行输入
//    getline(&input, &length, stdin);
//
//    // 调用函数反转字符串
//    reverseString(input);
//
//    // 输出反转后的字符串
//    printf("反转后的字符串: %s\n", input);
//
//    // 释放动态分配的内存
//    free(input);
//
//    return 0;
//}

// 反转字符串的函数实现
//void reverseString(char* str) {
//    int length = strlen(str);
//    int start = 0;
//    int end = length - 1;
//    char temp;
//
//    // 交换字符直到中间位置
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
//// 函数声明
//int findFirstUniqueChar(const char* str);
//
//int main() {
//    const char* testStr = "leetcode";
//    int position = findFirstUniqueChar(testStr);
//    printf("第一个只出现一次的字符的位置是: %d\n", position);
//
//    const char* testStr2 = "loveleetcode";
//    position = findFirstUniqueChar(testStr2);
//    printf("第一个只出现一次的字符的位置是: %d\n", position);
//
//    const char* testStr3 = "aabbccddeeff";
//    position = findFirstUniqueChar(testStr3);
//    printf("第一个只出现一次的字符的位置是: %d\n", position);
//
//    return 0;
//}
//
//// 找到第一个只出现一次的字符并返回其位置的函数实现
//int findFirstUniqueChar(const char* str) {
//    if (str == NULL || *str == '\0') {
//        return 1; // 如果字符串为空，则返回1
//    }
//
//    int charCount[256] = { 0 }; // 用于记录每个字符出现的次数，假设只处理ASCII字符
//    int length = strlen(str);
//
//    // 统计每个字符出现的次数
//    for (int i = 0; i < length; i++) {
//        charCount[(unsigned char)str[i]]++;
//    }
//
//    // 查找第一个只出现一次的字符
//    for (int i = 0; i < length; i++) {
//        if (charCount[(unsigned char)str[i]] == 1) {
//            return i; // 返回第一个只出现一次的字符的位置
//        }
//    }
//
//    return 1; // 如果没有找到只出现一次的字符，则返回1
//}


//#include <stdio.h>

// 函数声明
//int singleNumber(int* nums, int numsSize);
//
//int main() {
//    int nums[] = { 4, 1, 2, 1, 2 };
//    int numsSize = sizeof(nums) / sizeof(nums[0]);
//    int result = singleNumber(nums, numsSize);
//    printf("只出现一次的数是: %d\n", result);
//
//    return 0;
//}
//
//// 找出只出现一次的数的函数实现
//int singleNumber(int* nums, int numsSize) {
//    int result = 0;
//    for (int i = 0; i < numsSize; i++) {
//        result ^= nums[i]; // 对每个元素进行异或运算
//    }
//    return result; // 返回只出现一次的数
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//// 函数声明
//int* mergeSortedArrays(int* A, int m, int* B, int n, int* mergedSize);
//
//int main() {
//    int A[] = { 1, 3, 5, 7 };
//    int B[] = { 2, 4, 6, 8 };
//    int m = sizeof(A) / sizeof(A[0]);
//    int n = sizeof(B) / sizeof(B[0]);
//    int mergedSize = m + n;
//
//    // 分配足够的内存来存储合并后的数组
//    int* mergedArray = (int*)malloc(mergedSize * sizeof(int));
//    if (mergedArray == NULL) {
//        fprintf(stderr, "内存分配失败\n");
//        return 1;
//    }
//
//    // 合并数组
//    mergeSortedArrays(A, m, B, n, &mergedSize); // 注意：这里mergedSize是输出参数，但实际上我们不需要修改它的大小
//
//    // 输出合并后的数组
//    printf("合并后的有序数组: ");
//    for (int i = 0; i < mergedSize; i++) {
//        printf("%d ", mergedArray[i]);
//    }
//    printf("\n");
//
//    // 释放分配的内存
//    free(mergedArray);
//
//    return 0;
//}
//
//// 合并两个已排序数组的函数实现
//int* mergeSortedArrays(int* A, int m, int* B, int n, int* mergedSize) {
//    int* mergedArray = (int*)malloc((*mergedSize) * sizeof(int));
//    if (mergedArray == NULL) {
//        fprintf(stderr, "内存分配失败\n");
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
//    // 将剩余的元素（如果有的话）添加到合并后的数组中
//    while (i < m) {
//        mergedArray[k++] = A[i++];
//    }
//    while (j < n) {
//        mergedArray[k++] = B[j++];
//    }
//
//    // 实际上，我们不需要修改mergedSize，因为它在调用时已经正确设置为m+n
//    // 但为了符合函数签名，我们还是通过指针传递了它（尽管这里没有用到它的修改功能）
//    // *mergedSize = k; // 如果需要，可以取消注释这行代码来验证mergedSize的值
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

//打印菱形
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
//	}//上三角
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

//水仙花
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
//	printf("%d\n", *p.a);//这是一种错误的写法
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
//一个数组里面排序后左边都是奇数，后面都是偶数
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

//实现strcpy功能
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

//实现strlen功能
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

//判断大小端问题

//#include<stdio.h>
//int main()
//{
//	int a = 1;              //0x00 00 00 01
//	char* p = (char*)&a;    //0x01 00 00 00或是0x00 00 00 01
//	if (1==*p)
//	{
//		printf("小端");
//	}
//	else
//		printf("大端");
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
//	char* b = &a；//字符指针变量
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

//指针数组
//#include<stdio.h>
//int main()
//{
//	const char* arr[4] = { "abc","edf","ghi","mno" };//存放字符指针的数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	return 0;
//}
//用指针数组来模拟二维数组
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

//数组指针访问二维数组

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
//	//数组指针
//	int arr[10] = { 0 };
//	int(*pa)[10] = &arr;
//	//指针数组
//	char* ch[5];
//	//函数指针
//	int(*str)(const char*) = &my_strlen;
//	return 0;
//}

//计算器函数指针数组
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
////函数指针数组
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
//		printf("请选择：>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出计算器\n");
//			break;
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个数:>");
//			scanf("%d %d", &x, &y);
//			ret = pf[input](x, y);
//			printf("结果是： %d\n", ret);
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//}


//基于快速排序的stdlib库里的qsort进行排序

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
////结构体排序
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
////年龄排序
//int comper(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
////按照名字来排序
//int comper1(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name , ((struct Stu*)e2)->name) ;//按照字典序进行排序
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
//杨辉三角
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




