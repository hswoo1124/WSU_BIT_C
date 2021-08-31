#include <stdio.h>
#include "sample.h"
/*void sample1()
{
	int jumsu[] = {90, 80, 75, 95, 70};
	int num1 = 100;
	int *pi, *pi2;

	pi = jumsu;  // 1차 = 1차   
	pi2 = &num1; // 1차 = 1차

	printf("%d\n", *pi); //0차 값
	printf("%d\n", *pi2);//0차 값


	printf("%p\n", &pi); //2차 주소
	printf("%d\n", &pi2);//2차 주소
	pi++;  //주소가 +1 되면 다음주소로 간다. [0] 주소에서 [1]주소로  (pi들은 주소값이기에)
	printf("%d\n", *pi);

	pi--;
	printf("%d\n", *pi);

	pi2 = pi; //1차 = 1차  pi2의 (주소)값이 pi의 (주소)값이됨
	pi2 = pi2 + 3; // [3]의 (주소)값을 갖는다.
	printf("%d\n", *pi2);

	printf("%d\n", pi2 - pi); // pi들은 주소값이기에 [3] 번째(4) - [1]번째 (1) = 3 
}
//배열 + 포인터
void sample2()
{
	int arr[] = {1,2,3,4,5,6};
	int *parr = arr;
	int *parr2 = arr + 2; //[2]의 주소값 저장

	printf("%p, %p, %p\n", arr, parr, &arr[0]);  //전부 1차 주소값. [0]값이 나옴
	//배열과 포인터의 연산은 동일하다.
	printf("%p, %p, %p, %p\n", arr[1], *(arr+1), *(parr+1), parr[1]);  // 2, 2, 2, 2
    
}
//2차원 배열
void sample3()
{               //3이 제일중요
	int jumsu[2][3] = { {1, 2, 3}, {4, 5, 6 } };
	printf("%d\n", jumsu[0][0]); // = 1
	printf("%d\n", jumsu[1][2]); // 6
	printf("%d\n", jumsu[0][5]); //6
	printf("%d\n", jumsu[2][-1]); //6
	printf("%d\n", jumsu[1][0]);
	printf("%p\n", jumsu + 1);
	printf("%p\n", *(jumsu + 1));
	printf("%d\n", *(*(jumsu+1))); //4
	printf("%d\n", *(*(jumsu + 1) + 2)); //6
	printf("%d\n", *(*(jumsu+1)+1)); //5
}*/
void sample4()
{
	int arr[2][3] = { { 1, 2, 3 },{ 4, 5, 6 } };
	int **pp;

	pp = arr; //int **의 int(*)[3]과 다름
	
	int* p1[3];//배열 12바이트 (주소값을 저장하는 배열 2차)  (포인터와 배열이만나면 우선순위는 배열임.) 
	
	//========================================================================
	int(*p)[3] = arr;//포인터 4바이트 (모두동일)
	printf("%d\n", p[1][1]);
	printf("%d\n", *p[1]);
}
void sample5()
{
	char ch = 'a';
	char arr[3]; //3byte  1차
	char* arr1[3]; //12byte 주소값을 저장하는 배열 2차
	arr[0] = ch; // ='a'
	arr1[0] = &ch; // 1차  =  1차

	arr1[0] = arr; // 1차  = 1차
}
//  함수 포인터
void sample6()
{
	//함수의 이름도 주소이다.
	printf("0x%p\n", sample6);
	//함수 포인터 선언
	void(*f1)(void);
	void(*f2)(int, char);
	f1 = foo;
	f2 = foo2;
	// 사용 = 호출
	foo();// == f1();
	foo2(10, 'a'); // == f2(10, 'a');
	//==============================================================
	void(*f3[4])(void) = {NULL, foo3, foo4, foo5 };
  //우선순위는 배열.   따라서 배열임. (함수를 3개 저장하는 배열)
	while (1)
	{
		system("cls");//콘솔 클리어
		printf("----------------------------\n");
		printf("1  2  3\n");	
		printf("----------------------------\n");
		char ch; 
		ch = _getch();//_getch는 문자가 화면에 안뜸 엔터 필요없음 //getchar()
		f3[ch - '0']();
		/*switch (ch)
		{
		case 1:
			f3[0];
			break;
		case 2:
			f3[1];
			break;
		case 3:
			f3[2]();
			break;
		case 4:
			return;
			break;
		}*/
		system("pause"); // 스탑
	}
}
void foo()
{
	printf("foo\n");
}
//return
void foo2(int n, char c)
{
	printf("%d, %c\n", n, c);
}

void foo3()
{
	printf("foo3\n");
}
void foo4()
{
	printf("foo4\n");
}
void foo5()
{
	printf("foo5\n");
}
//void 포인터
void sample7()
{
	//문법1 : 모든타입의 주소를 저장할수있따.
	//===================================================
	int num = 10;
	char ch = 'a';
	int *p = &num;// 원래 이렇게 해야함 ch 저장 불가
	//============================================void 사용시 ↓
	void *p = &ch; //문자형 타입 주소 저장
	p = &num;              // 다시 정수형 저장
	printf("%d\n", *(int*)p);  // 사용시 정수타입으로 변환후 사용
	//문법2 : 사용시 반드시 원래타입으로 형 변환해야함.
}
