#include <iostream>

using namespace std;

void swap(int& a/*10*/, int& b/*20*/)
{
	/*cout << "Pre" << endl;
	cout << a << endl;
	cout << b << endl;*/

	int c = b;
	b = a;
	a = c;

	/*cout << "Next" << endl;
	cout << a << endl;
	cout << b << endl;*/
}

int main()
{
	// c/c++ : 포인터
	
	// 레퍼런스 
	/*
	모든 언어에서 사용
	참조자 / 별칭 등 이름으로 사용된다.
	무조건 같은 자료형의 변수를 가리켜야 한다.
	변수를 가리키지 않으면, 생성 불가능
	포인터에 비해 사용이 간편하다.
	*/
	
	//t& refB; // 에러 : 무조건 가리켜야함
	/*
	int* ptrB; // 가리키지 않아도 됨

	int a = 10; // a : 10
	int& refA = a; // 레퍼런스 refA로 int a 가리킴
	refA = 20; // refA와 a는 동일하다. refA로 값을 변경하면, a도 바뀐다.

	cout << a << endl;
	*/
	/*
	1. int a = 30; -> 100으로
	2. char a = 'a';
	*/

	int first = 10;
	int second = 20;

	swap(first, second);
	/*int a = first;
	int b = second;
	
	{
		int c = b;
		b = a;
		a = c;
	}*/

	//cout << first << endl;
	//cout << second << endl;



	int a = 100;
	int& b = a;
	b = 300;

	cout << a << endl;


	/*int a = 100;
	int b = a;
	b = 300;

	cout << a << endl;*/
}

/*
1. 인자 값을 10 증가시키는 함수


2. 배열을 인자로 받은 후에 배열에 값을 1 ~ 10까지 채우는 함수
*/


/*
레퍼런스 함수 만들기

int num = 1000;

add(int num); 덧셈 연산
1. += 기호 사용해서 10씩 더해서 100 까지 더하기
2. ++후위 연산 기호 사용해서 100 까지 더하기
3. ++전위 연산 기호 사용해서 100 까지 더하기
4. = 대입 연산 이용해서 100 더하기
4번 예시
int iNum = 100;
iNum = iNum + 100;


sub(int num); 뺄셈 연산
1. -= 기호 사용해서 10씩 빼서 100 까지 빼기
2. --후위 연산 기호 사용해서 100 까지 빼기
3. --전위 연산 기호 사용해서 100 까지 빼기
4. = 대입 연산 이용해서 100 빼기

mul(int num); 곱셈 연산
1. *= 기호 사용해서 10씩 곱해서 100번 곱하기
2. = 대입 연산 이용해서 100 곱하기

div(int num); 나누기 연산
1. /= 기호 사용해서 10씩 나누어서 100번 나누기
2. = 대입 연산 이용해서 100 나누기

remain(int num); 나머지 연산
1. %= 기호 사용해서 10씩 나머지 연산하여, 100번 나머지 연산 하기
2. = 대입 연산 이용해서 100 나머지 연산 하기
*/

/*
int a[10]; // 1 ~ 10
0 : 1
...
9 : 10
*/

/*
06/04 숙제
int a[10]; // 2 ~ 20
for문 이용해서 배열 10개 짜리 2부터 20 차곡차곡 넣기
조건 단, for문의 범위는 10까지로 제한한다.
*/