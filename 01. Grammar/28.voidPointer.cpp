#include <iostream>
using namespace std;

//ex)
/*
int func(void* pA)
{
	*pA = 10;

	return 0;
}
*/
int main()
{
	//void : 공허함
	//void temp; // void 자체는 메모리 크기가 없음
	void* pVoid; // 64비트 : 8byte / 32비트 : 4byte

	//void* : 모든 자료형의 주소를 담을 수 있음
	/*
	1. 다양한 자료형의 메모리 주소를 담아서 사용할 때
	2. 내가 저장할 메모리 주소의 자료형을 모를 때
	*/

	/*int a;
	int* pA = &a;
	short* pB = &a;
	void* pC = &a;
	func(&a);*/
	

	return 0;
}