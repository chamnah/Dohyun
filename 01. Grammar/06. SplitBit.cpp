#include <iostream>
using namespace std;

void main()
{
	/*
	비트를 분할시키기

	서버에서 거대한 데이터가 들어오는 경우
	메모리(RAM)가 많이 없는 환경에서 개발하는 경우 - 로봇

	8gb / 16gb : 배그
	*/

	int num; // 4byte = 2byte / 2byte

	int position; // X 좌표 - 상위 비트 / Y좌표 - 하위 비트
	int x = 2; //  00000000 00000000 / 00000000 00000010         
	int y = 4; //  00000000 00000000 / 00000000 00000100 = 4

	/*
	1byte = 8bit
	       상위                하위
	00000000 00000010 / 00000000 00000100

	00000000 00000000 / 00000000 00000010 -> 00000000 00000010 00000000 00000000
	  
	<<  >>


	*/



	position = y;
	
	/*
	숙제
	복습!!!!!!!!!!!!!!
	
	shift 연산자 - 풀이 과정
	32 16 8  4 2 1
	1  1  0  1 1 0

	32 + 16 + 4 + 2 = 54

	27 / 2 - 13 ... 1 
	13 / 2 - 6  ... 1
	6  / 2 - 3  ... 0
	3  / 2 - 1  ... 1
	1  / 2 - 0  ... 1
	         ->

	11011

	27 - 16  1
	11 - 8   1
	     4   0
	3  - 2   1
	1  - 1   1

	27 / 1046 / 57346
	int num = 27;
	11011
	<< 3
	11011000(2진수) ->  
	128    64    32    16    8    4   2   1
	1       1    0      1    1    0   0   0

	128 +  64 + 16 + 8 = 216 
	192 + 24

	4byte

	10000010110 -> 10000010110000


	num << 3
	00000000000000000010000010110000
	cout << 내 답 : (11011000 / 216) - << num << endl;
	
	num >> 6
	cout << 내 답 : (2진수 / 10진수) - << num << endl;
	
	예시
	00000000 00000000 00000000 00001101 -> 13

	<< 3
	00000000 00000000 00000000 01101000

	>> 1
	00000000 00000000 00000000 00110100
	*/

	
	// 1. 
	//* && : AND - 둘다 참 / 하나라도 거짓면 거짓
	true && true; // true
	true && false;// false
	false && true;// false
	false && false;//false

	// 2.
	//* OR || 하나라도 참이면 참, 둘다 거짓 거짓
	true || true; // true
	true || false;// true
	false || true;// true
	false || false;//false

	/*
	비트 연산
	& | ^
	*/

	/*
	AND 둘다 참이면 참 
	// 하나라도 거짓이면 거짓


	 1010111
    &0110101
	& :
	| :
	^ : 서로가 같으면 거짓 다르면 참
	*/

	/*
	shift 연산자
	
	0110 << 1 -> 1100
	0110 >> 1 -> 0011
	*/

	/*
	1046 - 10000010110
	
	1024  512  256 128 64  32  16   8   4   2   1                  
	1	   0	0	0	0	0	1	0	1	1	0



	00000000000000000010000010110000

	  10000010110000(2)
	->

	*/
	//100101010000



	/*
	숙제
	27 & 54 = 2진수 -> 10진수
	34 | 19 = 2진수 -> 10진수
	20 ^ 14
	149 << 4
	254 >> 3

	예시
	cout << "내가 생각한 답 : (2진수/10진수)" << (27 & 54) << endl;
	  
	(27 & 54) = 2진수 / 10진수


	*/
	
	/*
	27 13  1
	13 6   1
	6  3   0
	3  1   1
	1  0   1
	   -> 11011
	   54 -> 11010

	   11010

	   11011


	   27 -> 2진수
	   54 -> 2진수
            &_____ 
			 2진수 -> 10진수
	*/
	/*
	숙제
	1. 복습~!!!
		1. 우리가 오늘 했던
		cout << "내가 생각한 답 : (2진수/10진수)" << (27 & 54) << endl;
		이 방법으로 내가 임의에 값을 넣어서 연산 해보기
		&,|,^,<<,>> 연산들 모두 사용해서 만들어보세요.

	2. 비트 연산을 통해 버프 시스템 만들어보기
		1. 버프 목록 만들기 (Attack, Defence, HP)
		2. int myBuff 변수만들기
		3. myBuff 변수에 Attack 버프와 HP 버프 넣기 - or
		4. myBuff 변수에 현재 Defence 버프가 있는 체크 - and
		5. 체크한 값 cout 으로 띄우기
		6. myBuff에 Attack 버프 제거 - xor on / off
	*/


	


}