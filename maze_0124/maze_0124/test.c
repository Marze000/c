#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Find_finger(int arr[][3],int find)
{
	int row = 0;
	int col = 2;
	while ((col >= 0) && (row <= 2))
	{
		if (arr[row][col] == find)
		{
			return 1;
		}
		else if (arr[row][col] < find)
		{
			++row;
		}
		else
		{
			--col;
		}
		return 0;
	}



	//for (int row = 0; row < 3; ++row)
	//{
	//	for (int col = 0; col < 3; ++col)
	//	{
	//		if (arr[row][col] == find)
	//		{
	//			return 1;
	//		}		
	//	}
	//}
	//return 0;
}

int main()
{







	//const char str1[] = "abcdef";
	//const char str2[] = "bbb";
	//if (strlen(str2) - strlen(str1) > 0)
	//{
	//	printf("str2>str1\n");
	//}
	//else
	//{
	//	printf("srt1>str2\n");
	//}

	//int arr[3][3] = { 1,2,3,2,3,4,3,4,5 };
	//int find = 0;
	//printf("��������Ҫ���ҵ�����\n");
	//scanf("%d", &find);

	//if (Find_finger(arr,find))
	//{
	//	printf("�ҵ��ˣ�\n");
	//}
	//else
	//{
	//	printf("û�ҵ���\n");
	//}


	system("pause");
	return 0;
}
//���Ͼ��� 
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//
//���飺
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9
