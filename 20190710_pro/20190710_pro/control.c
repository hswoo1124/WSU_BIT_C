
#include "std.h"
#define DATA_MAX 10
student g_stulist[DATA_MAX]; //전역변수 정적전역공간에 저장, 
                               //프로그램 시작시생성, 종료시 삭제

void con_insert()
{
	printf("[학생정보 저장]\n");
	char name[20], phone[20];
	int idx;
	int number;
	char gender;

	printf("이름: "); 
	gets_s(name, sizeof(name));//scanf_s 안쓰는 이유는 중간에 공백(스페이스바)있으면 종료되서)
	printf("전화번호: ");
	gets_s(phone, sizeof(phone));
	printf("학번: ");
	scanf_s("%d", &number);
	getchar();  //정수 입력받고 써주는게 좋다
	printf("성별: ");
	scanf_s("%c", &gender, sizeof(char));
	printf("저장위치:(0~%d): ",  DATA_MAX - 1);
	scanf_s("%d", &idx);
	getchar();

	if (g_stulist[idx].flag == 0)
	{
		student stu =
			student_create(name, phone, number, gender);
		g_stulist[idx] = stu;
		printf("\n\n>>저장되었습니다.\n");
	}
	else 
	{
		printf("\n\n>>해당 위치는 데이터가 존재합니다.");
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
//배열 검색 알고리즘
int nameotidx(char* name)
{
	for (int i = 0; i < DATA_MAX; i++)
	{
		if (g_stulist[i].flag == 1 && strcmp(g_stulist[i].name, name)==0) //문자열비교 		
		{
			return i;
		}
	}
	return -1;
}
void con_select()
{
	printf("[학생 정보 검색]\n");
	char name[20];
	printf("이름: ");
	gets_s(name, sizeof(name));
	int idx = nameotidx(name);
	if (idx == -1)
	{
		printf("해당 이름은 없습니다.\n");
	}
	else
	{
		student_print(idx, g_stulist[idx]);
	}
}
void con_update()
{
	printf("[학생정보 수정]\n");
	char name[20];
	printf("수정할 이름: ");
	gets_s(name, sizeof(name));
	int idx = nameotidx(name);
		if (idx == -1)
		{
			printf("해당 이름은 없습니다.\n");
		}
		else
		{
			char phone[20];		
			printf("변경할 전화번호:");
			gets_s(phone, sizeof(phone));

			strcpy_s(g_stulist[idx].phone, sizeof(phone), phone);
			printf("변경되었습니다.\n");
		}
}
void con_delete()
{
	printf("[학생정보 삭제]\n");
	char name[20];
	printf("삭제할 이름: ");
	gets_s(name, sizeof(name));
	int idx = nameotidx(name);
	if (idx == -1)
	{
		printf("해당 이름은 없습니다.\n");
	}
	else
	{
		g_stulist[idx].flag = 0;
		printf("삭제되었습니다.\n");
	}
}

