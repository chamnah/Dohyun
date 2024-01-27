#include <iostream>
using namespace std;

const int playerMaxCount = 11;
// 바뀌면 안되는 수
// 알아보기 쉽게 하기 위함
// 숫자 바꾸면 다 바뀜

int main()
{
	int a = 10; // 상수 - 변하지 않는 수
	int b = 10; 
	//a = 20;

	const int const* const ptrA = &a;
	*ptrA = 10;// 값 변경 불가
	ptrA = &b;// 포인터가 가리키는 주소 변경 불가능 
	/*
	const int* ptr = &a;
	*ptr = 10; // 값 변경 불가
	ptr = &b; // 포인터가 가리키는 주소 변경 가능 
	*/

	/*
	int const* ptr = &a;
	*ptr = 10; // 값 변경 불가
	ptr = &b; // 포인터가 가리키는 주소 변경 가능 
	*/

	int* const ptr = &a;
	*ptr = 10; // 값 변경 가능
	ptr = &b; // 포인터가 가리키는 주소 변경 불가능 

	return 0;
}