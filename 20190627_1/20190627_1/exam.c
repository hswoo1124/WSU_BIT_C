#include <stdio.h>
#include "exam.h"
void test_1()
{
	char name[20];
	printf("�̸��� �Է��ϼ���: ");
	gets_s(name, sizeof(name));

	printf("�̸� : %s \n", name);
}

void test_2()
{
	int year;
	float f;
	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &year);
	printf("����� �Է��ϼ���: ");
	scanf_s("%f", &f);

	printf("����: %d \n ���: %f \n", year, f);
}
void test_3()
{
	int num1;
	float num2;
	char munza;
	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &num1);
	printf("�Ǽ��� �Է��ϼ���: ");
	scanf_s("%f", &num2);
	getchar();
	printf("���ڸ� �Է��ϼ���: ");
	scanf_s("%c", &munza, sizeof(char));

	printf("����: 10����:%d 8����: %od 16����: %0x16d \n �Ǽ��Ҽ� 2��°����:%.2f \n ���� �ƽ�Ű�ڵ�: %d", num1, num1, num1, num2, munza);
}