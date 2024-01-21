#include <iostream>
using namespace std;

void main()
{
	/*
	조건문
	if / switch


	if(true/false) // 생략 불가능
	{
		// true가 되면 중괄호 안에 구문 실행	
	}
	else if() // 생략 가능, if문과 동일하게 조건 검사
	{

	}
	else // 위 조건 모두 false면 실행, 생략 가능
	{
	}

	true면 해당 중괄호 구문 실행하고, 탈출
	*/

	/*if (true)
	{
		cout << "first" << endl;
	}
	else if(true)
	{
		cout << "second" << endl;
	}
	
	if (false)
	{
		cout << "third" << endl;
	}
	else
	{
		cout << "four" << endl;
	}*/

	//if (false)
	//	cout << "first" << endl; // 한줄 조건
	//
	//cout << "second" << endl;

	if (false)
		if (true)
			cout << "first" << endl;
		else
			cout << "second" << endl;

	// if문 쓸 떄 중괄호 넣어주는게 좋다. 가독성을 위해서

	//cout : 문자 출력
	//cin : 입력 
	//

	//int num;
	//std::cin >> num; // int - 정수 입력받겠다.

	/*
	char  text;
	std::cin >> text; //문자를 입력 받겠다.
	*/

	//숙제
	// 아래 구문을 활용해서 선택지 만들어보세요.
	// 최대한 해보기

	/*
	숙제 - 다음주까지 숙제(약속)
	int x = 3;
	int y = 4;
	int z = 6;
	int w = 7;
					x        y        z        w
	int position 00000000 00000000 00000000 00000000

	x,y,z,w를 각 바이트에 담은
	position에서 x 추출 / y 추출 / z추출 / w추출
	하여 cout으로 그 값들을 출력
	*/

	/*
	1. 복습!!!!!!
	1. 안보고 오늘 수업 진도 나간다. 기억 만으로 쳐보기
	2. 한번 수업 내용 훑어보고, 다시 안보고 쳐보기
	3. 무한 반복

	// 20 -> 2(저 포함)
	// 선생님 준 코드 읽어보기(안됨)

	MBTI / 오늘의 운세 /

	오늘의 운세 
	0 ~ 7번까지 숫자를 고르세요.

	0번
	cout << "꽝 오늘은 재수가 없는 날입니다. 가는 길 조심하세요."

	if()
	*/

	cout << "1. 강아지 2. 고양이" << endl;
	int num;
	cin >> num;

	if (num == 1)
	{
		cout << "당신은 다정한 사람이군요." << endl;
	}
	else if (num == 2)
	{
		cout << "당신은 까칠한 사람이군요." << endl;
	}
	else
	{
		cout << "잘못눌렀습니다.";
	}
}