//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��

//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩

//4.
//��һ���ַ����������Ϊ:"student a am i",
//	���㽫��������ݸ�Ϊ"i am a student".
//	Ҫ��
//	����ʹ�ÿ⺯����
//	ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���

//	student a am i
//	i ma a tneduts
//	i am a student
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//unsigned int reverse_bit(unsigned int value)
//{
//	int i = 0;
//	unsigned int num = 0;
//	for (i = 0; i < 32; ++i)
//	{
//		num = num + ((value >> i) & 1)*pow(2, 31 - i);
//	}
//	return num;
//}

//ͨ��λ����ֱ�ӽ�ȡ���ĵ�һλ����31λ���ڶ�λ����30λ��
//��Ȼ���������Ҫ����һ�������Ա������λ���㣬
//����ѭ����ÿһλ���������ƣ����ó�������ʮ���ƾ���25��ת�������

//unsigned int reverse_bit(unsigned int value)
//{
//	//int i = 0;
//	//for (int i = 32; i < 0; --i)
//	//{
//	//	value = value << i;
//	//}
//	unsigned int ret = 0;
//	int i = 0;
//	while (i < 32)
//	{
//		ret = ret<< 1;
//		ret = ret | (value >> i) & 1;
//		++i;
//	}
//	return ret;
//}

int main()
{

	//int value = 0;
	//int num = 0;
	//scanf("%d", &value);
	//num = reverse_bit(value);
	//printf("%u\n", num);
	////�÷������ܼ���һ����Ϊ����һ����Ϊż��
	//int a = 0;
	//int b = 0;
	//printf("please put a and b:\n");
	//scanf("%d %d", &a, &b);
	//a = a + (b - a) / 2;
	//printf("a,bƽ�����ǣ�%d\n", a);
	
	//��λ
	//int a = 0;
	//int b = 0;
	//float c = 0.5;
	//printf("please inter a and b:\n");
	//scanf("%d %d", &a, &b);
	////printf("the average is %d",(b >>1)+(a >>1));
	////printf("%d , %d", a >> 1, b >> 1);
	////printf("%d", a + (b - a) / 2);
	////printf("%d",(a&b)+(a^b)>>1);
	//if ((a % 2 == 1) && (b % 2 == 1))
	//{
	//	printf("%d\n", 1 + (a >> 1) + (b >>1 ));
	//}
	//else if (((a % 2 == 0) && (b % 2 == 1)) || ((a % 2 == 1) && (b % 2 == 0)))
	//{
	//	printf("%f\n", (b >> 1) + (a >> 1) + c);
	//}
	//else
	//{
	//	printf("%d\n", (b >> 1) + (a >> 1));
	//}

	//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��

//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832



	//unsigned int ret = 0;
	//int i = 0;
	//while (i < 32)
	//{
	//	ret = ret << 1;   //����2
	//	ret = ret | ��(value >> i) & 1��;
	//
	//                   3332 2222 2222 2111 1111 1110 0000 0000
 	//                   2109 8765 4321 0876 5432 1909 8765 4321
	//	++i;             0101 0100 0000 0000 0000 0000 0000 0000 //value
 	//}                  0001 0101 0100 0000   
	//return ret;        0010 1100   
	//                   0000 0001   
	//int num = 0;       0000 0000   
	//int value = 0;     0001 0110
	//scanf("%d", &value);    0000 0001   
	//num = reverse_bit(value);
	//printf("%lu\n", num);
	
	//3.���ʵ�֣�
	//	һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
	//	���ҳ�������֡���ʹ��λ���㣩

	int arr[9] = { 1, 2,2, 4, 1,2, 2, 3, 3 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//sz==7
	int ret = 0;
	for (i = 0; i < sz; i++)
	{
		ret = ret ^ arr[i];
	}
	printf("����һ�ε����ǣ�%d\n", ret);     

	//0000 0101 00//�����һ����ֵ
	//0000 0000 0101//5
	//0000 0101 0011//��5�������ֵ
	//0000 0000 0100//4
	//0000 0101 0111//��4�������ֵ
	//0000 0000 0101//5
	//0000 0101 0010

























	system("pause");
	return 0;
}