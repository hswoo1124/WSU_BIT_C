#include<stdio.h>

//��Ʈ����

void sample1()
{
	//1. 8�� �⼮����( 0 -> 1)(��Ʈ �ѱ� = |����(�ϳ��� 1�̸� 1��))
	int attend = 0; //   0000 0000
	attend = attend | 4;  // 4 == 0000 0010  2���л� �⼮
	attend = attend | 32;  //  5���л� �⼮

	//2. �л��� �⼮�߳�?  (��Ʈ����ũ = &����(��� 1�϶� 1��))
	int check;
	check = attend & 4;
	printf("2��: %s\n", check ? "�⼮" : "�Ἦ");

	// 3. �⼮ ��� (1 -> 0 ��Ʈ���� == &~ ����(~�� 1 -> 0, 0 -> 1�� ��ȯ ,, �� �Ŀ� &����))
	attend = attend &~4;
}

// if  ��� ���� ����
void sample2()
{
	char gender;
	printf("�����Է�:(m or f) \n");
	scanf_s("%c", &gender, sizeof(char));
	if (gender == 'm')
	{
		printf("������ �����Դϴ�.\n");
	}
	else if(gender == 'f')
	{
		printf("������ �����Դϴ�.\n");
	}
	else
	{
		printf("m or f �� �Է����ּ���.\n");
	}
}
// if ����
void sample3()
{
	int n2 = 20;
	float n1 = 10.0f;
	float n3;
	char oper;

	printf("������(+,-,*,/):");
	scanf_s("%c", &oper, sizeof(char));
	if (oper == '+')
	{
		n3 = n1 + n2;
		printf("����: + , �� : %f", n3);
	}
	else if (oper == '-')
	{
		n3 = n1 - n2;
		printf("����: - , �� : %f", n3);
	}
	else if (oper == '*')
	{
		n3 = n1 * n2;
		printf("����: * , �� : %f", n3);
	}
	else if (oper == '/')
	{
		n3 = n1 / n2;
		printf("����: / , �� : %.1f", n3);
	}
	else
	{
		n3 = 0;
		printf("�����ڸ� �Է����ּ���.");
		return; //�Լ� ����
	}
}
// ������ ���
void sample4()
{
	int point;
	printf("����: ");
	scanf_s("%d", &point);
	if (point >= 90 && point <= 100)
	{
		printf("A");
	}
	else if (point >= 80 && point <= 90)
	{
		printf("B");
	}
	else if (point >= 70 && point <= 80)
	{
		printf("C");
	}
	else if (point >= 60 && point <= 70)
	{
		printf("D");
	}
	else if (point >= 0 && point <= 60)
	{
		printf("F");
	}
	else if (point <= 0 || point >= 100)
	{
		printf("����");
	}
}

// switch
void sample5()
{
	int n;
	printf("���� 1~3: ");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:
		printf("test1\n");
		break;
	case 2:
		printf("test2\n");
		break;
	case 3:
		printf("test3\n");
		break;
	default: 
		printf("no\n");
		break;
	}
}

//while��
void sample6()
{
	int i = 0;
	while (i<5)
	{
		//-------------------------------------
		//------------------------------------- ����
		i++;
	}
}
//���� 1~100 ���
void sample7()
{
	int	i = 1;
	while (i<101)
	{
		//-------------------------------------
		//------------------------------------- ����
		printf("%d", i);
		i++;
	}
}
//1~100��
void sample8()
{
	int i = 1, sum = 0;
	while (i<=100)
	{
		//-------------------------
		sum = sum + i;
		//-------------------------
		i++;
	}
	printf("%d", sum);
}
// if switch while�� �ݺ�Ƚ���� ����������
// �ݺ�Ƚ���� ���������� ���� ��� ��
// ����ڰ� 0�Է� �Ҷ����� ������ �Է¹ޱ�.
void sample9()
{
	int num;
	while (1)  // 1 = Ʈ���̱� ������ ���ѹݺ���
	{
		printf("�����Է�: ");
		scanf_s("%d", &num);  // �����Է��� ���� �ݺ���
		if (num == 0)  //0�� �ľ� ��
			break;
	}
}


