#include "std.h"

student student_create(char* name, char* phone, int number, char gender)
{
	student stu;
	stu.flag = 1;
	strcpy_s(stu.name, sizeof(stu.name), name);
	strcpy_s(stu.phone, sizeof(stu.phone), phone);
	stu.number = number;
	stu.gender = gender;
	return stu;
}
void student_print(int i, student stu)
{
	printf("[%02d] %s\t%s\t%d\t%c\n", i, stu.name, stu.phone, stu.number, stu.gender);
}
void student_print2(int i, student stu)
{
	printf("저장 위치: %d\n", i);
	printf("이     름: %s\n", stu.name);
	printf("전화 번호: %s\n", stu.phone);
	printf("학     번: %d\n", stu.number);
	printf("성     별: %c\n", stu.gender);
}