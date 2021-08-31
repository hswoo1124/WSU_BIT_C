#include <stdio.h>
void exam1()
{
	int n = 5;
	n += 10;
	printf("%d\n", n); //15
}
void exam2()
{
	double f1 = 5.01, f2 = 5.5;
     double n = f1 + f2;
	printf("%lf\n", n); //10.5
}
void exam3()
{
	int n, m = 7;
	n = m / 3;
	printf("%d\n", n); //2
}
void exam4()
{
	int n, m = 7;
	n = m != 7;   //m은 7이 맞으니 false
	printf("%d\n", n); //0
}
void exam5()
{
	int n = 5, m = 7;
	n *= (n + m) % m;  // 5*5
	printf("%d\n", n); //25
}
void exam6()
{
	int a = -1, b = 20, c = 30, x;
	x = ++a || ++b&&++c;  //  폴스(-1이기땜에) || 트루 && 트루
	printf("%d %d %d %d\n", x, a, b, c);	//1, 0, 21, 31
}
void exam7()
{
	int a = -1, b = 20, c = 30, x;
	x = ++a || ++b || ++c;  // f || t || t
	printf("%d %d %d %d\n", x, a, b, c); // 1 0 20 30
}
void exam8()
{
	int a = 5, b = 6, c = 7, d = 8, x;
	x = a < b || a < c && c < d;  //t || t  && t
  	printf("%d\n", x); // 1
}
void exam9()
{
	int x = 2, y = 0, z = 3, k;
	k = ++x && ++y || ++z; // ||는 하나면  t면 t이기때문에  뒤에가 뭐든 필요없어서 계산안함
	printf("%d %d %d %d\n", x, y, z, k); //3 1 3 1
}
void exam10()
{
	int i = -10;
	i = +i;
	printf("%d\n", i); // -10  ( +  *  -10  =  -10)
	i = -10;
	i = -i;
	printf("%d\n", i); // 10
}
void exam11()
{
	short s = 10;
	printf("%d\n", !s); //0 트루이기땜에 f
	s = -1;
	printf("%d\n", !s); //0트루이기땜에 f
	s = 0;
	printf("%d\n", !s); // 1 //0 =f니까 1
}
// -----------------------------------------
void exam12()
{
	int input;
	float output;
	printf("화씨온도: ");
	scanf_s("%d", &input);
	output = 5.0f/9*(input-32);
		printf("화씨온도:%d , 섭씨온도: %.1f도\n", input, output);
}
void exam13()
{
	int first, second, third;
	int sum;
	float aver;
	printf("정수를 3개 입력하시오.\n");
	scanf_s("%d", &first );
	printf("first = %d  정수를 2개 입력하시오.\n", first);
	scanf_s("%d", &second);
	printf("first = %d second = %d 정수를 1개 입력하시오.\n", first, second);
	scanf_s("%d", &third);
	sum = first + second + third;
	aver = sum / 3.0f;
	printf("합: %d  평균: %f\n", sum, aver);
}
void exam14()
{
	char ch1;	
	printf("영문자 하나를 입력하세요\n");
    scanf_s("%c", &ch1 , sizeof(char));
	printf("입력문자는 %c 이며, 알파벳 %d번째 입니다.", ch1 - 32,ch1 - 96);	
}
void exam15()
{
	int first, second;
	printf("정수2개입력\n");
	scanf_s("%d %d", &first, &second);
	printf("순서 반대로 출력: %d,%d", second, first);
}
void exam16()
{
	int first, second;
	printf("정수2개입력\n");
	scanf_s("%d %d", &first, &second);
	printf("합은 = %d", second + first);
}
void exam17()
{	
	char ch1;
	int i;
	printf("문자 하나를 입력하세요\n");
	scanf_s("%c", &ch1, sizeof(char));
	i = ch1 - '0';
	printf("%d\n", i);
}
void exam18()
{
	int first;
	printf("정수1개입력\n");
	scanf_s("%d", &first);
	printf("5로 나눈 몫=%d 나머지 = %d\n",first/5, first%5);
}
void exam19()
{
	char ch1;
	printf("소문자 영어 하나를 입력하세요\n");
	scanf_s("%c", &ch1, sizeof(char));
	printf("입력문자의 대문자는 %c입니다.\n", ch1 - 32);
}