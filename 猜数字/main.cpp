#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void menu()
{
	printf("********************************************\n");
	printf("***************1.��Ϸ��ʼ********************\n");
	printf("***************2.��Ϸ����********************\n");
	printf("********************************************\n");
}

void game()
{
	int num = 0;
	//srand((unsigned int)time(NULL));  //�������������������srand������һ�ξ͹��ˣ�����ҪƵ�����ã��������ɵ�������������
	int ret = rand()%100+1;//�κ�һ������99ȡģ����0~99������һ����1~100
	printf("����999�鿴��\n");
	while (1)
	{
		printf("������������\n");
		scanf_s("%d", &num);
		if (num < ret)
		{
			printf("��С��\n");
		
		}
		if (num > ret)
		{
			printf("�´���\n");
		
		}
		if (num == ret)
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
				break;
		}
		if (num == 999)
		{
			printf("��������: %d ,�㲢û�в³�����\n", ret);
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
		printf("��ѡ��:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
		{
			printf("��Ϸ��ʼ!\n");
			game();
			break;
		}
		case 2:
		{
			printf("��Ϸ������\n");
			return 0;
			break;
		}
		default:
			printf("����������������룡\n");
			break;
		}
	} while (input);
}