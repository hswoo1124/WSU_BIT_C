#include <stdio.h>
//산술연산으로 데이터 타입의 표현범위를 초과할수있으니 주의하자
void sample1()
{
	short s1 = 32767;  //short 의 최대값임
	printf("%d\n", s1);
	s1 = s1 + 1;
	printf("%d\n", s1); //이상하게 나옴
}
//문자도 산술연산자이기 때문에 연산이 가능하다.
void sample2()
{
	char ch1;
	ch1 = 'C';
	ch1 = ch1 + 2;
	printf("%c\n", ch1); //E로 출력됨
}
// a++는 계산후에 +1추가 (밑에 출력해도 반영 x
// ++a는 그 식에 나올때마다 a에 1추가
void sample3()
{
	int a = 1;
	int result;
	result = ++a + ++a + ++a + a++;
	printf("%d\n", result);
}
//false == 0
//true == 0외 모든수(무한)  대표는 1임.
void sample4()
{
	int result;
	result = 10 && -1;
	printf("%d\n", result);
}