#include "sample.h"
#include <stdio.h>
void sample1()
{
	//1. 데이터 저장공간 생성 == 변수선언 
	short num1;
	int num2;

	//2.  데이터 초기화
	num1 = -3;                 //L value  =  R value
	num2 = 20;
	//3. 연산

	//4. 결과 출력
	printf("민서 아이큐 = %d + %d \n", num1, num2);

}
void sample2()
{
	//문자 타입 == 정수 타입
	 char ch1, ch2;
	ch1 = 'A';
	ch2 = 69;
	printf("a=%c, %d | %c, %d", ch1, ch1, ch2, ch2);
	// ch1 ==>  띄어쓰기   %c는 A로    %d는 아스키 코드로
}

void sample3()
{
	float f1 = 10.1f;
	double f2 = 10.1;

	printf("%f\\\d", f1);
	printf("%lf\\\%t", f2, f2);
}
