#include <iostream>

using namespace std;

int main()
{
	/*
	포인터 : 자료형 / 메모리 주소를 저장하는 자료형
	// 서울 특별시 강남구 무슨 동
	*/

	int a; // 4byte - 메모리크기 //램 카드 - 메모리에 실제로 4바이트만큼 할당됨
	a = 10;

	//cout << "a 의 주소 :" << a << endl;

	//int* pInt = &a; // pInt 포인터로 a의 주소를 가리킴
	//*pInt = 20;

	//cout << "a 의 주소 :" << a << endl;

	//cout << "a의 주소 : " << &a << endl;

	// 메모리 주소 이름 a // 도현이집

	/*
	C++에서 어려운 구간
	
	1. FOR문 배열 - 어떤건지 이해하고 넘김
	2. 포인터(중요) - 저는 프로그래머의 길이 아닌가봐요.
	
	*/

	int _Int; // 4byte
	bool _Bool; // 1byte
	short _Short; // 2byte
	long _Long; // 4byte
	
	float* ptrFloat;// 메모리 주소를 저장하는 자료형
	//자료형 크기 32비트 : 4byte / 64 : 8byte
	// 모든 자료형의 포인터의 크기는 동일하다.

	cout << "포인터의 크기 : " << sizeof(ptrFloat);

	return 0;
}