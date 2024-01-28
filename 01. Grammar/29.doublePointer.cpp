#include <iostream>
using namespace std;

int main()
{
	int a; // 4byte
	int* pA = &a; // 단일 포인터 64비트 : 8byte
	int** ppA = &pA; // 단일 포인터의 메모리 주소
	int*** pppA = &ppA;
	int******************************* pTemp;

	*pA; // 자료형 int
	*ppA;// 자료형 int* 
	
	//*ppA == int* 
	//
	*(*ppA) = 10;

	/*
	int a = 100;
	int*** pppA;
	pppA를 이용해서 a의 값을 100으로 변경해보세요.
	*/

	return 0;
}