#include <iostream>

using namespace std;

int main()
{
	// 캐스팅 - 형변환 - 자료형을 변환시킨다.

	int a = 10000000; // 4byte - 21억
	short b = (short)a; // 2byte - 65000까지 저장

	/*
	C언어
	
	C++언어 - C언어 지원
	C언어 베이스의 확장된 언어 

	C언어 스타일 - 알아둬야 함
	캐스팅
	(자료형)변수 - 변수의 자료형을 다른 자료형으로 변경

	*/

	

	/*
	C++언어 스타일 - 선호
	캐스팅

	정적 - 빌드 할때 에러 발생
	1. staitc_cast<자료형>(변수)
	- 컴파일러에서 통상적으로 허용해주는 캐스팅만 허용
	
	int a; // 정수
	int* pInt = static_cast<int*>(a);
	불가

	int a; // 정수
	short pInt = static_cast<short>(a);
	가능

	int a = 100000;

	short b = a;
	cout << b << endl;

	// short
	// bool
	// longlong
	// long
	// char
	// float

	동적 - 프로그램 실행 중 에러 체크
	2. dynamic_cast<자료형>(변수)
	- 클래스에서 부모 클래스와 자식 클래스 형변환


	3. const_cast<자료형>(변수)
	- const int 변수; // 변하지 않는 수
	- const 포인터에 const를 제거해주는 형변환

	const int* c = &a;
	int* temp = const_cast<int*>(c);

	4. reinterpret_cast<자료형>(변수)
	- 강제 형변환
	- 무조건 형변환 가능 / 단점은 위험하다.
	*/
	

}


