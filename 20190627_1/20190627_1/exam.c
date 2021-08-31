#include <stdio.h>
#include "exam.h"
void test_1()
{
	char name[20];
	printf("이름을 입력하세요: ");
	gets_s(name, sizeof(name));

	printf("이름 : %s \n", name);
}

void test_2()
{
	int year;
	float f;
	printf("연도를 입력하세요: ");
	scanf_s("%d", &year);
	printf("기록을 입력하세요: ");
	scanf_s("%f", &f);

	printf("연도: %d \n 기록: %f \n", year, f);
}
void test_3()
{
	int num1;
	float num2;
	char munza;
	printf("정수를 입력하세요: ");
	scanf_s("%d", &num1);
	printf("실수를 입력하세요: ");
	scanf_s("%f", &num2);
	getchar();
	printf("문자를 입력하세요: ");
	scanf_s("%c", &munza, sizeof(char));

	printf("정수: 10진수:%d 8진수: %od 16진수: %0x16d \n 실수소수 2번째까지:%.2f \n 문자 아스키코드: %d", num1, num1, num1, num2, munza);
}