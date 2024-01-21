#include <iostream>

using namespace std;

int main()
{
	/*
	int arrInt[10]; // 숫자 갯수만큼의 자료형 생성
	                // 0 ~ 9

	char a = 'a'; //아스키 코드

	char arrChar[10] = "안녕"; //문자
	// "페이커" / "쵸비"


	char arrTemp[5] = "abcd"; //\0 : 문자열 끝 
	int ab = 0;
	*/
	
	//int a = 10;
	//int b;
	//b = a;

	//int arrA[10] = { 0,1,2,3,4 };
	//int arrB[10]; // 0 ~ 9
	//arrB[0] = arrA[0];
	//arrB[1] = arrB[1];

	/*char a = 'a';
	char b;
	b = a;

	char arrA[10] = "AB\0CD";
	char arrB[10];
	
	for (size_t i = 0; i < 10; i++)
	{
		arrB[i] = arrA[i];
	}

	cout << arrB;*/
	//cout << arrB;

	//char arrA[10] = "ABCD";
	//char arrB[10] = "EFGH";
	//
	//arrA = arrA + arrB; //ABCDEFGH
	//arrA += arrB;

	//arrA // ABCDEFGH

	//char nickName[20] = "faker";

	char arrA[10] = "ABCD";
	char arrB[10] = "EFGH";

	int endIdx = 0;
	for (int i = 0; i < 10; i++)
	{
		if (arrA[i] == '\0')
		{
			endIdx = i;
			break;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		arrA[endIdx + i] = arrB[i];
	}
	// 4+i -> endIdx + i

	/*
	복습
	
	숙제
	문자열 비교만들기

	char arrA[10] = "ABCD";
	char arrB[10] = "ABCD";

	arrA / aarB = 문자열이 같은 지 비교

	cout으로 결과 출력
	같으면 같습니다.
	다르면 다릅니다.

	조건 - 대소문자 달라도 같은 문자로 취급
	*/

	char a[5] = "ABCD";
	char b[5] = "ABCD";

	/*
	for (size_t i = 0; i < 4; i++)
	{
		if (a[i] != b[i])
		{
			// 서로 다른 상황 1번이라도
			cout << "서로 다릅니다.";
			return 0;
		}
	}

	cout << "같습니다.";
	*/
	/* bool 변수로 체크
	bool sameChar = true;
	for (size_t i = 0; i < 4; i++)
	{
		if (a[i] == b[i])
		{
			// 서로 같은 상황
		}
		else
		{
			// 서로 다른 상황 1번이라도
			sameChar = false;
		}
	}
	if (sameChar)
	{
		cout << "같습니다.";
		//문자열 출력
	}
	else
	{
		cout << "다릅니다.";
	}*/


	char temp[10]; // 복사
	/*
	숙제
	복습
	문자열 복사
	문자열 이어붙이기
	문자열 비교
	*/

	/*
	1. 복사
	char a[10] = "ABCD";
	char b[10]; a -> b로 복사

	2. 이어붙이기
	char a[10] = "ABCD";
	char b[10] = "EFGH";
	char c[10];
	c = a + b // "ABCDEFGH"
	1. 
	3. 비교
	char a[10] = "ABCD";
	char b[10] = "ABCD";

	같으면 cout으로 같음 출력
	다르면 cout으로 다름 출력

	if(a[0] == 'a' || a[0] == 'A'
	&& b[0] == 'a' || b[0] == 'A')
	{
	
	}

	*/
	/*
	효율적인 방법 아스키 코드
	*/
	char a[5] = "ABCD";
	char b[5] = "EFGH";
	char c[8] = "";

	int i = 0;
	for (int i = 0; i <= 3; i++)
	{
		c[i] = a[i];
	}

	for (int t = 4; t <= 7; t++)
	{
		c[t] = b[t-4];
		//t = 4 i = 0; E t - 4  == 0
		//t = 5 i = 1; F t - 4 == 0 
		//t = 6 i = 2; G t - 4
		//t = 7 i = 3; H t - 4
		//t = 8 i = 4; \0 t - 4
	}

	// i = 0 ABCDEEEE
	// i = 1 ABCDFFFF
	// i = 2 ABCDGGGG
	// i = 3 ABCDHHHH
	// c = ABCDEFGH
	
	/*
	for
	{
	a[0] / b[0] - cmd false
	}

	cmd == true
	a = ABCD
	b = HBCD
	*/
	
	// c = a; 복사 t = 4
	// c[4~7] = b;
}