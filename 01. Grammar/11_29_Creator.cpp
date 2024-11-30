#include <iostream>
using namespace std;

class A
{
public:
	int m_iNum = 10;
	int* m_pNum = nullptr;
	
public:
	A() 
	{
		cout << "기본 생성자 호출" << endl;
	}
	
	A(const A& other) 
	{
		m_iNum = other.m_iNum;
		
		// 깊은 복사
		m_pNum = new int;
		*m_pNum = *other.m_pNum;

		cout << "복사 생성자" << endl;
	}

	~A() 
	{
		cout << "소멸자 호출" << endl;
	}

};

A Func()
{
	return A();
}

/*
10진수 : 숫자가 10이 되면 앞자리 1증가 : 9
2진수 : 숫자가 2가 되면 앞자리 1 증가 : 1
8진수 : 숫자가 8이 되면 앞자리 1 증가 : 7
16진수 : 숫자가 16이 되면 앞자리 1 증가 : 15
1 2 3 4 5 6 7 8 9 A B C D E F
*/

int main()
{
	int a = 0; // 초기화
	int b = a;
	&a; // a의 주소
	int* pA = &a; // int 자료형 객체의 주소를 저장

	// 도현이 집
	// 노트에 집 주소 적어줘
	// 메모리 크기
	// 도현 학생 아파트 복사 VS 주소 노트에 복사
	//cout << pA << endl;

	
	//A tempA; // 기본 생성자 호출
	//A tempB = tempA; // 복사 생성자 호출(초기화)
	//A tempA = Func(); // 복사 생성자 호출(함수 인자로 복사할 때)
	
	/*
	복사 생성자 : 자신과 동일한 클래스의 객체를 인자로 사용하는 생성자 
	
	복사 생성자 호출 규칙
	1. 클래스 객체 초기화 할 때
	2. 클래스 객체 함수 인자로 넘길 때
	3. 레퍼런스로 참조하는 경우 호출되지 않는다.
	4. 포인터로 접근하는 경우 호출되지 않는다.
	5. 함수 반환 시 호출되지 않는다.

	사용하는 경우
	1. 동일한 클래스로 만들어진 객체를 복사할 때 사용한다.
	   특히, 복사 시 설정이 필요한 경우
	   깊은 복사를 하기 위함
	*/

	/*
	철수가 학교 정문 앞에서 사진을 찍어 "여기 우리 학교야" 원본
	영희가 학교 후문에서 사진을 찍어 "여기 우리 학교야" 참조
	
	*/

	/*
	얕은 복사
	- 클래스에 들어있는 값을 그대로 복사
	- 문제 : 포인터도 그대로 복사하므로, 할당 해제 시 복사된 포인터로 접근하면 문제 발생
	깊은 복사
	- 복사 생성자를 이용하여, 직접 값을 복사
	- 얕은 복사의 문제점을 개선하기 위해 사용함
	장점 : 포인터를 복사할 때 값만 복사하므로 할당 해제 하더라도 문제 없음
	*/


	/*A tempA;
	tempA.m_iNum = 20;
	A tempB = tempA;

	cout << tempB.m_iNum << endl;*/

	int num; // 4byte  

	A tempA;
	tempA.m_pNum = new int;
	*tempA.m_pNum = 100;

	A tempB = tempA; // 주소 복사
	delete tempA.m_pNum; // 할당 해제

	int* ppp = nullptr;
	ppp = new int[10];

	cout << *tempB.m_pNum << endl;
	return 0;
}

/* 숙제
아래와 같은 클래스가 있는 경우, 깊은 복사를 이용하여, 값을 복사해보기

1.
class A
{
public:
	int m_iNum = 10;
	int* m_pNum = nullptr;
}

2. 
class A
{
public:
	int m_iNum = 10;
	int* m_pNum[10];
}
*/