#include <stdio.h>

void sample1()
{
	char msg[] = "abc"; //문자열배열
	char msg2[] = { 'a','b','c' }; //문자 배열

	msg[1] = 'B';
	msg2[1] = 'B';
	printf("%c\n", msg[1]);
	printf("%c\n", msg2[1]);
	// %s = 전달된 주소부터 \0(널) 까지 출력
	printf("%s\n", msg[1]);
	printf("%s\n", msg2[1]);
	printf("%s\n", msg + 1);
	//printf("%s\n", msg2 + 1); 문자 사용불가 %s
}
void sample2()
{
	char str[] = "ab";
	char *str2 = "ab"; // 못바꿈

	str[1] = '2';
	printf("%s\n", str2);
	//str2[1] = '1' --에러
	str2 = "ccc";  // 가능

	}
void sample3()
{
	char str1[4]="abc";
	char str2[4];
	//str2 = str1;    2는 배열이라 안댐
	int i = 0;
	for (i = 0; str1[i] != 0; i++)
	{
		str2[i] = str1[i];
	}
	str2[i] = '\0';
	printf("%s\n", str2);
}
void sample5(char str1[], char* str2)
{
	int i = 0;
	for (i = 0; str2[i] != 0; i++)
	{
		str1[i] = str2[i];
	
	}
	str2[i] = '\0';
}
void sample4()
{
	char str1[3] = "ab";
	char str2[3];
	sample5(str2, str1); //문자열 복사 함수
	printf("%s\n", str2);
}
