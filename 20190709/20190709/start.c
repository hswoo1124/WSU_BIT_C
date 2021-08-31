#include "sample.h"
#include <stdlib.h>

/*void  main()
{
	sample8();
	//프로그램 정상 종료
	return;   
}*/



/*
프로젝트 -속성 - 디버깅- 명령인수에 값을넣으면 명령인수에 대한 실험가능
개발과정: 개발툴에 명령행 인자 추가(구분 단위는 공백)
실행과정:
*/
int main(int argc, char** argv)
{
	/*printf("갯수: %d\n", argc);
	printf("갯수: %s\n", argv[0]);
	for (int i = 0; i < argc; i++)
	{
		printf("갯수: %s\n", argv[0]);
	}*/
	if (argc != 4)
	{
		printf("실행방법: *.exe 10 + 20\n");
		exit(-1);//프로그램 강제 종료
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char oper = argv[2][0];
	int result;

	switch (oper)
	{
	case '+': result = num1 + num2;
		break;
	case '-': result = num1 - num2;
		break;
	}
	printf("%d %c %d = %d\n", num1, oper, num2, result);
	//프로그램 정상 종료
	return 0;
}