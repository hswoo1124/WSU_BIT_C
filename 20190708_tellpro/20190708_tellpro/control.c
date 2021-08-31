
#include "std.h"
#define DATA_MAX 10
char g_namelist[DATA_MAX][20]; //전역변수 정적전역공간에 저장, 
char g_phonelist[DATA_MAX][20];//프로그램 시작시생성, 종료시 삭제

void con_insert()
{
	printf("[전화번호부 저장]\n");
	char name[20], phone[20];
	int idx;

	printf("이름: "); 
	gets_s(name, sizeof(name));//scanf_s 안쓰는 이유는 중간에 공백(스페이스바)있으면 종료되서)
	printf("전화번호: ");
	gets_s(phone, sizeof(phone));
	printf("저장위치:(0~%d): ",  DATA_MAX - 1);
	scanf_s("%d", &idx);
	getchar();

	if (strlen(g_namelist[idx]) == 0)
	{
		strcpy_s(g_namelist[idx], sizeof(name), name);  //string.h  (문자열 대입 함수)
		strcpy_s(g_phonelist[idx], sizeof(phone), phone);
		//0--------------------------------------------------------------------
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
		printf("[%02d] %s\t%s\n", i, g_namelist[i], g_phonelist[i]);
	}
}
//배열 검색 알고리즘
int nameotidx(char* name)
{
	for (int i = 0; i < DATA_MAX; i++)
	{
		if (strcmp(g_namelist[i], name)==0) //문자열비교 		
		{
			return i;
		}
	}
	return -1;
}
void con_select()
{
	printf("[전화번호부 검색]\n");
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
		printf("이  름: %s \n", g_namelist[idx]);
		printf("번  호: %s \n", g_phonelist[idx]);
	}
}
void con_update()
{
	printf("[전화번호부 수정]\n");
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

			strcpy_s(g_phonelist[idx], sizeof(phone), phone);
			printf("변경되었습니다.\n");
		}
}
void con_delete()
{
	printf("[전화번호부 삭제]\n");
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
		strcpy_s(g_namelist[idx], sizeof(name), "");  //2개다 같음. 널로 초기화
		g_phonelist[idx][0] = '\0';
		printf("삭제되었습니다.\n");
	}
}
