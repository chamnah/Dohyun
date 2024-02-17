#include <iostream>
using namespace std;

int main()
{
	/*
	움직일 동 
	동적 할당 : 프로그램 실행 중에 사용자가 원하는 순간에 메모리 할당
	
	정적 할당 : 컴파일 중 혹은 지정된 곳에서 할당

	*/
	//int a; // 4byte 크기의 정수 저장할 메모리 할당

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

	//int* ptrInt = new int; // 메모리 할당
	//delete ptrInt; // 메모리 해제

	//int* ptrInt = new int[10]; // 메모리 배열 할당
	//delete[] ptrInt;

	//c++ 스타일로 int 5개 만든 후
	//7,8,9,10,11을 저장하고 출력한다.
	// 그리고 메모리 해제
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
	

	1.c 스타일로 9byte 크기의 메모리를 동적할당,
	2. char*를 이용해서 1byte단위로 szArr1과 szArr2의 값을 번갈아서 값을 넣는다.
	3. 저장된 문자를 출력한다.
	4. 사용이 끝나면 메모리 해제 시킨다.

	char* ptrA = aebfcgdh;
	ptrA[8] = '\0'
	             0 2 4 6 = szArr1 
				 1 3 5 7 = szArr2
	1. 직접 넣기
	2. for 문 두개 szArr1 / szArr2

	7 / 2 = 3
	5 / 2 = 2
	3 / 2 = 1
	1 / 2 = 0

	6 / 2 = 3
	4 / 2 = 2
	2 / 2 = 1
	0 / 2 = 0
	0 2 4 6 
	0 1 2 3  
	for(szArr1)
	{
	}
	
	for(szArr2)
	{
	}

	3. for 문 한개 if문 한개
	for()
	{
	  if()
	}
	*/
	
	
	/*
	C++ 스타일 동적할당 활용 숙제
	1. 짝수 / 홀수 나누기

	1. int 동적할당을 이용해서 배열에 4,6,2,8,9,3,6,3,7,5 저장
	2. int 동적할당 배열 두개 더 만든다.
	3. 짝수/홀수 나누어서 두개 만든 배열에 담는다.
	4. 짝수값 배열 / 홀수값 배열 출력
	
	EX) int* a = new []; 초기 값 저장
	    int* b = new []; 짝수 저장
		int* c = new []; 홀수 저장

	2. 정렬하기

	1. int 동적할당을 이용해서 배열에 4,6,2,8,9,3,6,3,7,5 저장
	2. 내림차순으로 배열을 정렬시킨다. ex 9(큰수) ~ 1(작은수)
	3. 출력하기
	*/

	int a = 25;

	if (a % 2 == 0)
	{
		cout << "짝수" << endl;
	}
	else
	{
		cout << "홀수" << endl;
	}
	return 0;
}

// 프로그래머
// 3월부터 평일 6시30분~ / 주말 6시 ~ 8시 제외하고 가능
// 2월부터 평일 7시30분~ / 주말 6시 ~ 8시 제외하고 가능

