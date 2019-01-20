#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//1.���ײ��ֵ�ͼ��0��ʾ���ǵ��ף�1��ʾ�ǵ���
//  ��Ҳ��ֵ�ͼ���� ����ʾδ���������ֱ�ʾ�ѷ�����
//2.��ʼ��
//3.��ӡ��ҵ�ͼ������ʾ����������꣬
//  У����ҵ����������Ƿ����
//4.������ף���Ϸ������
//5.���û���ף����Ҹ����ǵ�ͼ�ϵ����һ��λ�ã�ɨ�׳ɹ���  
//6.���δ���ף��ѵ�ͼλ����Ϊչ����������λ��


int Menu()
{
	printf("*************\n");
	printf("1.��ʼ��Ϸ\n");
	printf("2.������Ϸ\n");
	printf("3.��Ϸ����\n");
	printf("*************\n");
	printf("���������ѡ��\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

#define ROW 9
#define COL 9
#define MINE_COUNT 10

void Init(char show_map[ROW + 2][COL + 2],
		  char mine_map[ROW + 2][COL + 2])
{
	//1.��show_map��ʼ���ո�
	for (int row = 0; row < ROW+2; ++row)
	{
		for (int col = 0; col < COL+2; ++col)
		{
			show_map[row][col] = ' ';
		}
	}
	//2.��mine_map��ʼ����0��
	for (int row = 0; row < ROW+2; ++row)
	{
		for (int col = 0; col < COL+2; ++col)
		{
			mine_map[row][col] = '0';
		}
	}
	//3.�� mine_map��Щλ���ǵ��ף��Ų�
	int mine_count = MINE_COUNT;
	while (mine_count > 0)
	{
		//�����[1,9]
		int row = rand() % ROW + 1;
		int col = rand() % COL + 1;
		if (mine_map[row][col] == '1')
		{
			continue;
		}
		mine_map[row][col] = '1';
		--mine_count;
	}
}

void DisplayMap(char map[ROW + 2][COL + 2])//��ӡ��ͼ��
{
	//��ӡ���ϽǵĿո�
	printf("    ");

	//��ӡ�е�����
	for (int i = 1; i <= ROW; ++i)
	{
		printf("%d ", i);
	}
	printf("\n");

	//��ӡ�ϱ߿�
	for (int i = 1; i <= ROW; ++i)
	{
		printf("---");
	}
	printf("\n");

	//���д�ӡ��ͼ����
	for (int row = 1; row < ROW; ++row)
	{
		printf("%d| ", row);
		for (int col = 1; col < COL; ++col)
		{
			printf("%c ", map[row][col]);
		}
	}
}

void UpdateShowMap(char show_map[ROW + 2][COL + 2], int row,
				   char mine_map[ROW + 2][COL + 2], int col)
{
	if(row < 1 || row > ROW )
}


void Game()
{
	char show_map[ROW + 2][COL + 2];
	char mine_map[ROW + 2][COL + 2];
	Init(show_map, mine_map);//���ε�ʱ����Բ���ȡ��ַ�����������ʽת��Ϊָ�롣
	
	int safe_blank_count = 0;
	while (1)
	{
		DisplayMap(show_map);//��ӡ��ͼ
		int row = 0;
		int col = 0;
		printf("�������꣺\n");
		scanf("%d %d", &row, &col);

		if (row < 1 || row > ROW || col<1 || col>COL)
		{
			printf("�����������Ƿ������������룺\n");
			continue;
		}
		//��֤�Ƿ�ȵ�����
		if (mine_map[row][col] == '1')
		{
			printf("ɨ��ʧ��\n");
			return;
		}
		//��֤�Ƿ�ɨ�׳ɹ�
		++safe_blank_count;
		if (safe_blank_count == ROW * COL - MINE_COUNT)
		{
			printf("ɨ�׳ɹ�\n");
			return;
		}
		//���µ�ͼ��״̬
		UpdateShowMap(show_map, mine_map,row,col);
	}
}

int main()
{
	while (1)
	{
		int choice = Menu();
		if (choice == 2)
		{
			break;
		}
		else if (choice == 1)
		{
			Game();
		}
		else if (choice == 3)
		{
			printf("����ʮ���ף�ȫ��ɨ�꼴���أ�������������Ϸʧ�ܡ�\n");
			printf("С���ɣ��������������ʾ��Χ�˸��������񣨱ߣ��м����ס�\n");
			printf("�����֡�1�����򷵻����˵�\n");
			int a = 0;
			scanf("%d", &a);
		}
		else
		{
			printf("�������Ƿ�������������\n");
		}
	}



	system("pause");
	return 0;
}