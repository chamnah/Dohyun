#include <iostream>

using namespace std;

class A
{
public:
	// 1byte / 8bit -> 2byte / 16bit
	int a; // 4byte / 32bit 
	//변수 : 저장공간
	//함수란 : 기능

	void func(int a) // 없음
	{
		// 반환형(void) 함수이름(func) 인자(int a) 함수 구현부(중괄호)
	}

	void operator =(int other)
	{
		//반환형(void) 함수이름(operator =) 인자(int other) 함수 구현부(중괄호)
	}
};

class B
{
public:
	int a;
	int b;

	B operator +(B other)
	{
		B temp;
		temp.a = a + other.a;
		temp.b = b + other.b;
		return temp;
	}
};


int main()
{
	B tempA;
	tempA.a = 20;
	tempA.b = 30;

	B tempB;
	tempB.a = 10;
	tempB.b = 40;

	B tempC = tempA + tempB;

	cout << tempC.a << " / " << tempC.b << endl;

	/*
	1. operator 이름은 정해져 있다? 없다? : 있다
	2. operator는 변수다? 아니다? : 아니다 함수다
	3. operator는 클래스 내부에서만 사용할 수 있다? 없다?
	내부에서만 사용 가능
	*/

	/*A temp;
	temp = 3;

	int a = 3;

	a += 3;
	a -= 3;*/

	int a = 10;
	a += 20; // a = a + 20;

	cout << a << endl;

	// operator : 대체

	return 0;
}