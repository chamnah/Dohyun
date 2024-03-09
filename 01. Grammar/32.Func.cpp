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

int ChangeValue1()
{
	return 30; // int a = 30
}

void ChangeValue2(int* a)
{
	*a = 30;
}

void ChangeValue3(char* a, int count)
{
	for (int i = 0; i < count; i++)
	{
		a[i] = 'a' + i;
	}

	//*(a + i)
	//*a == a[0]
}

int main()
{
	//int a = Add(20, 30);
	//cout << a << endl;
	/*
	//int b = 0;
	//int a = b;
	//a = 30;
	//ChangeValue(b); 위 두줄과 같은 의미 
	//cout << b << endl;
	// 함수 이용해서 바깥에 있는 변수 값 바꾸기
	*/
	//함수 외부의 변수 값을 변경하는 방법
	//첫번째
	//int b = ChangeValue1();
	//cout << b << endl;

	//두번째
	int c = 0; 
	ChangeValue2(&c);
	cout << c << endl;
	
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

	  char 배열 / char*
	*/
	/*
	char value = 'a';
	func(value); // 값을 d로 변경
	cout << value;//값 d를 출력

	int arrInt[10] = {};
	func(arrInt);// 1 ~ 10
	for cout

	const char szText[10] = "abcdef";
	const char* pText = "abcdef";
	int count = 0;

	char text[10] = {};
	//text == &(text[0])

	ChangeValue3(text, 10);

	for (size_t i = 0; i < 10; i++)
	{
		cout << text[i];
	}

	/*
	함수 숙제
	
	문자열 복사
	- 문자열 인자 두개를 받는다.
	- 첫번째 인자로 들어온 문자열을 두번째 인자인 문자열에 복사한다.
	- 두번째 문자열 출력

	bool temp = true;
	문자열 비교
	- 문자열 인자 두개를 받는다.
	- 문자열 두개가 서로 같으면 true 반환 다르면 false 반환 / bool

	abceefg
	abcdefh

	bool k = a == b;
	return k;


	return a == b;

	*/
	/*
	int a[10] = {};
	for (int i = 0; i < 10; i++)
	{
		a[i] = i + 1;
	}
	*/
}