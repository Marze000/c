#include<stdio.h>
#include<stdlib.h>

int main()
{
	//printf("%d", sizeof(char*));
	//char num = 10;
	//char* p = &num;
	//printf("%d\n", *p);
	////10 ->  00 00 00 0a
	//printf("%d\n", sizeof(int*));
	//int i = 0;
	//int a = 0;
	//int b = 2;
	//int c = 3;
	//int d = 4;
	////a��=0�ٸ�ֵ��i ����ʱa=0�����ڶ�·��ֵ�������bcd�������ˡ����a�Լ�1
	//i = a++ && ++b && d++; i = 0;	
	//printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
	////a=1,b=2,c=3,d=4;&&
	//printf("%d\n", i); //i = 0;

	////a�ȵ���0���ټ���b,b�Լ�1֮��b=3 ���ڶ�·��ֵ������Ķ������㡣
	//i = a++ || ++b || d++;  //i=1; a=1,b=3,c=3,d=4;
	//printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
	////a=1,b=3,c=3,d=4;||
	//printf("%d\n", i);	//i = 1;��ֵ�����һ�����

	//int num =1;
	//int*p = num;//��ȡ��ַ��
	//printf("%d\n", *p);
	////�����ÿ�ָ�뵼�³��������
	////��ַ������������ʹ�á����������Чָ�룬��Чָ����ܽ�����
	////��Чָ��Ϊδ������Ϊ����ָ��Ϊ��Чָ���е�һ��

	//int* p = NULL;//�� ����ָ��
	
	//int num = 10;
	//char* p = &num;
	//printf("%d",*p);
	//int* ,char*�������ת��

	//int* p = NULL;
	//printf("%d\n", p );
	////ָ��Ӽ�����
	//int n = 0x11223344;
	//char* p = (char*)&n;
	//printf("%x", *p);//

	//int arr[] = { 0,1,3,4 };
	//printf("%p\n", arr);== printf("%p",&arr);
	//printf("%p\n", &arr[0]);
	//�������ĵ�ַ����Ԫ�صĵ�ַ��һ����

	//int arr[4] = { 0,1,2,3 };
	//int* p1 = arr;
	//int* p2 = &arr[2];//int* p2 = arr + 2;
	//printf("%d\n", p2 - p1);
	//ָ��Ĳ������˽������⣬�����Ĳ������Ǳ״�������
	
	//ָ�����飺��һ�����顣int* arr[4] = {0��1��4��7}���ǳ�����
	//����ָ�룺��һ��ָ�롣int(*arr)[4]= {0, 1, 2, 3};�ô��������������е�
	
	//int arr[4] = { 1,2,3,4 };
	//printf("%p\n", arr); //int*
	//printf("%p\n", &arr);//����ָ�� ��int*) [4]

	

	system("pause");
	return 0;
}