#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	//const char*str1 = "abcdef";
	//const char*str2 = "bbb";
	//if (strlen(str2) - strlen(str1) > 0)
	//{
	//	printf("str2>str1\n");
	//}
	//else
	//{
	//	printf("srt1>str2\n");
	//}

	//char *a[] = { "work","at","alibaba" };
	//char**pa = a;
	//pa++;
	//pa++;
	////pa++;
	//printf("%s\n", *pa);

	//char *c[] = { "ENTER","NEW","POINT","FIRST" };
	//char**cp[] = { c + 3,c + 2,c + 1,c };
	//char***cpp = cp;
	//printf("%s\n", **++cpp);
	//printf("%s\n", *--*++cpp + 3);
	//printf("%s\n", *cpp[-2] + 3);
	//printf("%s\n", cpp[-1][-1] + 1);


	//��ӡ�������
	// ��   |_______1 2 3 4 5 6 7 8��
	// 1    |       1              |          
	// 2    |      1  1            |          
	// 3    |     1  2  1          |        
	// 4    |    1  3  3  1        |        
	// 5    |   1  4  6  4  1      |         
	// 6    |  1  5 10 10  5  1    |          
	// 7    | 1  6 15 20 15  6  1  |         
	// 8    |1  7 21 35 35 21  7  1|          
	// ..    .......................
	int n = 1;
	printf("�������ӡ������\n");
	scanf("%d",&n);
	int row = 0;
	int col = 0;
	int arr[20][20];//������ӡ������к���
	for (row = 1; row <= n; ++row)
	{
		for (col = 1; col <= n - row; ++col)
		{
			printf(" ");
		}
		for (int col = 1; col <= row; ++col)
		{   // ��   |1  2  3  4  5....��    
			// 1    |1                        
			// 2    |1  1                     
			// 3    |1  2  1                
			// 4    |1  3  3  1               
			// 5    |1  4  6  4  1                         
			//...   |................
			if (row >= 3 && (col >= 2 && col < row))
			{
				arr[row][col] = arr[row - 1][col - 1] + arr[row - 1][col];
			}
			else
			{
				arr[row][col] = 1;
			}
			//���´�����ȫ���Ա� printf("%4d", arr[row][col]);��ȡ����
			//����дֻ��Ϊ�����ۡ�
			if (n < 6)
			{
				printf("%2d", arr[row][col]);
			}
			else if(n<20)
			{
				printf("%4d", arr[row][col]);
			}
			else
			{
				printf("������1-20������\n");
			}
		}
		printf("\n");//��ӡ��ÿһ��Ҫ���С�
	}

	system("pause");
	return 0;
}