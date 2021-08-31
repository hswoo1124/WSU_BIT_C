#pragma once

typedef struct  tagstudent
{
	int flag;  //데이터 존재 유무
	char name[20];
	char phone[20];
	int number;
	char gender;
}student;
student student_create(char* name, char* phone, int number, char gender);

void student_print(int i, student stu);
void student_print2(int i, student stu);
