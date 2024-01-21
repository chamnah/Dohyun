#include<iostream>
using namespace std;

int main()
{
	//rand(); - random함수 무작위의 수를 뽑아준다.
	/*
	컴퓨터

	가위 바위 보
	*/
	
	//time(0) : utc 시간 - utc 국제 협약 시간
	//1970년 1월 1일 0시 0분부터 현재 시간까지 흐른 초

	//cout << time(0) << endl;
	//srand : 지정한 숫자의 랜덤 페이지로 변경 

	srand(time(0));

	//cout << rand() << endl; // 41
	//cout << rand() << endl;
	//cout << rand() << endl;
	//cout << rand() << endl;
	//cout << rand() << endl;
	//cout << rand() << endl;
	//cout << rand() << endl;

	// 1 ~ 100까지 랜덤한 숫자를 가지고 싶다.
	// rand(); 10000, 32323

	/*
	int num;
	rand % num; - rand값은 0 ~ num -1
	*/
	rand() % 100; // 0 ~ 99
	// 1 ~ 100;

	(rand() % 100) + 1; // 0 + 1 ~ 99 + 1

	//rand() % 101 ; // 0 ~ 100

	//rand를 이용해서 100 ~ 200
	//cout << (rand() % 100) << endl;

	rand() % 200; // 0 ~ 199
	rand() % 201 + 100; // 100 ~ 300

	//-200 ~ 300

	rand() % 100 -200; // 0 ~ 99 

	//cout << rand() % 100 << endl; // 0 ~ 99
	rand() % 501 - 200; // 0 -200 ~ 500 -200 = 300




	//피파 카드 강화
	// 강화 시스템
	// 강화 확률 
	/*
	1. 강화할 수치를 입력 1 ~ 9강
	2. rand로 강화 확률을 계산해서 성공 / 실패
	3.  1 ~ 3강 100프로 성공  
	    4 ~ 5강 50프로 성공
		6 ~ 7강 25프로 성공
		8 ~ 9강 10프로 성공
	*/
	; // 1 ~ 100

	if (rand() % 101 <= 50)
	{
		"성공";
	}
	else
	{
		"실패";
	}

	
}