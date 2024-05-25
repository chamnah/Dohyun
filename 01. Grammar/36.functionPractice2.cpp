#include <iostream>
using namespace std;

// 함수 반환 하는 방법

// && : 참 && 참 : true(참)
// & : 비트 단위 연산 AND

/*
 010110101
&101010110
      0100
*/

/*
사과 (그리고) 배를 사와라
      and

도현 1000원
사과(1000원)
배(1000원)

사과 또는 배를 사와라
     (or)

사과 O / 배 O / 둘다 사옴
*/

// 30 : 2진수  1010101
// 20 : 2진수 &0101011
//             0000001
//                   1

struct Info
{
	int a;
	int b;
};

Info func()
{
	Info temp;
	temp.a = 30;
	temp.b = 20;

	return temp; // 비트단위 연산
}

int main()
{
	int a; // 30
	int b; // 20

	Info tempA = func();

	a = tempA.a; // 30
	b = tempA.b; // 20

	cout << "a :" << a << endl;
	cout << "b :" << b << endl;

	return 0;
}

/*
함수에 두 인자를 받은 후, 두 인자의 값을 서로 바꾼 후 구조체로 반환하여, 원본 변수의 값을 출력하라
int main(){
    int a = ?;
	int b = ?;
    func(a, b);

	cout << a << endl; 
	cout << b << endl; 
}
*/

/*
05/25 숙제
★★★★★복습~~!!
*/