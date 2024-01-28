#include <iostream>
using namespace std;

int main()
{
	/*
	움직일 동 
	동적 할당 : 프로그램 실행 중에 사용자가 원하는 순간에 메모리 할당
	
	정적 할당 : 컴파일 중 혹은 지정된 곳에서 할당

	*/
	int a; // 4byte 크기의 정수 저장할 메모리 할당

	// C 스타일

	//malloc(20); // 20byte 크기의 메모리 생성

	int* ptrA = static_cast<int*>(malloc(4));
	*ptrA = 20;
	cout << *ptrA;
	free(ptrA); // 메모리 해제
	
	ptrA + 1;

	/*
	숙제
	1. c 스타일로 20byte 크기의 메모리를 동적할당한 후,
	int*를 이용해서 4,5,6,7,8이라는 숫자를 저장한다.
	
	2. 저장된 숫자를 출력한다.
	3. 사용이 끝나면 메모리 해제 시킨다.
	*/

	// C++ 스타일 - 권장

	return 0;
}