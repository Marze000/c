#include<stdio.h>
#include<stdlib.h>


//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
void panbie(int A,int B,int C,int D,int E)
{
	for (A = 1; A <= 5; ++A)
	{
		for (B = 1; B <= 5; ++B)
		{
			for (C = 1; C <= 5; ++C)
			{
				for (D = 1; D <= 5; ++D)
				{
					for (E = 1; E <= 5; ++E)
					{
						//Aѡ��˵��B�ڶ����ҵ�����
						//Bѡ��˵���ҵڶ���E���ģ�
						//Cѡ��˵���ҵ�һ��D�ڶ���
						//Dѡ��˵��C����ҵ�����
						//Eѡ��˵���ҵ��ģ�A��һ��
						if ((B == 2) +(A == 3)==1 &&
							(B == 2) +(E == 4)==1 &&
							(C == 1) +(D == 2)==1 &&
							(C == 5) +(D == 3)==1 && 
							(E == 4) +(A == 1)==1)
						{
							if (A*B*C*D*E == 120)
							{
								printf("A�ǵ�%d��\n", A);
								printf("B�ǵ�%d��\n", B);
								printf("C�ǵ�%d��\n", C);
								printf("D�ǵ�%d��\n", D);
								printf("E�ǵ�%d��\n", E);
							}
						}						
					}
				}
			}
		}
	}
}


int main()
{



	//int A = 0; 
	//int B = 0;
	//int C = 0;
	//int D = 0;
	//int E = 0;
	//panbie(A, B, C, D, E);

	//int n = 10;
	//int* p = &n;
	//printf("%d", *p);

	//unsigned int i = 0;
	//for (i; i <= 255; ++i)
	//{
	//	printf("hello world\n");
	//}

	//unsigned int i;
	//for (i = 9; i >= 0; i--)
	//{
	//	printf("%u\n", i);
	//}

	system("pause");
	return 0;
}