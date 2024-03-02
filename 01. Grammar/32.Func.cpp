#include <iostream>
using namespace std;

//함수 구성
//반환형 함수이름 인자 구현부

bool func(int a)
{
	return false;
}
//void : 리턴할 값이 없는 경우
void Func2()
{
}

int Add(int a, int b)
{
	int c = 0;
	c += 100;

	return a + b;
}

int main()
{
	int a = Add(20, 30);
	cout << a << endl;

	//함수 만들기
	/*
	1. 곱셈하기 함수 - 인자 3개 / 결과값 출력
	*/

	/* 03/02 숙제
	1. 크기 비교 함수
	   - 인자 2개를 넣는다.
	   - 왼쪽값 or 오른쪽이 더 크다 / 작다 / 같다 출력

	2. 문자열 함수
	  - 문자열을 인자로 받아서 문자열의 길이를 반환
	*/
}