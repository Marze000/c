//求十个整数中最大的数
#include<stdio.h>
#include<stdlib.h>
int main()

{
	int a[] = { 2,6,8,45,7,4,9,65,49,25, }, max = a[0], i;
for (i = 0; i < 10; i++)
   {
	  if (max < a[i])
		  max = a[i];
   }	
    printf("max numeber is %d\n",max);
    system("pause");
	return 0;
}

//将三个数从大到小输出
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 20, b = 56, c = 45;
	if (a > b&&b > c)
		printf("%d %d %d", a, b, c);
	if (a > c&&c > b)
		printf("%d %d %d", a, c, b);
	if (b > a&&a > c)
		printf("%d %d %d", b, a, c);
	if (b > c&&c > a)
		printf("%d %d %d", b, c, a);
	if (c > b &&b> a)
		printf("%d %d %d", c, b, a);
	if (c > a &&a> b)
		printf("%d %d %d", c, a, b);
	system("pause");
	return 0;
}

include<stdio.h>
include<stdlib.h>
nt main()

 int t;
 int a = 20, b = 56, c = 45;
 if (a < b)
{
	t = b;
	b = a;
	a = t;
}
if (a < c)
{
	t = c;
	c = a;
	a = t;
}
if (b < c)
{
	t = c;
	c = b;
	b = t;
}
	printf("%d %d %d", a, b, c);

	system("pause");
	return 0;
}



//求两个数的最大公约数
#include<stdio,h>
#include<stdlib.h>
int main()
int a, b,t;
   printf("input a b:")
   scanf("%d %d",&a,&b);
     if (a < b)
{
		 t = b;
		 b = a;
		 a = t;
}











