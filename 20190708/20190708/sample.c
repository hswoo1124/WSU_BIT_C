#include <stdio.h>

void sample1()
{
	char msg[] = "abc"; //���ڿ��迭
	char msg2[] = { 'a','b','c' }; //���� �迭

	msg[1] = 'B';
	msg2[1] = 'B';
	printf("%c\n", msg[1]);
	printf("%c\n", msg2[1]);
	// %s = ���޵� �ּҺ��� \0(��) ���� ���
	printf("%s\n", msg[1]);
	printf("%s\n", msg2[1]);
	printf("%s\n", msg + 1);
	//printf("%s\n", msg2 + 1); ���� ���Ұ� %s
}
void sample2()
{
	char str[] = "ab";
	char *str2 = "ab"; // ���ٲ�

	str[1] = '2';
	printf("%s\n", str2);
	//str2[1] = '1' --����
	str2 = "ccc";  // ����

	}
void sample3()
{
	char str1[4]="abc";
	char str2[4];
	//str2 = str1;    2�� �迭�̶� �ȴ�
	int i = 0;
	for (i = 0; str1[i] != 0; i++)
	{
		str2[i] = str1[i];
	}
	str2[i] = '\0';
	printf("%s\n", str2);
}
void sample5(char str1[], char* str2)
{
	int i = 0;
	for (i = 0; str2[i] != 0; i++)
	{
		str1[i] = str2[i];
	
	}
	str2[i] = '\0';
}
void sample4()
{
	char str1[3] = "ab";
	char str2[3];
	sample5(str2, str1); //���ڿ� ���� �Լ�
	printf("%s\n", str2);
}
