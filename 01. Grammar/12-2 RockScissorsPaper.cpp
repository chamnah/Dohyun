#include <iostream>
using namespace std;

enum RockScissorsPaperType
{
	SCISSORS = 1,
	ROCK,
	PAPER
};

void main()
{
	/*
	int playerInput = 0;
	cout << "1. 가위 2. 바위 3. 보" << endl;
	cin >> playerInput;

	int cpuInput = rand() % 3 + 1; //0 + 1 ~ 2 + 1 -> 1 ~ 3  0 + 1 -> 1

	if (playerInput == SCISSORS && cpuInput == SCISSORS)
	{
		cout << "무승부";
	}
	else if (playerInput == ROCK && cpuInput == SCISSORS)
	{
		cout << "이겼습니다.";
	}

	if (playerInput == ROCK)
	{
		cout << "플레이어가 낸 값 : 바위";
	}
	else if (true)
	{

	}

	cout << "cpu가 낸 값 : ";

	*/
	/*
	가위, 바위, 보
	1. 반복문 이용해서 프로그램이 끝나지 않고 계속 실행되게 만드시오.
	2. 임의의 내가 지정한 숫자를 누르면 프로그램 종료
	*/

	/*
	내가 입력한 숫자가 출력되는 프로그램 - 프로그램 끝나지 않고 계속 실행
	
	*/
	
	int input = 0;
	while (true)
	{
		cin >> input;
		cout << "내가 입력한 숫자 :" << input << endl;
	}
	
}
*/