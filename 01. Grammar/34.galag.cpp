#include <iostream>
#include <Windows.h>
using namespace std;
#define BOARD_X 40
#define BOARD_Y 30

struct Object
{
	int iPosX, iPosY;  // ��ǥ
	char arrImage[10]; // �÷��̾� ���
};

char board[BOARD_Y][BOARD_X] = {};//�÷��̾� �� �Ѿ�

int main()
{
	// âũ��
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

		// iPosX���� �����ؼ� ���ڿ� �����ϱ�
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
03/16 ����
1. �÷��̾� �̹����� iPosX���� �����ؼ� ���ڿ� �����ϱ�
2. ��ɺ��� �Լ�ȭ �ִ��� ���� ���Ѻ���


1. �÷��̾� ������
 - ���� ��� ���
 - ���ϴ� �������� �����̱� - ������ �����δ� ������ ����
 - ü�� -> 0�̵Ǹ� ���ӿ���
 - ����

2. �� ������
 - ���� ��� ���
 - ü�� -> 0�̵Ǹ� ����

3. �Ѿ�
 - ���ϴ� �������� ����ؼ� �̵��Ѵ�.
 - ������� �ε����ų�, ������ ������ ������ ����
*/