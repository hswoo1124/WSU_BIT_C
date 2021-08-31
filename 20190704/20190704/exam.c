#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void test1()
{
	int arr[10];
	
	for (int i =0; i < 10; i++)
	{
		arr[i] = 0;
		printf("%d번째 배열 값은 %d\n", i, arr[i]);
	}
	
}
void test2()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i+1;
		printf("%d번째 배열 값은 %d\n", i, arr[i]);
	}
}
void test3()
{
	char ch[26];
	int num = 0;
	int num2 = 0;
	for (char i = 0; i < 26; i++)
	{
		ch[i] = 97 + i;
		printf("ch[%d] 배열 값은 %c\n", i, ch[i]);
	}
	//----------------------------------------------------
	printf("숫자를 입력하세요");
	scanf_s("%d", &num);
	if (num < 26 && num > 0)
	{
		//ch[num] = ch[num] - 32;
		printf("%d 번째 배열값은 %c입니다\n", num, ch[num-1]-32);
	}
	else
	{
		printf("범위 오류\n");
	}
//----------------------------------------------------
	printf("숫를 입력하세요");
	scanf_s("%d", &num2);
	if (num2 < 26 && num2 > 0)
	{
		ch[num2-1] = 0;
	}
	else
	{
		printf("범위 오류\n");
	}
	//----------------------------------------------------------------
	for (int i2 = 0; i2 < 26; i2++)
	{
		printf("ch[%d]의 값 = %c\n", i2, ch[i2]);
	}
}
void test4()
{
	srand((unsigned int)time(0));
	int arr[10];
	int arr2[10];
	int sum=0;
	float aver;
	int big=0;
	//int num = rand()%10;
	for (int i = 0; i < 10; i++)
	{
		int num = rand() % 10;
		arr[i] = num + 1;
		printf("arr[%d] = %d \n", i, arr[i]);
		arr2[i] = arr[i] * 2;
		sum = sum + arr[i];
		if (big < arr[i])
		{
			big = arr[i];
		}
	}
	aver = sum / (float)10.0f;
	printf("합: %d , 평균: %.1f , 최대값 :%d ", sum, aver, big);
	printf("-----------------------------------------\n");
	for (int i = 0; i < 10; i++)
	{
		printf("arr2[%d] = %d \n", i, arr2[i]);
	}
	
}
void test5()
{
	int arr[5];
	int i = 0;
	int sum=0;
	float aver;
	for(i = 0; i < 5; i++)
	{
		printf("숫자입력\n");
		scanf_s("%d", &arr[i]);
		sum = sum + arr[i];
	}
	aver = sum / (float)5.0f;
	printf("숫자 합: %d ,  평균: %.1f\n", sum, aver);
}
void test6()
{
	char arr[100];
	int de=0, so=0, num=0;
	printf("문장을 쓰세요.");
	gets_s(arr, sizeof(arr));
	for (int i = 0; i < 100; i++)
	{
		if (arr[i] >=48 && arr[i]<=57)
		{
			num = num + 1;
		}
		else if(arr[i] >= 65 && arr[i] <= 90)
		{
			de = de + 1;
		}
		else if (arr[i] >= 97 && arr[i] <= 122)
		{
			so = so + 1;
		}
	}
	printf("대문자수:%d 소문자수:%d 숫자수:%d ",de, so, num);
}
void test7()
{
	srand((unsigned int)time(0));
	int arr[10];
	int arr2[10];
	int arr3[20];
	for (int i = 0; i < 10; i++)
	{
		int num = rand() % 999;
		arr[i] = num + 1;
		arr3[i] = arr[i];
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++)
	{
		int num = rand() % 999;
		arr2[i] = num + 1;
		arr3[i+10] = arr2[i];
		printf("%d ", arr2[i]);
	}
	printf("\n");
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", arr3[i]);
	}

}
void test8()
{
	srand((unsigned int)time(0));
	int arr[100];
	int a=0,a1=0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0, a9 = 0;
	int s = -1;
	/*for (int i = 0; i < 10; i++)
	{
		num[i] = 48 + num;
	}*/
	for (int i = 0; i < 100; i++)
	{
		int num = rand() % 10;
		arr[i] = num;
		s = s + 1;
		if (s == 10)
		{
			printf("\n");
			s = 0;
		}
		printf("%d ", arr[i]);
		switch (arr[i])
		{
		case 0:
			a = a + 1;
			break;
		case 1:
			a1 = a1 + 1;
			break;
		case 2:
			a2 = a2 + 1;
			break;
		case 3:
			a3 = a3 + 1;
			break;
		case 4:
			a4 = a4 + 1;
			break;
		case 5:
			a5 = a5 + 1;
		case 6:
			a6 = a6 + 1;
			break;
		case 7:
			a7 = a7 + 1;
			break;
		case 8:
			a8 = a8 + 1;
			break;
		case 9:
			a9 = a9 + 1;
			break;
		default:
			break;
		}
	}
	printf("\n");
	printf("----------------------------------------------------------\n");
	printf("숫자: 0 1 2  3 4  5 6  7  8 9\n");
	printf("갯수: %d %d %d %d %d %d %d %d %d %d\n", a, a1, a2, a3, a4, a5, a6, a7, a8, a9);

}
void test9()
{
	srand((unsigned int)time(0));
	char arr[100];
	char arr2[100];
	int arr3[26] = { 0 };
	int s = -1;
	int f = -1;
	/*for (int i = 0; i < 10; i++)
	{
	num[i] = 48 + num;
	}*/
	
	/*for (int i = 0; i < 26; i++)
	{
		arr2[i] = i + 65;
	}*/
	for (int i = 0; i < 100; i++)
	{

		int num = rand() % 26 + 65;
		char num1;
		num1 = num;
		arr[i] = num;
		arr2[i] = i + 65;
		s = s + 1;
		if (s == 10)
		{
			printf("\n");
			s = 0;
		}
		
			arr3[num-65] = arr3[num-65] + 1;
		// arr3[0]~arr3[26] = arr3[0]~arr3[26] +1
		
		printf("%c ", arr[i]);
	}
	printf("\n");
	printf("----------------------------------------------------------\n");
	for (int i = 0; i < 26; i++)
	{
		printf("%c ",arr2[i]);
    }
	printf("\n");

	for (int i = 0; i < 26; i++)
	{
		printf("%d ", arr3[i]);
	}

}