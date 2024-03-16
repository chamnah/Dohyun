#include <iostream>
#include <Windows.h>
using namespace std;
#define BOARD_X 40
#define BOARD_Y 30

struct Object
{
	int iPosX, iPosY;  // 좌표
	char arrImage[10]; // 플레이어 모습
};

char board[BOARD_Y][BOARD_X] = {};//플레이어 적 총알

int main()
{
	// 창크기
	system("mode con:cols=80 lines=45");

	CONSOLE_CURSOR_INFO CursorInfo;
	CursorInfo.dwSize = 1;
	CursorInfo.bVisible = false;

	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &CursorInfo);

	Object player;
	player.iPosX = 15;
	player.iPosY = 15;
	strcpy_s(player.arrImage, "<-0->");
	
	while (true)
	{
		system("cls");

		// iPosX부터 시작해서 문자열 복사하기
		board[player.iPosY][player.iPosX] = player.arrImage[0];

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

	}
	
	return 0;
}

/*
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