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
	printf("우송비트 단기 44차\n");
	printf("c언어 과정\n");
	printf("배열을 이용한 전화번호부 관리 프로그램\n");
	printf("2019/07/08\n");
	printf("ccm\n");
	printf("***********************************\n");
	system("pause");
}
void app_ending()
{
	system("cls");
	printf("***********************************\n");
	printf("프로그램을 종료합니다.\n");
	printf("***********************************\n");
}
void menu_print()
{
	printf("***********************************\n");
	printf("[1] 전화번호 저장(insert)\n");
	printf("[2] 전화번호 검색(select)\n");
	printf("[3] 전화번호 수정(update)\n");
	printf("[4] 전화번호 삭제(delete)\n");
	printf("[5] 전화번호 종료\n");
	printf("***********************************\n");
}