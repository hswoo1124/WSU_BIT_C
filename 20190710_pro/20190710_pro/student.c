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
	printf("���� ��ġ: %d\n", i);
	printf("��     ��: %s\n", stu.name);
	printf("��ȭ ��ȣ: %s\n", stu.phone);
	printf("��     ��: %d\n", stu.number);
	printf("��     ��: %c\n", stu.gender);
}