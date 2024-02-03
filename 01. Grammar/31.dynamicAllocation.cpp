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
	//cout << *ptrA;
	free(ptrA); // 메모리 해제
	
	ptrA + 1;

	//int a = 10;

	/*
	* 
	* 
	숙제
	1. c 스타일로 20byte 크기의 메모리를 동적할당한 후,
	int*를 이용해서 4byte단위로 4,5,6,7,8이라는 숫자를 저장한다.
	                            0 1 2 3 4
	2. 저장된 숫자를 출력한다.
	3. 사용이 끝나면 메모리 해제 시킨다.
	*/

	// C++ 스타일 - 권장

	/*
	
	1. c 스타일로 7byte 크기의 메모리를 동적할당한 후,
	char*를 이용해서 1byte단위로 a~g까지 문자 저장
	                            
	2. 저장된 문자를 출력한다.
	3. 사용이 끝나면 메모리 해제 시킨다.
	*/
	/*
	*의 의미
	
	int* ptrInt;
	*ptrInt = 10;
	
	char* ptrChar;
	*ptrChar
	*/

	/*char temp = 'a' + 3;
	cout << temp << endl;
	
	char szArr1[5] = "abcd";
	char szArr2[5] = "efgh";
	

	1.c 스타일로 8byte 크기의 메모리를 동적할당,
	2. char*를 이용해서 1byte단위로 szArr1과 szArr2의 값을 번갈아서 값을 넣는다.
	3. 저장된 문자를 출력한다.
	4. 사용이 끝나면 메모리 해제 시킨다.

	char* ptrA = aebfcgdh;
	*/

	return 0;
}