
#include "b.h"
void goo()
{

}
void foo()
{
	woo();// <- ȣ�� �Ұ��� ������ �տ��ִ� �Լ��� ���� x
}
void woo()
{
	foo();  //�Լ�ȣ��
}