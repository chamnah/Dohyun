#include <iostream>
#include "02-1. library.h"

// 네임 스페이스 = 이름 영역 - 프로그래밍 객체를 나누는 카테고리 역할
// - 이름이 겹치지 않기 위해서 보통 사용한다.
// 1. using namespace std; - std라는 이름의 네임 스페이스 사용
// 2. using std::cout - std라는 이름의 네임 스페이스에서 cout이라는 객체 사용
// 3. std::cout - 직접 지정

//using std::cout;



namespace A
{
	void func1()
	{
		std::cout << "네임스페이스 A에서 호출되는 함수야" << std::endl;
	}
}

namespace B
{
	void func1()
	{
		std::cout << "네임스페이스 B에서 호출되는 함수야" << std::endl;
	}
}

void func1()
{
	std::cout << "네임 스페이스 없이 호출되는 함수야" << std::endl;
}

// 반환타입 함수이름 인자 함수 구현부 - 중괄호
void main()
{
	//printf("Hello World"); - c 문법
	//system("pause"); //system 함수 ("pause :일시정지") 
	//cout - c++ 문법
	// 세미콜론(;) 한줄의 문법이 끝났다는것을 의미
	
	//std::cout << "Hello World" << " hi" << std::endl;
	std::cout << "Hello World2" << " hi2" << std::endl; // endl - 개행


	//std::cout << "Hello " << std::endl << " World" << std::endl;
	//std::cout << "Hello";

	//using std::cout; // 네임스페이스인 std를 사용하겠다.
	//cout << "Hello ";

	//using namespace std;
	//cout << "Hello ";
	// cout = c + out
	// endl = end + line 개행 == \n


	A::func1(); // A == 홀란드 func1 == 패스
	B::func1();
	//func1();
	//func2();
	/*
	*/

	// 숙제 
	// 헤더파일 하나 만들어서 거기에다가 홀란드 네임스페이스로 
	// 홀라드가 할거 같은 기능들이 담긴 함수를 여러개 만들어서 main 함수에다가 
	// 호출하는 거 만들기
	// namespace Haland
	// {
	//   함수 패스(); // cout으로 문자열 출력 예시 : 패스 성공
	//   함수 슛();
	//   함수 태클();
	//   함수 세리머니();
	// }
	//
	// main(){ 함수 패스(); }
	// 복습!!!!!!!!!!!!!!!!!!

	Haland::Shot();
}

// x86 : 32비트 intel 32비트 용 cpu 제품번호가 86 
// x64 : 64비트

// dubungging
// de + bug : 벌레 없애는 단계

// Visual Studio 빌드 단계 3 단계
// 1. 컴파일 단계 : 전처기 과정 + 소스 코드 -> 어셈블러 -> 기계어로 변환하는 과정
/* 주석은 제거 기계어로 번역하는 과정               
   오류가 있는지 검사하고, obj 파일인 기계어로 반환한다.
   CXXXX : 에러코드 (컴파일 에러)
   input : *.cpp
   output : *.obj

   2. 링크 단계  : 기계어로 만들어진 obj 파일을 연결하는 단계
                   Linker가 주체되어서 실행.
				   LNK XXXX 에러코드 (링크 에러)
				   input : *.obj 번역된 상태의 독립된 obj
				  output : *.obj 번역된 상태로 연결된 obj


   3. 빌드 단계 : 실행 프로그램을 생성
                  input : *.obj
				  output : *.exe
				  

중요 빌드 순서 : 전처리기 -> 컴파일 -> 어셈블 -> 링크 -> 빌드 
*/

// C - 절차지향 프로그래밍 언어
// C ++ - 객체지향 프로그래밍 언어

/*
절차지향 프로그램
코드 낭비가 심하다.
분할 작업 어렵다.

프로그램 순서를 기준으로 만들어진 기법

프로그램
도현 아침 프로그램

이불을 걷고 일어난다.
밥을 먹는다.
옷을 갈아 입는다.
신발을 신는다.
집을 나간다.

객체 지향 프로그램
코드 재사용성
여러명이 분할 작업이 가능하여 일 효율이 높다.

객체 - 도현학생 / 이불(덮기/걷기) / 밥(먹기) / 옷(벗기 /입기) / 집(나가기)

이불 = 걷기
밥 = 먹기
옷 = 벗기
옷 = 입기
옷 = 입기
집 = 나가기

이불을 걷고 일어난다.
밥을 먹는다.
옷을 갈아 입는다.
신발을 신는다.
집을 나간다.

*/