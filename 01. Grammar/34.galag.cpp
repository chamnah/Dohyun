#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;
#define BOARD_X 40
#define BOARD_Y 30

struct Object
{
	int iPosX, iPosY;  // ��ǥ
	char arrImage[10]; // �÷��̾� ���
	int size;          // �÷��̾� ũ��
};

char board[BOARD_Y][BOARD_X] = {};//�÷��̾� �� �Ѿ�

void SetObject(Object* pTarget, int iPosX, int iPosY, const char* pImage)
{
	pTarget->iPosX = iPosX;
	pTarget->iPosY = iPosY;
	strcpy_s(pTarget->arrImage, pImage);
}
void SetOption()
{
	// âũ��
	system("mode con:cols=80 lines=45");

	CONSOLE_CURSOR_INFO CursorInfo;
	CursorInfo.dwSize = 1;
	CursorInfo.bVisible = false;

	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &CursorInfo);
}

//��ȯ�� �Լ��̸� (����)
	//{ ������}
	/*
	�Լ� �̸� : SetObject
	��ȯ�� : void
	���� : int posX, int posY, const char* arrImage
	������ : Object ����
	*/

/*
// iPosX���� �����ؼ� ���ڿ� �����ϱ�
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

		// �Է�
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

		int playerImageLength = strlen(player.arrImage);// ���ڿ� ����

		if (player.iPosX < 0) // x < 0 ���� ���� ����
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
		//������ ���� ���� 
		
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

		Sleep(20); // ���α׷� ���� 20 / 1000
	}
	
	return 0;
}

/*
03/23 ����
1. Object ����ü�� size ������ �߰��ϱ�
  - �÷��̾� ������ �� �ֱ� *strlen Ȱ�� 
  - ���� ������ �� �ֱ� *strlen Ȱ��

2. while�� �ȿ� �ڵ�� �Լ�ȭ�ϱ�(����)
  - �Է� �ڵ� �Լ�ȭ �ϱ�
  - board�� �÷��̾�� ���� �ִ� �ڵ� �Լ�ȭ �ϱ�
  - board ����ϴ� �ڵ� �Լ�ȭ�ϱ�

3. �Ѿ� ����
  - �����̽� �ٸ� ������ �Ѿ� ���� 
  - �÷��̾� ��ĭ ���� ����
  - ���� �Ҵ� �̿��ϱ� / new / delete

�ݱ� ����
- ������ �������� ��� �� �� �ִ� ������ �ִ��� �ؿ���
  3�� ���� ���� / 1���̳� 2��
- �ؿ� ���� ������ ���� ��������

03/19 ����
1. ��/��/��/�� ��� �����̵��� �����
2. �÷��̾ ȭ�� ������ ������ �ʵ��� ����



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