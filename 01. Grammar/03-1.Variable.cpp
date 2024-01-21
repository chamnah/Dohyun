#include <iostream>

void main()
{
	/*
	컴퓨터 저장 공간 단위
	1bit  = 0 , 1
	1byte = 8bit  0000 0000 
	1kb   = 1024byte
	1mb   = 1024kb
	1gb   = 1024mb
	1tb   = 1024gb

	자료형 - 데이터를 표현하는 형태

	1byte 8bit

	2^8

	종류      | 용량  | 취급 데이터       |  표현 범위            |  표현범위(unsigned) 
	*char     | 1byte |   문자            |  -128 ~ 0 ~ 127 (256) |   0 ~ 255
	*bool     | 1byte |   참/거짓         |   true / false        |   
	short     | 2byte |   정수            |  -32768 ~ 32767       |   0 ~ 65535
	*int      | 4byte |   정수            |   -21억 ~  21억       |   0 ~ 42억
	long      | 4byte |   정수            |   -21억 ~  21억       |   0 ~ 42억
	long long | 8byte |   정수            |   -2^63 ~  2^63       |
	*float    | 4byte |   실수            |    
	double    | 8byte |   실수            |
	*/

	/*
	int number = 0; // 초기화 c
	int number(0); // 초기화 c++
	int number;     // 선언
	number = 0;     // 대입
	*/

	/*
	short number = 32767;
	std::cout << "First :" << number << std::endl;

	number = 32768; // 오버 플로우 : 메모리 크기를 벗어나는 현상
	std::cout << "Second :" << number << std::endl;
	*/

	/*
	unsigned short number = 32767;
	std::cout << "First :" << number << std::endl;

	number = 50000; // 오버 플로우 : 메모리 크기를 벗어나는 현상
	std::cout << "Second :" << number << std::endl;
	*/

	//bool temp = true; // 0이 아닌 수
	//bool temp = false; // 0

	/*
	// ASC 코드 문자표  
	char text = 'a';
	char text = 97;
	std::cout << text << std::endl;
	*/

	/*
	float number = 0.1f;
	double number2 = 0.1;
	*/

	// 변수 이름 규칙 
	//int 1number = 0;  숫자가 앞에 있으면 안된다.
	//int %number = 0; // _를 제외한 특수 기호 안됨


	// 헝가리안 표기법
	// int = iNumber
	// float = fNumber;
	// bool  = bNumber;
	// char  = szNumber;
	
	// 카멜 표기법
	// GameCount  

	system("pause");
}