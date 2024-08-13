#include <iostream>
using namespace std;

int main()
{
	//1. 자료형
	/*
	int      정수                       4byte
	bool   참/거짓(0또는 0이 아닌 수)   1byte
	float    실수(소수)                 4byte
	char     문자                       1byte
	char[10] 문자열                    10byte

	1byte = 8bit   / 4byte = 32bit

	int*    int의 주소값                 8byte - x64(64비트) / 4byte - x86(32비트)
	char*   char의 주소값                8byte - x64(64비트) / 4byte - x86(32비트)

	int&    int 메모리 참조    


	2. for문 / while문 / do while
	-> 1. for문 1부터 10까지 숫자 출력
	   2. while문 
	   3. do while문 
	*/

	/*int a = 10;
	int& refA = a;
	refA = 30;

	cout << a << endl;

	int* pointerA;*/ // 이 변수 이용해서 a의 값을 100으로 변경해보세요.

	/*if (true)
		int temp = 0;

	while (true)
		int temp = 0;*/

	int a = 0;

	// 무조건 한번은 실행됨
	do
	{
		a += 1;
		cout << a << endl;

		if (a == 10)
		{
			break;
		}
	} while (false);


	//temp = 10;
	return 0;
}