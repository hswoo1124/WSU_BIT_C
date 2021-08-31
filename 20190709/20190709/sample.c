#include "sample.h"
/*
인자전달 종류
1) call  by value(값전달)
   내가 가지고있는 값을 전달
2) call  by address(주소값 전달)
   내가 가지고있는 값을 변경 할수 있도록 전달
*/
void sample1()
{
	int num = 10;
	sample2(num, &num);
	printf("%d\n", num);
}
void sample2(int n1, int* n2)//포인터 쓰는이유 : 함수로 값 바꿀려면 1차로 접근
{
	n1 = 20; //n1을 바꿔도 출력값은 변하지 않는다.
	*n2 = 30; //n2의 역참조값 = num의 값이기 때문에 출력시 30
}
void s2_insert(int arr[], int num)
{
	for (int i =0 ; i < num ; i++)
	{
		/*arr배열 i번째의 주소*/   arr[i] = 1; // == 값을 1

	}
	
}
void s2_print(int *arr, int num) //*arr == arr[] 
{
	for (int i= 0; i < num; i++)
	{
		printf("%d\n", arr[i]); //포인터지만 배열로 사용가능
	}
}
#define DATA_MAX 6
void sample3()
{
	//배열 전달시 v(value)전달 불가능!
	int arr[DATA_MAX] = {0};
	s2_insert(arr, DATA_MAX); //목적 :  a
	s2_print(arr, DATA_MAX);   // 목적: v
}
void s3_print(int (*arr)[3], int n1, int n2)
{
	for (int i = 0; i < n1; i++)
	{
		for (int i2 = 0; i2 < n2; i2++)
		{
			printf("%3d", arr[i][i2]);
		}
		printf("\n");
	}

}
void test(int (*arr)[3]) //2차는 무조건 열의크기([3]) 가 나와야함
{
	arr[1][2]= 10;
}
void test2(int(*arr)[3]) //2차는 무조건 열의크기([3]) 가 나와야함
{
	arr[-1][1] = 20;
}
void sample4()
{
	int arr[2][3] = {0};  //2차 이지만 [3] 부분이 중요하기에 함수에 (*?)[3] 으로 표시
	test(arr);
	test2(arr + 1);
	s3_print(arr, 2, 3);
}


/* 함수의 종료조건
1) 구문의 끝
2) return;

void foo()
{
	return; //여기서 끝남.  밑에 안봄
	return;
}
*/

//함수의 리턴
int add(int n1, int n2)
{
	int sum = n1 + n2;
	return sum;
}

void sample5()
{
	//인자전달은 자유지만
	//리턴값은 선택적으로 사용할수있따.
	add(10, 20);
	int s = add(20, 30);
}

//===================================================================================
//==================================== 구 조 체 =====================================


/*
날짜(년 월 일)를 출력, 저장 다음날로 변경, 출력하는 코드
*/


// 1. 연산자까지 학습 (초보)
void sample6()
{
	int year, month, day;
	year = 2019;
	month = 7;
	day = 9;

	printf("%d년 %d월 %d일\n", year, month, day);

	day = day + 1;

    printf("%d년 %d월 %d일\n", year, month, day);
}

// 2. 함수까지 학습 (중수)
void sample7_insert(int *y, int *m, int *d)  //포인터 쓰는이유 : 함수로 값 바꿀려면 1차로 접근
{
	*y = 2019;
	*m = 7;
	*d = 9;
}
void sample7_print(int y, int m, int d)
{
	printf("%d년 %d월 %d일\n", y, m, d);
}
void sample7_nextday(int *y, int *m, int *d)
{
	*d = *d + 1;
}
void sample7()
{
	int year, month, day;
	sample7_insert(&year, &month, &day); //값이 바뀌니까 &
	sample7_print(year, month, day); //그대로 출력이니 0차
	sample7_nextday(&year, &month, &day);//값이 바뀌니까 &
	sample7_print(year, month, day);
}


// 3. 구조체 학습 (고수)
// 가방 생성 == 구조체 정의 == 사용자 지정 타입 키워드 생성
//  타입 키워드  : struct tagdate (==int와 동급 int가 하는건 다 가능)
//  무엇을 (변수) - 정수 3개
//  얼만큼 크기로 (데이터 타입) - (int 3개)12byte
struct tagdate
{
	int year;
	int month;
	int day;
};
void sample8_insert(struct tagdate* date) //포인터는 같은 '타입'의 주소를 표현하기에
{                                         // struct tagdate타입의 주소를 나타냄
										  // 즉, date (구조체)에 있는 모든 값 접근 가능
	(*date).year = 2019;//  .  <- 이게 우선순위가 높아서 ()를 먼저치는것.  *는 상당히 우선순위가 낮다.
	(*date).month = 7;
	(*date).day = 9;
}
void sample8_print(struct tagdate date)
{
	printf("%04d년 %02d월 %02d일\n", date.year, date.month, date.day);
}
sample8_nextday(struct tagdate* date)
{
	(*date).day = (*date).day + 1;  //date ->day = date ->day + 1; 이렇게도 사용 가능
}
void sample8()
{
	struct tagdate date;  // date 의 타입은 struct tagdate임  int아님

	sample8_insert(&date); //값이 바뀌니까 &
	sample8_print(date); //그대로 출력이니 0차
	sample8_nextday(&date);//값이 바뀌니까 &
	sample8_print(date);
}


//================================문자열 함수================================
void sample9()
{

}
