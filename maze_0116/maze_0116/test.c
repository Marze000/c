#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//const�޶��Ķ���ͨ��������ʱ���ܱ���ֵ�Ķ��������const�޶�
	//�Ķ����ֵ������һ�������ĳ���������������ֵά�ȵȣ�
	//const int n = 10;
	//int a[n];
	//����ʹ��const ����ĳ��������������ά��
	
	//volatile ���﷨��const�෴��������εı������������޸�
	//˵��һ��������ʵ����������������������������ͣ�������Ϊ������������ռ�
	//��Ӧ����ͷ�ļ��ж������,��Ϊһ��ͷ�ļ����ܻᱻһ����������Դ�ļ���������	
	
	//scanf����%lf����һ��double���͵�����
	//��printf��ȴ����ʹ��%lf���double���͵����ݣ�ֻ��ʹ��%f�����
	//
	//char str1[20], str2[20];
	//int i;
	//printf("please input string1:\n");
	//gets(str1);
	//printf("please input string2:\n");
	//gets(str2);

	//i = strcmp(str1, str2);
	//if (i > 0)
	//{
	//	printf("str1>str2\n");
	//}
	//else if(i<0)
	//{
	//	printf("str2>str1\n");
	//}
	//else
	//{
	//	printf("str1 = str1\n");
	//}

	//printf("%d\n", str1);
	//printf("%d\n", str2);


	//char str[10];
	//gets(str);
	//strupr(str);
	//puts(str);

	// strupr.c
	//��Сд�ַ�ת���ɴ�д�ַ�	
	//char s[] = "Copywrite 1999-2000 GGV Technologies";
	//char* s2 = _strupr(s);//��s�����е��ַ���ת���ɴ�д���ҷ���s������ʼ��s2
	//printf("%s\n", s2);
	//printf("%s\n", s); //���ʱ��s��s2����ȵģ�ָ��ͬһ���ַ�����
	
	// ע�⣺����ʹ�����·�ʽ����
	// char* p="for test";
	// strupr(p);
	// �������û�����쳣��ԭ���ǣ�ָ��p ���ﶨ����ǳ����ִ����������ִ�����֪���ǲ����Ը��ĵ�
	
	//int i = 0;
	//int j = 0;
	//int arr[2][3] = { (0,1,2),(3,4,5) };
	//for (i = 0; i < 2; ++i)
	//{
	//	for (j = 0; j < 3; ++j)
	//	{
	//		printf("%-4d", arr[i][j]);			
	//	}
	//	printf("\n");
	//}

	//int arr[][4] = { 1,2,3,4,5,6,7,8};
	//for (j = 0; j < 2; ++j)
	//{
	//	for (i = 0; i < 4; ++i)
	//	{
	//		printf("%-3d", arr[j][i]);			 			
	//	}
	//	printf("\n");
	//}

	//int i = 0;
	////char arr[12] = { 'a','s','f','d','d','d' };
	//char arr[12];
	//for (i = 0; i < 12; ++i)
	//{
	//	scanf("%c ", &arr[i]);
	//}
	//for (i = 0; i < 12; ++i)
	//{
	//	printf("%c  ", arr[i]);
	//}

	//int i = 0;
	//char arr[12];
	//scanf("%s", arr);
	////scanf("%s", &arr);
	////����ʽ�Ǵ���ģ���Ȼ���һ���������д��в�ͬ
	//printf("%s", arr);

	//�ַ�������
	//puts  gets strcat strcpy strcmp  strlen strlwr strupr

	char c[] = "hello";
	puts(c);
















	system("pause");
	return 0;
}