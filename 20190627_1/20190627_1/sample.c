
#include <stdio.h>
//���ڿ� ���
void sample1()
{
	printf("hi");
	fprintf(stdout, "hi");
}

//���� ���� �����
void sample2()
{
	char ch, ch2;                                    
	printf("�Է�:|n");
	ch = getchar();
	getchar(); // -> ������ ���� ���� 2������ �������� �ȴ�
	printf("�ι�° �Է�:\n");
	ch2 = getchar();
	
		printf("����: %c , %c\n", ch, ch2);
	
}

//���ڿ� �����
void sample3()
{
	char arr[10]; //���� 9�� ���尡�� �ѱ��� ���ڴ� 2byte (�������� �ι��ڸ� �־����)
	printf("���� 9�� �Է�: ");
	gets_s(arr, sizeof(arr));

	printf("���: %s\n", arr);
	puts(arr); // (�Է��ѰŸ� ���)
}

void sample4()
{
	int num = 10;
	float f = 11.1234f;
	//����� 
	printf("%d\n", num);
	printf("%10d\n", num);
	printf("%-10d\n", num);

	//�Ҽ���
	printf("%.1f\n", f);
	printf("%.2f\n", f);
}

void sample5()
{
	int num1;
	printf("�����Է�: ");
	scanf_s("%d", &num1);  //&(�ּ�)�� �Ⱥ��̸� ó�� ������ ���� ��

	printf("���: %d\n", num1);
}

void sample6()
{
	char ch[20];
	int age;
	char gender;
	float weight;

	printf("�̸��� �Է��ϼ���.");
	scanf_s("%s", &ch, sizeof(ch));
	printf("���̸� �Է��ϼ���.");
	scanf_s("%d", &age);
	getchar();
	printf("����(m or f)�� �Է��ϼ���.");
	scanf_s("%c", &gender, sizeof(char));
	printf("�����Ը� �Է��ϼ���.");
	scanf_s("%f", &weight);

	printf("�̸�: %s \n ����: %d  \n ����: %c  \n  ������: %f \n", ch, age, gender, weight);

}