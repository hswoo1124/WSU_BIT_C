#include<stdio.h>

//비트연산

void sample1()
{
	//1. 8명 출석관리( 0 -> 1)(비트 켜기 = |연산(하나라도 1이면 1로))
	int attend = 0; //   0000 0000
	attend = attend | 4;  // 4 == 0000 0010  2번학생 출석
	attend = attend | 32;  //  5번학생 출석

	//2. 학생이 출석했나?  (비트마스크 = &연산(모두 1일때 1로))
	int check;
	check = attend & 4;
	printf("2번: %s\n", check ? "출석" : "결석");

	// 3. 출석 취소 (1 -> 0 비트끄기 == &~ 연산(~는 1 -> 0, 0 -> 1로 변환 ,, 그 후에 &연산))
	attend = attend &~4;
}

// if  제어문 성별 구분
void sample2()
{
	char gender;
	printf("성별입력:(m or f) \n");
	scanf_s("%c", &gender, sizeof(char));
	if (gender == 'm')
	{
		printf("성별은 남자입니다.\n");
	}
	else if(gender == 'f')
	{
		printf("성별은 여자입니다.\n");
	}
	else
	{
		printf("m or f 만 입력해주세요.\n");
	}
}
// if 계산기
void sample3()
{
	int n2 = 20;
	float n1 = 10.0f;
	float n3;
	char oper;

	printf("연산자(+,-,*,/):");
	scanf_s("%c", &oper, sizeof(char));
	if (oper == '+')
	{
		n3 = n1 + n2;
		printf("선택: + , 값 : %f", n3);
	}
	else if (oper == '-')
	{
		n3 = n1 - n2;
		printf("선택: - , 값 : %f", n3);
	}
	else if (oper == '*')
	{
		n3 = n1 * n2;
		printf("선택: * , 값 : %f", n3);
	}
	else if (oper == '/')
	{
		n3 = n1 / n2;
		printf("선택: / , 값 : %.1f", n3);
	}
	else
	{
		n3 = 0;
		printf("연산자를 입력해주세요.");
		return; //함수 종료
	}
}
// 범위비교 계산
void sample4()
{
	int point;
	printf("성적: ");
	scanf_s("%d", &point);
	if (point >= 90 && point <= 100)
	{
		printf("A");
	}
	else if (point >= 80 && point <= 90)
	{
		printf("B");
	}
	else if (point >= 70 && point <= 80)
	{
		printf("C");
	}
	else if (point >= 60 && point <= 70)
	{
		printf("D");
	}
	else if (point >= 0 && point <= 60)
	{
		printf("F");
	}
	else if (point <= 0 || point >= 100)
	{
		printf("오류");
	}
}

// switch
void sample5()
{
	int n;
	printf("정수 1~3: ");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:
		printf("test1\n");
		break;
	case 2:
		printf("test2\n");
		break;
	case 3:
		printf("test3\n");
		break;
	default: 
		printf("no\n");
		break;
	}
}

//while문
void sample6()
{
	int i = 0;
	while (i<5)
	{
		//-------------------------------------
		//------------------------------------- 증감
		i++;
	}
}
//숫자 1~100 출력
void sample7()
{
	int	i = 1;
	while (i<101)
	{
		//-------------------------------------
		//------------------------------------- 증감
		printf("%d", i);
		i++;
	}
}
//1~100합
void sample8()
{
	int i = 1, sum = 0;
	while (i<=100)
	{
		//-------------------------
		sum = sum + i;
		//-------------------------
		i++;
	}
	printf("%d", sum);
}
// if switch while은 반복횟수가 정해져있음
// 반복횟수가 정해져있지 않은 경우 ↓
// 사용자가 0입력 할때까지 정수값 입력받기.
void sample9()
{
	int num;
	while (1)  // 1 = 트루이기 때문에 무한반복됨
	{
		printf("정수입력: ");
		scanf_s("%d", &num);  // 정수입력이 무한 반복됨
		if (num == 0)  //0을 쳐야 끝
			break;
	}
}


