#include<stdio.h>

void sample1()
{
	int arr[3] = { 1,2,3 };
	printf("%p\n", arr);//�ּ���.  
	printf("%p, %d\n", &arr[0], arr[0]);
	//--------------------------------------------------------------------
	printf("%p\n", arr +2); //1����. �ּҰ��� ��
	// arr�� +2��ŭ �̵� (8����Ʈ �̵�) ->(�迭 1ĭ�� 4����Ʈ �̱� ������)
	printf("%d, %d\n", *(arr + 2), arr[2]); 
	//*��� ������ 0����.  ���̳��� , []�� ��������� 0�� ���̳���
}
void sample2()
{

}
void sample3()
{

}
void sample4()
{

}
void sample5()
{

}
void sample6()
{

}
void sample7()
{

}