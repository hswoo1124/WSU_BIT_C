#include <stdio.h>
//����������� ������ Ÿ���� ǥ�������� �ʰ��Ҽ������� ��������
void sample1()
{
	short s1 = 32767;  //short �� �ִ밪��
	printf("%d\n", s1);
	s1 = s1 + 1;
	printf("%d\n", s1); //�̻��ϰ� ����
}
//���ڵ� ����������̱� ������ ������ �����ϴ�.
void sample2()
{
	char ch1;
	ch1 = 'C';
	ch1 = ch1 + 2;
	printf("%c\n", ch1); //E�� ��µ�
}
// a++�� ����Ŀ� +1�߰� (�ؿ� ����ص� �ݿ� x
// ++a�� �� �Ŀ� ���ö����� a�� 1�߰�
void sample3()
{
	int a = 1;
	int result;
	result = ++a + ++a + ++a + a++;
	printf("%d\n", result);
}
//false == 0
//true == 0�� ����(����)  ��ǥ�� 1��.
void sample4()
{
	int result;
	result = 10 && -1;
	printf("%d\n", result);
}