
#include <stdio.h>
//문자열 출력
void sample1()
{
	printf("hi");
	fprintf(stdout, "hi");
}

//문자 전용 입출력
void sample2()
{
	char ch, ch2;                                    
	printf("입력:|n");
	ch = getchar();
	getchar(); // -> 없으면 엔터 값을 2번쨰가 가져가서 안댐
	printf("두번째 입력:\n");
	ch2 = getchar();
	
		printf("저장: %c , %c\n", ch, ch2);
	
}

//문자열 입출력
void sample3()
{
	char arr[10]; //문자 9개 저장가능 한글은 글자당 2byte (마지막엔 널문자를 넣어야함)
	printf("문자 9개 입력: ");
	gets_s(arr, sizeof(arr));

	printf("결과: %s\n", arr);
	puts(arr); // (입력한거만 출력)
}

void sample4()
{
	int num = 10;
	float f = 11.1234f;
	//출력폭 
	printf("%d\n", num);
	printf("%10d\n", num);
	printf("%-10d\n", num);

	//소수점
	printf("%.1f\n", f);
	printf("%.2f\n", f);
}

void sample5()
{
	int num1;
	printf("정수입력: ");
	scanf_s("%d", &num1);  //&(주소)를 안붙이면 처음 선언한 값이 들어감

	printf("결과: %d\n", num1);
}

void sample6()
{
	char ch[20];
	int age;
	char gender;
	float weight;

	printf("이름을 입력하세요.");
	scanf_s("%s", &ch, sizeof(ch));
	printf("나이를 입력하세요.");
	scanf_s("%d", &age);
	getchar();
	printf("성별(m or f)을 입력하세요.");
	scanf_s("%c", &gender, sizeof(char));
	printf("몸무게를 입력하세요.");
	scanf_s("%f", &weight);

	printf("이름: %s \n 나이: %d  \n 성별: %c  \n  몸무게: %f \n", ch, age, gender, weight);

}