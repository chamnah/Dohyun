#include <iostream>
using namespace std;

int main()
{
	int a;
	int* pA = &a; // 단일 포인터
	int** ppA = &pA; // 단일 포인터의 메모리 주소
	int*** pppA = &ppA;
	int******************************* pTemp;

	return 0;
}