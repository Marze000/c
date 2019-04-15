#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#include<string.h>
#include<time.h>
#define ROW 9              
#define COL 9              
#define ROWS ROW+2         
#define COLS COL+2           
#define MineNum 10     
//�˵���Ϣ
void menu();
//ִ�в˵�
void test(char mine[ROWS][COLS], int row1, int col1,
		  char show[ROWS][COLS], int row2, int col2);
//��Ϸ����
void game(char mine[ROWS][COLS], int row1, int col1,
		  char show[ROWS][COLS], int row2, int col2);
//��ӡ����
void InitBoard(char arr[ROWS][COLS], int row, int col);
//������
void SetMine(char mine[ROWS][COLS], int row, int col);
//������
int FindMine(char mine[ROWS][COLS], int row1, int col1,
			 char show[ROWS][COLS], int row2, int col2);
//�հ��㷨
void Find(char mine[ROWS][COLS], int row1, int col1, 
		  char show[ROWS][COLS], int row2, int col2,
		  int x, int y, int exam[ROWS][COLS]);

int main()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	srand((unsigned int)time(NULL));  //����������������������
	int i = 0, j = 0;
	test(mine, ROWS, COLS, show, ROWS, COLS); //���Ժ���
	system("pause");
	return 0;
}

void menu()
{
	printf("******************\n");
	printf("******1.play *****\n");
	printf("******0.exit *****\n");
	printf("******************\n");
}

//���������������ӡ��Ϣ�ģ���ӡһ���򵥵Ĳ˵���

//ִ�в˵�
void test(char mine[ROWS][COLS], int row1, int col1,
	      char show[ROWS][COLS], int row2, int col2)
{
	int m = 0;
	do
	{
		menu();
		scanf_s("%d", &m);
		switch (m)
		{
		case 1:
			game(mine, row1, col1, show, row2, col2);
			break;
		case 0:
			exit(0);
		default:
			printf("�������\n");
		}
	} while (m);
}

void game(char mine[ROWS][COLS], int row1, int col1,
		  char show[ROWS][COLS], int row2, int col2)
{
	int i = 0, j = 0;
	int flag = 0;
	int count = 0;
	for (i = 0; i < row1; i++)
	{
		for (j = 0; j < col1; j++)
		{
			mine[i][j] = '0';
		}
	}
	for (i = 0; i < row2; i++)
	{
		for (j = 0; j < col2; j++)
		{
			show[i][j] = '*';
		}
	}
	SetMine(mine, row1, col1);
	while (1)
	{
		InitBoard(mine, row1 - 1, col1 - 1);
		printf("------------------------\n");
		InitBoard(show, row2 - 1, col2 - 1);
		flag = FindMine(mine, row1, col1, show, row2, col2);
		if (flag == 0)
		{
			printf("ɨ��ʧ�ܣ�\n");
			InitBoard(mine, row1 - 1, col1 - 1);
			break;
		}
		else if (flag == 1)
		{
			for (i = 1; i < row2 - 1; i++)
			{
				for (j = 1; j < col2 - 1; j++)
				{
					if (show[i][j] == '*')
					{
						count++;
					}
				}
			}
			printf("count == %d\n", count);
			if (count == MineNum)
			{
				printf("ɨ�׳ɹ���\n");
				break;
			}
			else
			{
				count = 0;
			}
		}
	}
}

//�����������Ϸ�����岿�֡���һ��ʼ������һ����־����flag��һ����������count��֮��
//ʹ������������forѭ���Զ�ά��������˳�ʼ����mine����ʼ��Ϊȫ��0��, show����ʼ����ȫ��*����
//Ȼ��ʹ����SetMine()������mine���������׻�����ʹ�ø�һ��while��ѭ������ʼ����ɨ����Ϸ��
//��whileѭ��������������InitBoard()������mine��show���д�ӡ��
//FindMine������ɨ�׺��������᷵��һ��ֵ���������ը���ˣ����᷵��0��
//����㿪����û�д����׵Ļ������᷵��1��
//���������flag == 1ʱ����ʼ����ɨ�裬����show�л�ʣ�¼����Ǻţ�
//���ʣ��10���Ǻţ���ô��֤��ɨ���ˣ���ʱ��ӡ��ʤ��Ϣ����break����ѭ����
//���û��ʣ��10���Ǻţ���ô�����е�count��Ϣ����������������ϲ��衣

//��ӡ��庯��
void InitBoard(char arr[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i < row; i++)
	{
		printf("%d ", i);
		for (j = 1; j < col; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
}


//����һ���򵥵Ĵ�ӡ������show��mine�����Թ���ʹ�á���һ��forѭ����ӡ���������ꡣ
//�ڶ���forѭ���У���һ��printf������ӡ���������ꡣ

//���׺���
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int m = 0, n = 0;
	int count = 0;
	while (count < MineNum)
	{
		m = rand() % 9 + 1;
		n = rand() % 9 + 1;
		if (mine[m][n] == '0')
		{
			mine[m][n] = '1';
			count++;
		}
	}
}


//����һ�����׺�����������Ҫ�õ����������ʹ��m��n������������
//whileѭ������ֹ������������ count �ﵽԤ������ MineNum ��rand() % 9 + 1��Ϊ�˲���1~9���������
//if��䱣֤���׵������ظ���

//ɨ�׺���
int FindMine(char mine[ROWS][COLS], int row1, int col1,
		     char show[ROWS][COLS], int row2, int col2)
{
	int m = 0, n = 0;
	int flag = 0;
	static int fflag = 0;
	int a1 = 0, a2 = 0;
	int exam[ROWS][COLS] = { 0 };
	while (1)
	{
		scanf_s("%d %d", &m, &n);
		if ((m >= 1 && m <= 9) && (n >= 1 && n <= 9))
		{
			break;
		}
		else
		{
			printf("����˰ɣ�\n");
		}
	}
	if (mine[m][n] == '0')
	{
		Find(mine, row1, col1, show, row2, col2, m, n, exam);
		flag = 1;
	}
	if (mine[m][n] == '1' && fflag > 0)
	{
		flag = 0;
	}
	if (mine[m][n] == '1' && fflag == 0)
	{
		mine[m][n] = '0';
		a1 = m;
		a2 = n;
		while (1)
		{
			m = rand() % 9 + 1;
			n = rand() % 9 + 1;
			if (mine[m][n] == '0'&& m != a1 && n != a2)
			{
				mine[m][n] = '1';
				flag = 1;
				break;
			}
		}
		fflag = 1;
	}
	return flag;
}

//����һ��ɨ�׺�����m��n����������λ�ã�flag �Ǳ�־������fflagҲ�ǲ��ױ�־������
//a1��a2���ݴ�m��n��λ�õġ�exam��һ����־���飬������Find�����������á�
//��һ��while��ѭ������������ȷ��������ȷ��������Ϣ����ȷ�������m��n����������ȷ�ĺ�
//��ʼ�������ݣ���һ��if��䣬�����һ��û�в��ף���ô��ִ��Find�հ׵��㷨������ǲ�����Χ������
//�ڶ���if����У�������ǵ�һ�²��ף���ô���ᷴ����ը��Ϣflag == 0��������if����У�
//�����һ�²����ˣ���ô��������ƶ�����ĵط�ȥ��
//�ƶ��ķ����ǽ����׵ص�����a1��a2��¼������Ȼ�������������
//������������� ���� ���� ��ͬ�� m��n������ĵط���

//�հ��㷨����
void Find(char mine[ROWS][COLS], int row1, int col1, 
		 char show[ROWS][COLS], int row2, int col2, 
		 int x, int y, int exam[ROWS][COLS])
{
	int count = 0;

	if (x <= 0 || y <= 0 || x >= row1 - 1 || y >= col1 - 1)
	{
		return;
	}
	count = mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + 
		    mine[x][y - 1] + mine[x][y + 1] + mine[x + 1][y - 1] +
		    mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0';
	
	show[x][y] = '0' + count;

	if (show[x][y] == '0' && exam[x][y] == 0)
	{
		if (show[x][y] == '0')
		{
			exam[x][y] = 1;
		}
	//�����������ȵ㿪����ɫ�������ĵ㣬��ô������ ��x - 1, y - 1��˳ʱ�뷽��ʼ̽����
	//��ʱ���ǽ��뵽��һ��if�У����������exam�õ�Ĭ��Ϊ0����ʾ����û�в���������
	//���������õ�exam���Ӧ�ĵط��ĳ�1��Ȼ������һ��Find()̽����Ҳ����x - 1, y - 1��
	//���ڸõ��ǡ� 1 ��������return�����ص��ϲ㡣��ʱ������ִ�еڶ���Find()��Ҳ���� x - 1, y��
	//���ڸõ��ǡ� 0 ���������������Ϊ���ģ�����̽�����Ժ�ɫΪ��ǵľŹ��񣩡�
	//̽��ǰ�������ı��λ��Ϊ�� 1 ������ʾ�����Ѿ������˸õ��̽����
	//�Ըõ� Ϊ x, y������x - 1, y - 1�ǡ� 0 ���������Ի�ɫ�Ź���̽����
	//�Դ�����ֱ������������ֹͣ����������Χ�в�Ϊ �� 0 ��������ֹͣ��
	//����Ϊ�˷�ֹ�����Ź����໥ѭ�������������exam��־λ��
	//���ӾŹ����ٴ�̽�����ϸ������� 0 ��ʱ��
	//�������Ӧ��exam��־Ϊ1������Խ���ϸ������� 0 ����������̽���򷵻ء�

		Find(mine, row1, col1, show, row2, col2, x - 1, y - 1, exam);
		Find(mine, row1, col1, show, row2, col2, x - 1, y, exam);
		Find(mine, row1, col1, show, row2, col2, x - 1, y + 1, exam);
		Find(mine, row1, col1, show, row2, col2, x, y - 1, exam);
		Find(mine, row1, col1, show, row2, col2, x, y + 1, exam);
		Find(mine, row1, col1, show, row2, col2, x + 1, y - 1, exam);
		Find(mine, row1, col1, show, row2, col2, x + 1, y, exam);
		Find(mine, row1, col1, show, row2, col2, x + 1, y + 1, exam);
	}
	else
	{
		return;
	}
}