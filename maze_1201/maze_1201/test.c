#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int Menu()
{
	printf("=======================\n");
	printf("    1.��ʼ��Ϸ\n");
	printf("    2.������Ϸ\n");
	printf("=======================\n");
	printf("���������ѡ��");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

void Game()
{
	//��������һ��[1,100]�������
	int result = rand() % 100 + 1;
	while (1)
	{
		printf("������һ�����ֽ��бȽϣ�\n");
		int num = 0;
		scanf("%d", &num);
		if (num > result)
		{
			printf("����!\n");
		}
		else if (num < result)
		{
			printf("���ˣ�\n");
		}
		else
		{
			printf("�¶��ˣ�\n");
			break;
		}
	}
}

int main()
{



	////����������ӣ�ֻҪ������Ӳ�ͬ��ô���оͲ�ͬ��
	//srand(time(0));//����ʱ��һֱ�ڱ仯
	//while (1)
	//{
	//	int choice = Menu();
	//	if (choice == 1)
	//	{
	//		//��ʼ��Ϸ
	//		Game();
	//	}
	//	else if (choice == 2)
	//	{
	//		//������Ϸ
	//		printf("��Ϸ������\n");
	//		break;
	//	}
	//	else
	//		printf("�Ƿ����룡\n");
	//}





	////�����������룬����������Σ�
	////������ȷ����ʾ��¼�ɹ��������������ʾ����������������룬
	////����������Σ����ι������˳�����
	//int i = 0;
	//for (; i < 3; ++i)
	//{
	//	printf("���������룺");
	//	char password[1024] = { 0 };//��ʼ��password
	//	scanf("%s", password);
	//	if (strcmp(password, "123456") == 0)
	//	{
	//		break;
	//	}
	//	printf("����������������룡\n");
	//}
	//if (i < 3)
	//{
	//	printf("��¼�ɹ���\n");
	//}
	//else(printf("��¼ʧ�ܣ�\n"));
	system("pause");
}