#include "sample.h"
/*
�������� ����
1) call  by value(������)
   ���� �������ִ� ���� ����
2) call  by address(�ּҰ� ����)
   ���� �������ִ� ���� ���� �Ҽ� �ֵ��� ����
*/
void sample1()
{
	int num = 10;
	sample2(num, &num);
	printf("%d\n", num);
}
void sample2(int n1, int* n2)//������ �������� : �Լ��� �� �ٲܷ��� 1���� ����
{
	n1 = 20; //n1�� �ٲ㵵 ��°��� ������ �ʴ´�.
	*n2 = 30; //n2�� �������� = num�� ���̱� ������ ��½� 30
}
void s2_insert(int arr[], int num)
{
	for (int i =0 ; i < num ; i++)
	{
		/*arr�迭 i��°�� �ּ�*/   arr[i] = 1; // == ���� 1

	}
	
}
void s2_print(int *arr, int num) //*arr == arr[] 
{
	for (int i= 0; i < num; i++)
	{
		printf("%d\n", arr[i]); //���������� �迭�� ��밡��
	}
}
#define DATA_MAX 6
void sample3()
{
	//�迭 ���޽� v(value)���� �Ұ���!
	int arr[DATA_MAX] = {0};
	s2_insert(arr, DATA_MAX); //���� :  a
	s2_print(arr, DATA_MAX);   // ����: v
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
void test(int (*arr)[3]) //2���� ������ ����ũ��([3]) �� ���;���
{
	arr[1][2]= 10;
}
void test2(int(*arr)[3]) //2���� ������ ����ũ��([3]) �� ���;���
{
	arr[-1][1] = 20;
}
void sample4()
{
	int arr[2][3] = {0};  //2�� ������ [3] �κ��� �߿��ϱ⿡ �Լ��� (*?)[3] ���� ǥ��
	test(arr);
	test2(arr + 1);
	s3_print(arr, 2, 3);
}


/* �Լ��� ��������
1) ������ ��
2) return;

void foo()
{
	return; //���⼭ ����.  �ؿ� �Ⱥ�
	return;
}
*/

//�Լ��� ����
int add(int n1, int n2)
{
	int sum = n1 + n2;
	return sum;
}

void sample5()
{
	//���������� ��������
	//���ϰ��� ���������� ����Ҽ��ֵ�.
	add(10, 20);
	int s = add(20, 30);
}

//===================================================================================
//==================================== �� �� ü =====================================


/*
��¥(�� �� ��)�� ���, ���� �������� ����, ����ϴ� �ڵ�
*/


// 1. �����ڱ��� �н� (�ʺ�)
void sample6()
{
	int year, month, day;
	year = 2019;
	month = 7;
	day = 9;

	printf("%d�� %d�� %d��\n", year, month, day);

	day = day + 1;

    printf("%d�� %d�� %d��\n", year, month, day);
}

// 2. �Լ����� �н� (�߼�)
void sample7_insert(int *y, int *m, int *d)  //������ �������� : �Լ��� �� �ٲܷ��� 1���� ����
{
	*y = 2019;
	*m = 7;
	*d = 9;
}
void sample7_print(int y, int m, int d)
{
	printf("%d�� %d�� %d��\n", y, m, d);
}
void sample7_nextday(int *y, int *m, int *d)
{
	*d = *d + 1;
}
void sample7()
{
	int year, month, day;
	sample7_insert(&year, &month, &day); //���� �ٲ�ϱ� &
	sample7_print(year, month, day); //�״�� ����̴� 0��
	sample7_nextday(&year, &month, &day);//���� �ٲ�ϱ� &
	sample7_print(year, month, day);
}


// 3. ����ü �н� (���)
// ���� ���� == ����ü ���� == ����� ���� Ÿ�� Ű���� ����
//  Ÿ�� Ű����  : struct tagdate (==int�� ���� int�� �ϴ°� �� ����)
//  ������ (����) - ���� 3��
//  ��ŭ ũ��� (������ Ÿ��) - (int 3��)12byte
struct tagdate
{
	int year;
	int month;
	int day;
};
void sample8_insert(struct tagdate* date) //�����ʹ� ���� 'Ÿ��'�� �ּҸ� ǥ���ϱ⿡
{                                         // struct tagdateŸ���� �ּҸ� ��Ÿ��
										  // ��, date (����ü)�� �ִ� ��� �� ���� ����
	(*date).year = 2019;//  .  <- �̰� �켱������ ���Ƽ� ()�� ����ġ�°�.  *�� ����� �켱������ ����.
	(*date).month = 7;
	(*date).day = 9;
}
void sample8_print(struct tagdate date)
{
	printf("%04d�� %02d�� %02d��\n", date.year, date.month, date.day);
}
sample8_nextday(struct tagdate* date)
{
	(*date).day = (*date).day + 1;  //date ->day = date ->day + 1; �̷��Ե� ��� ����
}
void sample8()
{
	struct tagdate date;  // date �� Ÿ���� struct tagdate��  int�ƴ�

	sample8_insert(&date); //���� �ٲ�ϱ� &
	sample8_print(date); //�״�� ����̴� 0��
	sample8_nextday(&date);//���� �ٲ�ϱ� &
	sample8_print(date);
}


//================================���ڿ� �Լ�================================
void sample9()
{

}
