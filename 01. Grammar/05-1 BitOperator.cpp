#include <iostream>
using namespace std;

void main()
{
	/*
	버프 시스템
	
	*/

	/*
	4 / 2 = 2 0 
	2 / 2 = 1 0 
	1 / 2 = 0 1 
	


	4 ->  
	
	32  16  8  4  2  1
	0   0   0  1  0  0

	*/

	// 버프 추가
	// 사거리 증가 버프 추가

	/*
	공을 가지고 있다.
	체력이 있다.
	넘어졌다.
	*/

	/*
	개발자님~

	버프 시스템
	1. 버프 목록 : 적중률 증가 / 회피율 증가 / 불 속성
	2. myBuff에 적중률 증가 버프와 불 속성 버프 추가
	3. myBuff에 회피율 증가 버프가 존재하는지 검사
	4. myBuff에 회피율 증가 버프 추가
	5. myBuff에 적중률 버프 제거
	*/

	/*
	128 64 32 16 8 4 2 1 
	                   
	*/

	// 버프목록
	//0x : 16진수
	const int Attack  = 0x0001; //  0000001 1
	const int Defence = 0x0002; //  0000010 2
	const int HP	  = 0x0004; //  0000100 4
	const int MP	  = 0x0008; //  0001000 8
	const int CriDmg  = 0x0010; //  0010000 16
	const int CriRate = 0x0020; //  0100000 32
	//                  0x0040  //  1000000       64 = 16 * 4 
	//                  0x0080  //        128 = 16 * 8
	// or
	// 0000010 Defence
	//|0010000 CirDmg
	// 0010010
	int mybuff = Defence | CriDmg; // 

	bool checkBuff = mybuff & CriDmg; // true / false
	cout << "크리티컬 데미지 존재해? (true) :" << checkBuff << endl;
	//  00010 - mybuff
	//^ 10000 - CriDmg     
	//  10010 - mybuff  
	//(XOR)
	mybuff = mybuff ^ CriDmg;
	checkBuff = mybuff & CriDmg;
	cout << "크리티컬 데미지 존재해? :" << checkBuff << endl;

	mybuff = mybuff ^ CriDmg;
	checkBuff = mybuff & CriDmg;
	cout << "크리티컬 데미지 존재해? :" << checkBuff << endl;

	/*
	OR(|) : 비트를 추가 할 수 있다.
	AND(&) : 비트가 있는지 검사 할 수 있다.
	XOR(^) : 비트를 끄거나 켤 수 있따. On/Off
	*/

	/*
	mybuff = mybuff ^ CriDmg;
	checkBuff = mybuff & CriDmg;
	cout << "크리티컬 데미지 존재해? :" << checkBuff << endl;
	*/
	// true(1) : 0이 아닌 값
	// false(0)
	/*
		XOR : 서로 값이 같으면 거짓(0) 서로 값이 다르면 참(1) 
	
		 10010 - mybuff
		^10000 - CriDmg
		 00010 - mybuff
	
	     현재 계산된 checkBuff의 값을 2진수로 표현해보세요. 
	     AND(&) : 모두 참이어야 참이고 아니면 거짓
	    
		  10000 - CriDmg 16
	     &10010 - mybuff
	      10000 - checkBuff
	 
	    00010 - Defence
		10000 - CriDmg
		10010 - mybuff


		mybuff 값 이진수로 나타내보자!
		


		16 / 2 () - () 
	
	XOR ^ : 껏다 켰다. 스위치 (ON/OFF)
	OR | : 값 추가
	AND & : 값 검사
	*/

	/*
	- 숙제
	- 복습!!!!!!!!!!!!!
	*/


}