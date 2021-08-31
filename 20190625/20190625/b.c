
#include "b.h"
void goo()
{

}
void foo()
{
	woo();// <- 호출 불가능 오류뜸 앞에있는 함수는 인지 x
}
void woo()
{
	foo();  //함수호출
}