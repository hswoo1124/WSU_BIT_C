
#include "std.h"
#define DATA_MAX 10
char g_namelist[DATA_MAX][20]; //�������� �������������� ����, 
char g_phonelist[DATA_MAX][20];//���α׷� ���۽û���, ����� ����

void con_insert()
{
	printf("[��ȭ��ȣ�� ����]\n");
	char name[20], phone[20];
	int idx;

	printf("�̸�: "); 
	gets_s(name, sizeof(name));//scanf_s �Ⱦ��� ������ �߰��� ����(�����̽���)������ ����Ǽ�)
	printf("��ȭ��ȣ: ");
	gets_s(phone, sizeof(phone));
	printf("������ġ:(0~%d): ",  DATA_MAX - 1);
	scanf_s("%d", &idx);
	getchar();

	if (strlen(g_namelist[idx]) == 0)
	{
		strcpy_s(g_namelist[idx], sizeof(name), name);  //string.h  (���ڿ� ���� �Լ�)
		strcpy_s(g_phonelist[idx], sizeof(phone), phone);
		//0--------------------------------------------------------------------
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
		printf("[%02d] %s\t%s\n", i, g_namelist[i], g_phonelist[i]);
	}
}
//�迭 �˻� �˰���
int nameotidx(char* name)
{
	for (int i = 0; i < DATA_MAX; i++)
	{
		if (strcmp(g_namelist[i], name)==0) //���ڿ��� 		
		{
			return i;
		}
	}
	return -1;
}
void con_select()
{
	printf("[��ȭ��ȣ�� �˻�]\n");
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
		printf("��  ��: %s \n", g_namelist[idx]);
		printf("��  ȣ: %s \n", g_phonelist[idx]);
	}
}
void con_update()
{
	printf("[��ȭ��ȣ�� ����]\n");
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

			strcpy_s(g_phonelist[idx], sizeof(phone), phone);
			printf("����Ǿ����ϴ�.\n");
		}
}
void con_delete()
{
	printf("[��ȭ��ȣ�� ����]\n");
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
		strcpy_s(g_namelist[idx], sizeof(name), "");  //2���� ����. �η� �ʱ�ȭ
		g_phonelist[idx][0] = '\0';
		printf("�����Ǿ����ϴ�.\n");
	}
}
