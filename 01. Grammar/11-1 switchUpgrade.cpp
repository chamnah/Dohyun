#include <iostream>
using namespace std;

int main()
{
	srand(time(0));
	cout << "1강부터 9강까지 강화등급을 알려주세요.";
	int num;
	cin >> num;
	switch (num)
	{
	case 1:
		cout << "성공입니다." << endl;
		break;
	case 2:
		cout << "성공입니다." << endl;
		break;
	case 3:
		cout << "성공입니다." << endl;
		break;
	}

	
		switch (num)
		{
		case 4:
			if (rand() % 101 <= 50)
			{
				cout << "성공" << endl;
			}
			else
			{
				cout << "실패" << endl;
			}
			break;
		case 5:
			if (rand() % 101 <= 50)
			{
				cout << "성공" << endl;
			}
			else
			{
				cout << "실패" << endl;
			}
			break;

		default:
		{
			cout << "실패" << endl;
		}
		}
	if (rand() % 101 <= 25)
		switch (num)
		{
		case 6:
			cout << "성공" << endl;
			break;
		case 7:
			cout << "성공" << endl;
			break;

		default:
		{
			cout << "실패" << endl;
		}

		if (rand() % 101 <= 10)
		switch (num)
		{
		case 8:
			cout << "성공" << endl;
			break;
		case 9:
			cout << "성공" << endl;
			break;

		default:
		{
			cout << "실패" << endl;
		}
		}
		}

	//if (true)
	//{
	//	// true면 실행
	//}

	//{
	//	if (true)
	//}

	/*
	숙제 없음
	-복습~~~~!!!
	
	23일 지금까지 했던거 테스트

	- 코드를 보지 않고 치기

	1. cpp만들어서 cout을 문장 세줄 출력하기 - 0
	2. 자료형 - 예시 int 정수형 데이터 4byte
	3. 연산자 - cout << "내가 생각한 답 : " <<  10 & 1 << endl;0
	4. 비트를 이용한 버프 시스템 / 버프 목록 / 버프 넣기 / 버프 삭제 / 버프 검사
	5. 비트 쪼개기 int pos; int x;(상위) int y;(하위) - 상위 비트 하위 비트에 값 넣고 넣은 값 추출
	6. if문으로 강화 시스템 만들기 - 0 srand
	7. switch문으로 변환하기 - 0 - default

	19 & 7
	19 | 7
	19 ^ 7
	19 << 5
	19 >> 3
	*/
	 
	//

	/*
	19 >> 3
	10

	19 << 5
	1001100000
	512 +   64+ 32  
	 
	 576 + 32 608
	*/



	/*
	bool  :
	int(integer) - 정수(숫자) 음수 양수 0 
	float - 실수()0.1 -0.01
	char - 문자 :
	
	*/


	/*
	17 & 5
	17 | 5
	17 ^ 5
	*/

	/*
	bool    
	int
	float
	char - 캐릭터
	
	25 << 4
	25 >> 3

	*/

	/*
	숙제
	버프 시스템	
	비트 쪼개기 - 
		
	cpp파서 만들어오기
	모든 줄에 각 설명 주석으로 넣기
	*/
}