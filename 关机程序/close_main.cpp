#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<Windows.h>
int main()
{
	char input[30] = {0};
	system("shutdown -s -t 60");
	printf("请注意你的电脑将在一分钟以后关机，请输入：我是奥特曼，取消关机\n");
	while (1) {
		scanf_s("%s", input,sizeof(input));
		if (strcmp(input, "我是奥特曼") == 0)
		{
			printf("好的，你是奥特曼，等着关机吧\n");
			system("shutdown -a");
			Sleep(3000);
			printf("骗你的，关机解除了，继续玩吧，奥特曼。\n");
			break;
		}
		else {
			printf("你是不是应该打点什么,,,,,\n");
		}
	}
	return 0;
}