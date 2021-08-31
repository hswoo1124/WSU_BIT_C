
#include "std.h"
#define DATA_MAX 10
student g_stulist[DATA_MAX]; //�������� �������������� ����, 
                               //���α׷� ���۽û���, ����� ����

void con_insert()
{
	printf("[�л����� ����]\n");
	char name[20], phone[20];
	int idx;
	int number;
	char gender;

	printf("�̸�: "); 
	gets_s(name, sizeof(name));//scanf_s �Ⱦ��� ������ �߰��� ����(�����̽���)������ ����Ǽ�)
	printf("��ȭ��ȣ: ");
	gets_s(phone, sizeof(phone));
	printf("�й�: ");
	scanf_s("%d", &number);
	getchar();  //���� �Է¹ް� ���ִ°� ����
	printf("����: ");
	scanf_s("%c", &gender, sizeof(char));
	printf("������ġ:(0~%d): ",  DATA_MAX - 1);
	scanf_s("%d", &idx);
	getchar();

	if (g_stulist[idx].flag == 0)
	{
		student stu =
			student_create(name, phone, number, gender);
		g_stulist[idx] = stu;
		printf("\n\n>>����Ǿ����ϴ�.\n");
	}
	else 
	{
		printf("\n\n>>�ش� ��ġ�� �����Ͱ� �����մϴ�.");
	}

	
}

void con_selectall()
{
	for (int i = 0; i < DATA_MAX; i++)
	{
		if (g_stulist[i].flag == 1)
		{
			student_print(i, g_stulist[i]);
		}
	}
}
//�迭 �˻� �˰���
int nameotidx(char* name)
{
	for (int i = 0; i < DATA_MAX; i++)
	{
		if (g_stulist[i].flag == 1 && strcmp(g_stulist[i].name, name)==0) //���ڿ��� 		
		{
			return i;
		}
	}
	return -1;
}
void con_select()
{
	printf("[�л� ���� �˻�]\n");
	char name[20];
	printf("�̸�: ");
	gets_s(name, sizeof(name));
	int idx = nameotidx(name);
	if (idx == -1)
	{
		printf("�ش� �̸��� �����ϴ�.\n");
	}
	else
	{
		student_print(idx, g_stulist[idx]);
	}
}
void con_update()
{
	printf("[�л����� ����]\n");
	char name[20];
	printf("������ �̸�: ");
	gets_s(name, sizeof(name));
	int idx = nameotidx(name);
		if (idx == -1)
		{
			printf("�ش� �̸��� �����ϴ�.\n");
		}
		else
		{
			char phone[20];		
			printf("������ ��ȭ��ȣ:");
			gets_s(phone, sizeof(phone));

			strcpy_s(g_stulist[idx].phone, sizeof(phone), phone);
			printf("����Ǿ����ϴ�.\n");
		}
}
void con_delete()
{
	printf("[�л����� ����]\n");
	char name[20];
	printf("������ �̸�: ");
	gets_s(name, sizeof(name));
	int idx = nameotidx(name);
	if (idx == -1)
	{
		printf("�ش� �̸��� �����ϴ�.\n");
	}
	else
	{
		g_stulist[idx].flag = 0;
		printf("�����Ǿ����ϴ�.\n");
	}
}

