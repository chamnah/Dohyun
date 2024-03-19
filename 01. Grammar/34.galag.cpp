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
		for (size_t i = 0; i < 5; i++)
		{
			board[player.iPosY][player.iPosX + i] = player.arrImage[i];
			board[monster.iPosY][monster.iPosX + i] = monster.arrImage[i];
		}
		

		if (_kbhit() != 0)
		{
			switch (_getch())
			{
			case 'W':
			case 'w':
				player.iPosY -= 1;
				break;
			default:
				break;
			}
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