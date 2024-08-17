#include <iostream>
using namespace std;

int b = 0; // 전역변수

int func(int d/*매개변수, 지역변수*/)
{
	int c = 0; // 지역변수
	return 0;
}
/*
struct Info // 자료형
{
	bool a; // 1byte - 4 ... 3
	int  b; // 4byte - 4
	char c; // 1byte - 4
};
*/

//struct Player
//{
//	char name[10];
//	int  attack;
//	int  deffence;
//	int  money;
//};
// 플레이어 구조체에 값을 채운 후 출력하세요.
// 이름 : 김용사, 공격력 : 10, 방어력 : 5, 돈 : 500 


struct Student
{
	char name[10];
	int  kor;
	int  math;
	int  eng;
};
/*
	구조체를 동적할당 후 값 넣고 출력하기
	이름 : 이도현 국어 : ? 수학 : ? 영어 : ?
*/
/*
strcpy_s : 문자열 복사
strcat : 문자열 이어붙이기
strcmp : 문자열 비교

*/

// 가장 큰 자료형 바이트 수 : 
// 실제 저장해야 할 바이트 : 
// 바이트 패딩
int main()
{
	{
		int q = 0;
	}

	//int a = 0; // 지역변수

	
	//int* ptrA = new int; // 동적할당
	//delete ptrA;         // 소멸
	//ptrA = nullptr;      // 초기화

	//int* ptrArray = new int[10];
	//delete[] ptrArray;

	/*
	1. int를 동적할당해서 값을 100을 넣고 동적할당한 변수 출력
	출력 후 소멸

	2. int 10개짜리 배열을 동적할당하여 1 ~ 10까지 숫자를 담고 해당 배열을 출력하시오.
	출력 후 소멸
	*/

	//int arrA[10] = {1,2,3};
	//arrA; // 배열의 이름은 주소
	//arrA == &(arrA[0])

	//cout << *arrA;

	//int arrA[10] = {}; // 1 ~ 10까지
	
	//구조체
	/*
	Info testInfo;

	testInfo.a = 10;

	cout << sizeof(testInfo);


	int = 10;
	int a = 10;
	Player a;
	a.name;
	*/
	// 바이트 패딩

	

	 
	return 0;
}

/*
	메모리영역 4가지
	STACK
	- 지역 변수 : 괄호 안에 선언된 변수
	괄호 안에서 생성 / 괄호 끝나면 소멸

	HEAP
	- 동적할당된 메모리 영역 - 사용자 영역
	내가 원할때 생성 / 내가 원할 때 소멸

	DATA
	- 전역 변수 : 괄호 밖에 선언된 변수
	프로그램 실행될 때 생성 / 프로그램 종료 후 소멸

	CODE
	- 코드
	
*/