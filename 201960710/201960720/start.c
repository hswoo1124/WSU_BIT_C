#include "sample.h"


typedef unsigned int unit;

typedef struct tagdata 
{
	char name[20];
	int age;
	char gender;
}data;
void fun1(data d)
{
	printf("%s %d %c\n", d.name, d.age, d.gender);
}
void fun2(data *d)
{
	printf("%s %d %c\n", d->name, d->age, d->gender);
}
void fun3(char* n, int a, char g)
{
	printf("%c %d %c\n", *n, a, g);
}
void fun4(char na, int* ag, char* gen)
{
	printf("%c %d %c\n", na, *ag, *gen);
}
int main()
{
	data d1 = { "abc", 10, 'm' };
	fun1(d1); //데이터 0차 -> 값전달
	fun2(&d1); //데이터 1차 -> 주소전달

	fun3(d1.name, d1.age, d1.gender); //char*   int   char
	fun4(d1.name[1], &d1.age, &d1.gender); //char  int*  char*
	return 0;
}