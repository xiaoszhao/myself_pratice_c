#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void menu()
{
	printf("********************************************\n");
	printf("***************1.游戏开始********************\n");
	printf("***************2.游戏结束********************\n");
	printf("********************************************\n");
}

void game()
{
	int num = 0;
	//srand((unsigned int)time(NULL));  //来设置随机数生成器。srand函数用一次就够了，不需要频繁调用，否则生成的随机数不随机。
	int ret = rand()%100+1;//任何一个数对99取模都是0~99，而加一就是1~100
	printf("输入999查看答案\n");
	while (1)
	{
		printf("请给出你的数字\n");
		scanf_s("%d", &num);
		if (num < ret)
		{
			printf("猜小了\n");
		
		}
		if (num > ret)
		{
			printf("猜大了\n");
		
		}
		if (num == ret)
		{
			printf("恭喜你，猜对了！\n");
				break;
		}
		if (num == 999)
		{
			printf("该数字是: %d ,你并没有猜出来。\n", ret);
			break;
		}

	}


}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
		{
			printf("游戏开始!\n");
			game();
			break;
		}
		case 2:
		{
			printf("游戏结束！\n");
			return 0;
			break;
		}
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input);
}