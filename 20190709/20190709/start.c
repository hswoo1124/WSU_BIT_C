#include "sample.h"
#include <stdlib.h>

/*void  main()
{
	sample8();
	//���α׷� ���� ����
	return;   
}*/



/*
������Ʈ -�Ӽ� - �����- ����μ��� ���������� ����μ��� ���� ���谡��
���߰���: �������� ����� ���� �߰�(���� ������ ����)
�������:
*/
int main(int argc, char** argv)
{
	/*printf("����: %d\n", argc);
	printf("����: %s\n", argv[0]);
	for (int i = 0; i < argc; i++)
	{
		printf("����: %s\n", argv[0]);
	}*/
	if (argc != 4)
	{
		printf("������: *.exe 10 + 20\n");
		exit(-1);//���α׷� ���� ����
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char oper = argv[2][0];
	int result;

	switch (oper)
	{
	case '+': result = num1 + num2;
		break;
	case '-': result = num1 - num2;
		break;
	}
	printf("%d %c %d = %d\n", num1, oper, num2, result);
	//���α׷� ���� ����
	return 0;
}