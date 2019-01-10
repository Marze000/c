#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}


//void BubbleSort(int* arr , int size ,int is_desc )
//{
//	int bound = 0;
//	for (; bound < size; ++bound)
//	{
//		//cur��ÿ����һ��ѭ���ȽϵĴ���
//		//��һ��ѭ������������Σ��ڶ���ѭ����cur��һ�����εݼ���ȥ
//		for (int cur = size-1; cur > bound; --cur)
//		{
//			//��������,��֮����Ѵ�С���ŸĶ����Ϊ����
//			if (is_desc == 0)
//			{
//				if (arr[cur - 1] < arr[cur])//����
//				{
//					// ǰһ�� > ��һ��ͽ���
//					Swap(&arr[cur - 1], &arr[cur]);
//				}
//			}
//			else if (is_desc == 1)
//			{
//				if (arr[cur - 1] > arr[cur])//����
//				{
//					// ǰһ�� > ��һ��ͽ���
//					Swap(&arr[cur - 1], &arr[cur]);
//				}
//			}
//			
//		}
//	}
//}


typedef int(*Cmp)(int, int);//����ָ��
//int(*)(int a ,int b)

void BubbleSort(int* arr, int size, Cmp cmp)
{
	int bound = 0;
	for (; bound < size; ++bound)
	{
		//cur��ÿ����һ��ѭ���ȽϵĴ���
		//��һ��ѭ������������Σ��ڶ���ѭ����cur��һ�����εݼ���ȥ
		for (int cur = size - 1; cur > bound; --cur)
		{
			if (cmp(arr[cur-1],arr[cur])== 0)
			{
				//����0��ʱ����Ԫ�ز����Ϲ��������λ��
				Swap(&arr[cur - 1], &arr[cur]);				
			}
		}
	}
}

int less(int x, int y)//����
{
	//x λǰһλ���֣�yλ��һλ���֣����x<y�򲻵���λ��
	return x < y ? 1 : 0;	
}

int Gretter(int x, int y)//����
{
	return x < y ? 0 : 1;
}

int absless(int x, int y)//����ֵ��������
{
	return abs(x) < abs(y) ? 1 : 0;
	//if (abs(x) < abs(y))
	//{
	//	return 1;
	//}
	//return 0;
}

int main()
{	
	//int arr[] = { 2,-3,8,-7,6,5 };
	//BubbleSort(arr,6,absless);
	////��������������������������û��Զ���ĺ�����
	//
	//for (int i = 0; i < 6; ++i)
	//{
	//	printf("%d\n", arr[i]);
	//}
	//int i = 0;
	//int a[] = { 1,2,3,4 };
	////sizeof�ж�Ԫ����ռ�Ŀռ���ֽ�
	////printf("%d\n", sizeof(a));//16
	////a��һ����������1��Ԫ��4���ֽ�
	//
	////printf("%d\n", a[i]);
	//printf("%d\n", sizeof(a + 0));//������a+0֮��ᱻ��ʽת��λָ��,//32λϵͳ�£�Ϊ4
	//
	//printf("%d\n", sizeof(*a));//aת��Ϊָ�루��ʽת��Ϊ��Ԫ�ص�ָ�룩�������õõ���Ԫ����1Ϊint��
	//
	//printf("%d\n", sizeof(a + 1));//8 ��Ϊ��64λ����ϵͳ��

	//printf("%d\n", sizeof(a[1]));//a[1]�����Ԫ����2int�ͣ���ռ�ֽ�Ϊ4

	//printf("%d\n", sizeof(&a[1]));//�õ�2֮��ȡ��ַ֮��Ϊһ��ָ�룬��64λ����ϵͳ��8

	//printf("%d\n", sizeof(&a));//������ȡ��ַ��һ��ָ�룬������ָ�룬��32λϵͳ��4

	//printf("%d\n", sizeof(*&a));//16 ��ȡ��ַ�õ���������ָ�룬�ڽ����÷��������顣

	//printf("%d\n", sizeof(&*a));//8 �Ƚ����õõ�����1 int�ͣ�Ȼ��ȡ��ַ�õ�һ��ָ�롣

	//printf("%d\n", sizeof(&a + 1));//8 aȡ��ַλ����ָ�룬����ָ���һΪҲΪָ�롣

	//printf("%d\n", sizeof(&a[0]+1));//8 
	//ֻҪ����ָ�룬��32λϵͳ�¾�Ϊ4.

	//char arr[] = { 'a','b','c','d','e','f' };

	//printf("%d\n",sizeof(arr));//6  �ַ����鲻���ַ�����û�С�\0��

	//printf("%d\n", sizeof(arr+0));//8 arr������һ������������һ��Ϊָ�롣��64λ����ϵͳ��8

	//printf("%d\n", sizeof(*arr));//1 *arrȡ������a,aռһ���ֽ� 

	//printf("%d\n", sizeof(arr[1]));// 1 

	//printf("%d\n", sizeof(&arr));//8 ������ȡ��ַ�õ�һ������ָ�룬64λ

	//printf("%d\n", sizeof(&arr+1));//8 ȡ����ַ��Ϊ����ָ�룬����ָ���һ��ȻΪָ��

	//printf("%d\n", sizeof(&arr[0]+1));//8 []�õ���һ���ַ����ַ�ȡ��ַΪ�ַ�ָ�룬��һ����ָ�롣


	//printf("%d\n", strlen(arr));//δ������Ϊ�� UB

	//printf("%d\n", strlen(arr+0));//δ������Ϊ�� UB 

	//printf("%d\n", strlen(*arr));//*arr�õ�����һ���ַ���strlen���ַ��󳤶ȣ����ˡ�
	//strlenҪ��Ĳ�����char*��ָ�룩����*arr��������char���ַ���,������ͬ��

	//printf("%d\n", strlen(&arr));//δ������Ϊ��&arrΪ����ָ���char*����Ҳ��ƥ��

	//printf("%d\n", strlen(&arr+1));//ͬ��

	//printf("%d\n", strlen(&arr[0]+1));// δ������Ϊ
	//�ַ�������������ַ�����Ҫʹ��srtlen

	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//7 �ַ������滹��һ����\0����Ҳ��һ��Ԫ��

	//printf("%d\n", sizeof(arr+0));//8 arr��0֮���Ϊָ�룬��32Ϊ����ϵͳ��4

	//printf("%d\n", sizeof(*arr));// 1

	//printf("%d\n", sizeof(arr[1]));// 1

	//printf("%d\n", sizeof(&arr));// ����ָ��   8

	//printf("%d\n", sizeof(&arr+1));//ͬ��  �õ������ַ�ָ��

	//printf("%d\n", sizeof(&arr[0]+1));//8  �õ���������char*

	
	//printf("%d\n", strlen(arr));//6 strlen ������ַ����ĳ��ȣ���sizeof������ֽ���

	//printf("%d\n", strlen(arr+0));//arr����ת��Ϊchar*  +0�򲻼�0��һ��

	//printf("%d\n", strlen(*arr));//ȡ�������ַ�a,�ַ�a��������char.δ������Ϊ

	//printf("%d\n", strlen(arr[1]));//ͬ�ϣ�ȡ������һ���ַ�b

	//printf("%d\n", strlen(&arr));//6 ȡ��ַ�õ�һ������ָ�룬�����char*��һ����
	//������ָ��õ���ֵ����Ԫ��һ������ַ��ͬ��

	//printf("%d\n", strlen(&arr+1));//����ָ���һ�����������飬ָ��������Ԫ�ص���һλ��Խ�硣

	//printf("%d\n", strlen(&arr[0]+1));//5  arr[0]��Ԫ��ȡ��ַ�õ�����char*
	//��һ����char*����ָ��ָ����b

	//printf("%d\n", strlen(&arr[1]+1));//4  arr[1]ȡ������b��char*�ͣ��ټ�һָ��ָ��c,ʣ��4���ַ�


	char* arr = "abcdef";
	//printf("%d", sizeof(arr));//8 arr�������ָ��

	//printf("%d", sizeof(arr+0));//8 ��64λϵͳ��

	//printf("%d", sizeof(*arr));//1 �õ�����a�ַ���ռһ���ֽ�

	//printf("%d", sizeof(arr[1]));//1

	//printf("%d", sizeof(&arr));//8 ȡ��ַ�õ�����һ������ָ��

	//printf("%d", sizeof(&arr+1));// 8 ͬ��

	//printf("%d", sizeof(&arr[0]+1));//8  ����a[0]�õ�һ��a��ȡ��ַ�õ�char*���ټ�һ

	//printf("%d", strlen(arr));// 6

	//printf("%d", strlen(arr+1));//5 arr��char*,��һ����һ���ֽ�

	//printf("%d", strlen(*arr));// ȡ������a,������char,strlenҪ�����char*

	//printf("%d", strlen(arr[1]));//ȡ������b,ͬ�ϣ�δ������Ϊ

	//printf("%d", strlen(&arr));//����ָ�룬�õ�����char**














	system("pause");
	return 0;
}