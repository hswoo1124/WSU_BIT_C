#include <stdio.h>
#include "sample.h"
/*void sample1()
{
	int jumsu[] = {90, 80, 75, 95, 70};
	int num1 = 100;
	int *pi, *pi2;

	pi = jumsu;  // 1�� = 1��   
	pi2 = &num1; // 1�� = 1��

	printf("%d\n", *pi); //0�� ��
	printf("%d\n", *pi2);//0�� ��


	printf("%p\n", &pi); //2�� �ּ�
	printf("%d\n", &pi2);//2�� �ּ�
	pi++;  //�ּҰ� +1 �Ǹ� �����ּҷ� ����. [0] �ּҿ��� [1]�ּҷ�  (pi���� �ּҰ��̱⿡)
	printf("%d\n", *pi);

	pi--;
	printf("%d\n", *pi);

	pi2 = pi; //1�� = 1��  pi2�� (�ּ�)���� pi�� (�ּ�)���̵�
	pi2 = pi2 + 3; // [3]�� (�ּ�)���� ���´�.
	printf("%d\n", *pi2);

	printf("%d\n", pi2 - pi); // pi���� �ּҰ��̱⿡ [3] ��°(4) - [1]��° (1) = 3 
}
//�迭 + ������
void sample2()
{
	int arr[] = {1,2,3,4,5,6};
	int *parr = arr;
	int *parr2 = arr + 2; //[2]�� �ּҰ� ����

	printf("%p, %p, %p\n", arr, parr, &arr[0]);  //���� 1�� �ּҰ�. [0]���� ����
	//�迭�� �������� ������ �����ϴ�.
	printf("%p, %p, %p, %p\n", arr[1], *(arr+1), *(parr+1), parr[1]);  // 2, 2, 2, 2
    
}
//2���� �迭
void sample3()
{               //3�� �����߿�
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

	pp = arr; //int **�� int(*)[3]�� �ٸ�
	
	int* p1[3];//�迭 12����Ʈ (�ּҰ��� �����ϴ� �迭 2��)  (�����Ϳ� �迭�̸����� �켱������ �迭��.) 
	
	//========================================================================
	int(*p)[3] = arr;//������ 4����Ʈ (��ε���)
	printf("%d\n", p[1][1]);
	printf("%d\n", *p[1]);
}
void sample5()
{
	char ch = 'a';
	char arr[3]; //3byte  1��
	char* arr1[3]; //12byte �ּҰ��� �����ϴ� �迭 2��
	arr[0] = ch; // ='a'
	arr1[0] = &ch; // 1��  =  1��

	arr1[0] = arr; // 1��  = 1��
}
//  �Լ� ������
void sample6()
{
	//�Լ��� �̸��� �ּ��̴�.
	printf("0x%p\n", sample6);
	//�Լ� ������ ����
	void(*f1)(void);
	void(*f2)(int, char);
	f1 = foo;
	f2 = foo2;
	// ��� = ȣ��
	foo();// == f1();
	foo2(10, 'a'); // == f2(10, 'a');
	//==============================================================
	void(*f3[4])(void) = {NULL, foo3, foo4, foo5 };
  //�켱������ �迭.   ���� �迭��. (�Լ��� 3�� �����ϴ� �迭)
	while (1)
	{
		system("cls");//�ܼ� Ŭ����
		printf("----------------------------\n");
		printf("1  2  3\n");	
		printf("----------------------------\n");
		char ch; 
		ch = _getch();//_getch�� ���ڰ� ȭ�鿡 �ȶ� ���� �ʿ���� //getchar()
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
		system("pause"); // ��ž
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
//void ������
void sample7()
{
	//����1 : ���Ÿ���� �ּҸ� �����Ҽ��ֵ�.
	//===================================================
	int num = 10;
	char ch = 'a';
	int *p = &num;// ���� �̷��� �ؾ��� ch ���� �Ұ�
	//============================================void ���� ��
	void *p = &ch; //������ Ÿ�� �ּ� ����
	p = &num;              // �ٽ� ������ ����
	printf("%d\n", *(int*)p);  // ���� ����Ÿ������ ��ȯ�� ���
	//����2 : ���� �ݵ�� ����Ÿ������ �� ��ȯ�ؾ���.
}
