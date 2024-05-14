#include <iostream>
using namespace std;

struct tagInfo
{
	int a, b, c;
};

//반환형 함수이름(인자(:자료형 변수명)) { 구현부 }

int playDohyun(int a, float b, char c, bool d)
{
	return 100;
}

int main()
{
	int result = playDohyun(1, 2, 3, 4);

	int arrNum[10] = {1,2,3,4,5,6,7,8,9,10};

	int num = 10;// 4byte 정수
	int* pInt = &num; //int pointer
	*pInt = 20;

	pInt = arrNum;
	pInt = &(arrNum[0]);

	pInt[3] = 20;
	*(pInt + 3) = 50;
	
	tagInfo info;
	info.a = 20;

	/*tagInfo* pInfo = nullptr;
	(*pInfo).a = 20;
	pInfo->a = 20;*/

	/*
	동사(움직일 동)
	동적할당(움직일 동) -> 프로그램 실행 중 메모리를 저장
	정적할당 -> 프로그램 시작 전에 메모리를 저장
	*/

	int temp = 10; // 4byte 메모리공간에 temp라는 이름으로 값을 저장
	int* tempA = new int;
	*tempA = 10;
	delete tempA;


	int c = 10;
	c += 10;
	c -= 10;
	//++c; // 11
	//c++; // 12
	//--c; // 11
	//cout << c << endl;
}

/*
함수 만들기
함수에 값을 넘기면, +10 증가 시켜주는 함수를 만드세요~

함수에 값을 넘기면, 10 빼기 하는 함수를 만드세요~
함수에 값을 넘기면, 10 곱하기 하는 함수를 만드세요~
함수에 값을 넘기면, 10 나누기 하는 함수를 만드세요~
*/
/*
05/14 숙제

1. 함수에 인자 두개를 넘겨서 두 인자의 합 구하는 함수
2. 함수에 인자 두개를 넘겨서 두 인자의 빼기 구하는 함수
3. 함수에 인자 두개를 넘겨서 두 인자의 곱 구하는 함수
4. 함수에 인자 두개를 넘겨서 두 인자의 나누기 구하는 함수

*/