#include <stdio.h>
void exam1()
{
	int n = 5;
	n += 10;
	printf("%d\n", n); //15
}
void exam2()
{
	double f1 = 5.01, f2 = 5.5;
     double n = f1 + f2;
	printf("%lf\n", n); //10.5
}
void exam3()
{
	int n, m = 7;
	n = m / 3;
	printf("%d\n", n); //2
}
void exam4()
{
	int n, m = 7;
	n = m != 7;   //m�� 7�� ������ false
	printf("%d\n", n); //0
}
void exam5()
{
	int n = 5, m = 7;
	n *= (n + m) % m;  // 5*5
	printf("%d\n", n); //25
}
void exam6()
{
	int a = -1, b = 20, c = 30, x;
	x = ++a || ++b&&++c;  //  ����(-1�̱ⶫ��) || Ʈ�� && Ʈ��
	printf("%d %d %d %d\n", x, a, b, c);	//1, 0, 21, 31
}
void exam7()
{
	int a = -1, b = 20, c = 30, x;
	x = ++a || ++b || ++c;  // f || t || t
	printf("%d %d %d %d\n", x, a, b, c); // 1 0 20 30
}
void exam8()
{
	int a = 5, b = 6, c = 7, d = 8, x;
	x = a < b || a < c && c < d;  //t || t  && t
  	printf("%d\n", x); // 1
}
void exam9()
{
	int x = 2, y = 0, z = 3, k;
	k = ++x && ++y || ++z; // ||�� �ϳ���  t�� t�̱⶧����  �ڿ��� ���� �ʿ��� ������
	printf("%d %d %d %d\n", x, y, z, k); //3 1 3 1
}
void exam10()
{
	int i = -10;
	i = +i;
	printf("%d\n", i); // -10  ( +  *  -10  =  -10)
	i = -10;
	i = -i;
	printf("%d\n", i); // 10
}
void exam11()
{
	short s = 10;
	printf("%d\n", !s); //0 Ʈ���̱ⶫ�� f
	s = -1;
	printf("%d\n", !s); //0Ʈ���̱ⶫ�� f
	s = 0;
	printf("%d\n", !s); // 1 //0 =f�ϱ� 1
}
// -----------------------------------------
void exam12()
{
	int input;
	float output;
	printf("ȭ���µ�: ");
	scanf_s("%d", &input);
	output = 5.0f/9*(input-32);
		printf("ȭ���µ�:%d , �����µ�: %.1f��\n", input, output);
}
void exam13()
{
	int first, second, third;
	int sum;
	float aver;
	printf("������ 3�� �Է��Ͻÿ�.\n");
	scanf_s("%d", &first );
	printf("first = %d  ������ 2�� �Է��Ͻÿ�.\n", first);
	scanf_s("%d", &second);
	printf("first = %d second = %d ������ 1�� �Է��Ͻÿ�.\n", first, second);
	scanf_s("%d", &third);
	sum = first + second + third;
	aver = sum / 3.0f;
	printf("��: %d  ���: %f\n", sum, aver);
}
void exam14()
{
	char ch1;	
	printf("������ �ϳ��� �Է��ϼ���\n");
    scanf_s("%c", &ch1 , sizeof(char));
	printf("�Է¹��ڴ� %c �̸�, ���ĺ� %d��° �Դϴ�.", ch1 - 32,ch1 - 96);	
}
void exam15()
{
	int first, second;
	printf("����2���Է�\n");
	scanf_s("%d %d", &first, &second);
	printf("���� �ݴ�� ���: %d,%d", second, first);
}
void exam16()
{
	int first, second;
	printf("����2���Է�\n");
	scanf_s("%d %d", &first, &second);
	printf("���� = %d", second + first);
}
void exam17()
{	
	char ch1;
	int i;
	printf("���� �ϳ��� �Է��ϼ���\n");
	scanf_s("%c", &ch1, sizeof(char));
	i = ch1 - '0';
	printf("%d\n", i);
}
void exam18()
{
	int first;
	printf("����1���Է�\n");
	scanf_s("%d", &first);
	printf("5�� ���� ��=%d ������ = %d\n",first/5, first%5);
}
void exam19()
{
	char ch1;
	printf("�ҹ��� ���� �ϳ��� �Է��ϼ���\n");
	scanf_s("%c", &ch1, sizeof(char));
	printf("�Է¹����� �빮�ڴ� %c�Դϴ�.\n", ch1 - 32);
}