#include <iostream>

using namespace std;

int main()
{
	/*
	음료 자판기

	switch문을 활용하여 자판기 만들기
	돈 : 10000
	1. 콜라(100) 2. 사이다(200) 3. 환타(300) 4. 포카리(400) 5. 종료 

	1. 음료를 구매하면 메시지 띄우기 
	   ex) 콜라를 구매하였습니다.

	2. 음료 구매 후 음료 가격만큼 소지금 줄이기

	3. 음료 구매 시, 소지금이 부족한 경우, 돈이 부족하다는 메시지 띄우기

	4. 종료 선택 시 프로그램 종료

	5. 종료 선택 전까지 무한 반복
	*/

	/*
	Return 과 break 차이
	return : 값을 반환 후 함수 자체를 종료
	         감싸고 있는 while,switch,for문 갯수 관계 없음

	break : 현재 나를 감싸고 있는 구문 "하나"만 탈출
	예시
	while(true)
	{
	   for(int i =0; i < 10; ++i)
	   {
	       break; //딱 for문 하나만 탈출, while 탈출 안됨 
	   }

	   break; // while문 하나만 탈출
	}

	*/

	return 0;
	cout << "값 출력" << endl;//출력
}