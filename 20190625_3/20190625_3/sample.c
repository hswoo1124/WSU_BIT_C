#include "sample.h"
#include <stdio.h>
void sample1()
{
	//1. ������ ������� ���� == �������� 
	short num1;
	int num2;

	//2.  ������ �ʱ�ȭ
	num1 = -3;                 //L value  =  R value
	num2 = 20;
	//3. ����

	//4. ��� ���
	printf("�μ� ����ť = %d + %d \n", num1, num2);

}
void sample2()
{
	//���� Ÿ�� == ���� Ÿ��
	 char ch1, ch2;
	ch1 = 'A';
	ch2 = 69;
	printf("a=%c, %d | %c, %d", ch1, ch1, ch2, ch2);
	// ch1 ==>  ����   %c�� A��    %d�� �ƽ�Ű �ڵ��
}

void sample3()
{
	float f1 = 10.1f;
	double f2 = 10.1;

	printf("%f\\\d", f1);
	printf("%lf\\\%t", f2, f2);
}
