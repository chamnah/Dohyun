#include <iostream>

using namespace std;



void Func1()
{
	int a = 20;
}

void Func2()
{
	int a;
	a = 999;
}

void Swap(int a, int b)
{
	a = 20;
	b = 30;
}

int main()
{
	int a = 50;

	//Referrence : 참조하다
	
	// 도현학생이 키우는 고양 
	//고양이 : 하니야~
	//친구 : 냐옹아~
	//사촌 : 나비야~

	// 하니에게 츄르를 주었다
	// 냐옹이에게 츄르를 주었다
	// 나비에게 츄르를 주었다



	int& b = a; // b : 50
	b = 30;    // b : 30

	//int 주소값
	int* pInt = &a;
	*pInt = 20;

	cout << a << endl; // 

	return 0;
}

/* 숙제
복습해오기~~

Sort함수 (배열, 크기) 만들기

*/