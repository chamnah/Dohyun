#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;
#define BOARD_X 40
#define BOARD_Y 30

struct Object
{
	int iPosX, iPosY;  // 좌표
	char arrImage[10]; // 플레이어 모습
	int size;          // 플레이어 크기
};

char board[BOARD_Y][BOARD_X] = {};//플레이어 적 총알

void SetObject(Object* pTarget, int iPosX, int iPosY, const char* pImage)
{
	pTarget->iPosX = iPosX;
	pTarget->iPosY = iPosY;
	strcpy_s(pTarget->arrImage, pImage);
}
void SetOption()
{
	// 창크기
	system("mode con:cols=80 lines=45");

	CONSOLE_CURSOR_INFO CursorInfo;
	CursorInfo.dwSize = 1;
	CursorInfo.bVisible = false;

	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &CursorInfo);
}

//반환형 함수이름 (인자)
	//{ 구현부}
	/*
	함수 이름 : SetObject
	반환형 : void
	인자 : int posX, int posY, const char* arrImage
	구현부 : Object 세팅
	*/

/*
// iPosX부터 시작해서 문자열 복사하기
		int a = 10;
		a = 20;
		a = 30; // 10 20 30
		//abcde ==
		board[15][11] = 'a';
		board[15][12] = 'b';
		board[15][13] = 'c';
		board[15][14] = 'd';
		board[15][15] = 'e';
		//board[15][15] = 0
		//<-0

		//iPosX - 5 ~ iPosX - 1
		//iPosX ~

*/

int main()
{
	SetOption();

	Object player;
	SetObject(&player, 15, 15, "<-0->");
	
	Object monster;
	SetObject(&monster, 15, 10, "<0-0>");
	
	while (true)
	{
		system("cls");

		// 입력
		// cout cin

		if (_kbhit() != 0)
		{
			switch (_getch())
			{
			case 'W':
			case 'w':
				player.iPosY -= 1;
				break;
			case 'S':
			case 's':
				player.iPosY += 1;
				break;
			case 'A':
			case 'a':
				player.iPosX -= 1;
				break;
			case 'D':
			case 'd':
				player.iPosX += 1;
				break;
			default:
				break;
			}
		}

		int playerImageLength = strlen(player.arrImage);// 문자열 길이

		if (player.iPosX < 0) // x < 0 왼쪽 점점 감소
		{
			player.iPosX = 0;
		}
		else if (player.iPosY < 0)
		{
			player.iPosY = 0;
		}
		else if (player.iPosY > BOARD_Y - 1)
		{
			player.iPosY = BOARD_Y - 1;
		}
		else if (player.iPosX > BOARD_X - playerImageLength)
		{
			player.iPosX = BOARD_X - playerImageLength;
		}
		//오른쪽 점점 증가 
		
		for (size_t i = 0; i < 5; i++)
		{
			board[player.iPosY][player.iPosX + i] = player.arrImage[i];
		}
		
		for (size_t i = 0; i < 5; i++)
		{
			board[monster.iPosY][monster.iPosX + i] = monster.arrImage[i];
		}
		
		for (size_t i = 0; i < BOARD_Y; i++)
		{
			for (size_t j = 0; j < BOARD_X; j++)
			{
				cout << board[i][j];
			}
			cout << endl;
		}

		for (size_t i = 0; i < BOARD_Y; i++)
		{
			for (size_t j = 0; j < BOARD_X; j++)
			{
				board[i][j] = ' ';
			}
		}

		Sleep(20); // 프로그램 쉬기 20 / 1000
	}
	
	return 0;
}

/*
03/23 숙제
1. Object 구조체에 size 변수를 추가하기
  - 플레이어 사이즈 값 넣기 *strlen 활용 
  - 몬스터 사이즈 값 넣기 *strlen 활용

2. while문 안에 코드들 함수화하기(복습)
  - 입력 코드 함수화 하기
  - board에 플레이어와 몬스터 넣는 코드 함수화 하기
  - board 출력하는 코드 함수화하기

3. 총알 생성
  - 스페이스 바를 누르면 총알 생성 
  - 플레이어 한칸 위에 생성
  - 동적 할당 이용하기 / new / delete

금기 사항
- 숙제가 여러개인 경우 할 수 있는 숙제라도 최대한 해오기
  3번 숙제 막힘 / 1번이나 2번
- 해온 과정 지우지 말고 가져오기

03/19 숙제
1. 상/하/좌/우 모두 움직이도록 만들기
2. 플레이어가 화면 밖으로 나가지 않도록 막기



03/16 숙제
1. 플레이어 이미지를 iPosX부터 시작해서 문자열 복사하기
2. 기능별로 함수화 최대한 많이 시켜보기


1. 플레이어 전투기
 - 총을 쏘는 기능
 - 원하는 방향으로 움직이기 - 게임판 밖으로는 나가지 못함
 - 체력 -> 0이되면 게임오버
 - 점수

2. 적 전투기
 - 총을 쏘는 기능
 - 체력 -> 0이되면 격추

3. 총알
 - 원하는 방향으로 계속해서 이동한다.
 - 전투기와 부딪히거나, 게임판 밖으로 나가면 삭제
*/