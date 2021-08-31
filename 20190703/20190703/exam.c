#include<stdio.h>

void test1()
{
	int i = 0;
	/*while (i<=10)
	{
		printf("hello world");
		i++;
	}*/
	for (i = 0; i <= 10; i++)
	{
		printf("hello world");
	}

}
void test2()
{
	int i;
	int wh=0;
	printf("정수입력");
	scanf_s("%d", &i);
	while (wh <= i)
	{
		printf("hello worid");
		wh++;
	}
}
void test3()
{
	char a = ' ';
	int i = 34;
	int s = 0;
	while (i<=127 )
	{
		printf("%c", a);
		
		i++;
		s++;
		a++;
		if (s == 16)
		{
			printf("\n");
			s = 0;
		}
	}
}
void test4()
{
	int i=0;
/*	for (i = 'a'; i <= 'z'; i++)
	{
		printf("%c", i);
	}*/
/*	while (i<='z')
	{
		printf("%c", i);
	}*/
	do
	{
		printf("%c", i);
	} while (i <= 'z');
}
void test5()
{
	char n;
	while (1)  
	{
		printf("문자입력: ");
		scanf_s("%c", &n, sizeof(char));  
		if (n == 'x')  
			break;
	}
}
void test6()
{
	int i = 5;
	int i1 = 1;
	while (i1<=9)
	{
		printf("%d x %d = %d", i, i, i*i);
		i1++;
	}
}
void test7()
{
	int i1=0;
	int i2 = 1;
	printf("정수입력: \n");
	scanf_s("%d", &i1);
	while (i2 <= 9)
	{
		printf("%d x %d = %d", i1, i1, i1*i1);
		i2++;
	}
}
void test8()
{
	int n;
	int sum = 0;
	while (1)
	{
		printf("문자입력: ");
		scanf_s("%d", &n);
		sum = sum + n;
		printf("%d", sum);
		if (n == 'a')
			break;
	}
}
void test9()
{
	int n1, n2, n3=0;
	int count=1;
	int sum = 0;
	float aver;
	
		printf("숫자갯수: ");
		scanf_s("%d", &n1);	
		while (count <= n1)
		{
			printf("%d숫자: ", count);
			scanf_s("%d", &n2);
			count++;
			sum = sum + n2;
			if (n2 >= n3)
			{
				n3 = n2;
			}
	
	}
	aver = (float)sum / n1;
	printf("최대값:%d  합:%d  평균:%.1f  ", n3, sum, aver);
}
void test10()
{
	float ondo;
	for (int num = 0; num <= 100; num += 10)
	{
		ondo = 5.0f / 9 * (num - 32);
		printf("온도 %d는 섭씨 %.1f도\n", num, ondo);
	}
}