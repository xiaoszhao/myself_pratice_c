#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<Windows.h>
int main()
{
	char input[30] = {0};
	system("shutdown -s -t 60");
	printf("��ע����ĵ��Խ���һ�����Ժ�ػ��������룺���ǰ�������ȡ���ػ�\n");
	while (1) {
		scanf_s("%s", input,sizeof(input));
		if (strcmp(input, "���ǰ�����") == 0)
		{
			printf("�õģ����ǰ����������Źػ���\n");
			system("shutdown -a");
			Sleep(3000);
			printf("ƭ��ģ��ػ�����ˣ�������ɣ���������\n");
			break;
		}
		else {
			printf("���ǲ���Ӧ�ô��ʲô,,,,,\n");
		}
	}
	return 0;
}