#include "std.h"


void app_init()
{
	app_logo();
}

void app_run()
{
	char idx;
	while (1)
	{
		system("cls");
		con_selectall();
		menu_print();
		idx = _getch(); //conio.h
		switch (idx)
		{
		case '1':
			con_insert();
			break;
		case '2':
			con_select();
			break;
		case '3':
			con_update();
			break;
		case '4':
			con_delete();
			break;
		case '5':return;
		}
		system("pause");
	}
}

void app_exit()
{
	app_ending();
}
void app_logo()
{
	printf("***********************************\n");
	printf("��ۺ�Ʈ �ܱ� 44��\n");
	printf("c��� ����\n");
	printf("����ü�� �̿��� �л������� ���α׷�\n");
	printf("2019/07/10\n");
	printf("ccm\n");
	printf("***********************************\n");
	system("pause");
}
void app_ending()
{
	system("cls");
	printf("***********************************\n");
	printf("���α׷��� �����մϴ�.\n");
	printf("***********************************\n");
}
void menu_print()
{
	printf("***********************************\n");
	printf("[1] �л����� ����(insert)\n");
	printf("[2] �л��̸� �˻�(select)\n");
	printf("[3] �л����� ����(update)\n");
	printf("[4] �л����� ����(delete)\n");
	printf("[5] ���α׷� ����\n");
	printf("***********************************\n");
}