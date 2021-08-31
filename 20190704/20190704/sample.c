#include<stdio.h>

void sample1()
{
	int arr[3] = { 1,2,3 };
	printf("%p\n", arr);//주소임.  
	printf("%p, %d\n", &arr[0], arr[0]);
	//--------------------------------------------------------------------
	printf("%p\n", arr +2); //1차임. 주소값이 뜸
	// arr를 +2만큼 이동 (8바이트 이동) ->(배열 1칸당 4바이트 이기 때문에)
	printf("%d, %d\n", *(arr + 2), arr[2]); 
	//*사용 했으니 0차임.  값이나옴 , []를 사용했으니 0차 값이나옴
}
void sample2()
{

}
void sample3()
{

}
void sample4()
{

}
void sample5()
{

}
void sample6()
{

}
void sample7()
{

}