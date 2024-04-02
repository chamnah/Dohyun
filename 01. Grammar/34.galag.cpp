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

void SetBoard(Object* pTarget)
{
	for (size_t i = 0; i < 5; i++)
	{
		board[pTarget->iPosY][pTarget->iPosX + i] = pTarget->arrImage[i];
	}
}

void Input(Object* pPlayer)
{
	// �Է�
		// cout cin
	if (_kbhit() != 0)
	{
		switch (_getch())
		{
		case 'W':
		case 'w':
			pPlayer->iPosY -= 1;
			break;
		case 'S':
		case 's':
			pPlayer->iPosY += 1;
			break;
		case 'A':
		case 'a':
			pPlayer->iPosX -= 1;
			break;
		case 'D':
		case 'd':
			pPlayer->iPosX += 1;
			break;
		default:
			break;
		}
	}

	int playerImageLength = strlen(pPlayer->arrImage);// ���ڿ� ����

	if (pPlayer->iPosX < 0) // x < 0 ���� ���� ����
	{
		pPlayer->iPosX = 0;
	}
	else if (pPlayer->iPosY < 0)
	{
		pPlayer->iPosY = 0;
	}
	else if (pPlayer->iPosY > BOARD_Y - 1)
	{
		pPlayer->iPosY = BOARD_Y - 1;
	}
	else if (pPlayer->iPosX > BOARD_X - playerImageLength)
	{
		pPlayer->iPosX = BOARD_X - playerImageLength;
	}
}

void RenderBoard()
{
	for (size_t i = 0; i < BOARD_Y; i++)
	{
		for (size_t j = 0; j < BOARD_X; j++)
		{
			cout << board[i][j];
		}
		cout << endl;
	}
}
void ClearBoard()
{
	for (size_t i = 0; i < BOARD_Y; i++)
	{
		for (size_t j = 0; j < BOARD_X; j++)
		{
			board[i][j] = ' ';
		}
	}
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
		
		// �Է� �� �÷��̾� �̵�
		Input(&player); 

		// ���忡 �̹��� �׸���
		SetBoard(&player);
		SetBoard(&monster); 
		
		RenderBoard();
		ClearBoard();
		

		Sleep(20); // ���α׷� ���� 20 / 1000
	}
	
	return 0;
}

/*
04/02 ����
1. SetArrImage(Object* pObj){} ���·� �����
  1. ���� �ϳ��� �޾Ƽ� �÷��̾�/�Ѿ�/���� ���� ȣ���ϵ��� ����

2. �÷��̾ �����̽��ٸ� ������, �Ѿ��� ��ġ�� �÷��̾� �ֺ����� �����ϱ�


*/

/*
03/26 ����
1. SetObject�����
-> �Լ��� �� �����غ���
��, �Լ��� ���� �ʰ� ������

2. cout���� Object ������ ����� �� ��� ����ϱ�
*/

/*
03/23 ����
1. Object ����ü�� size ������ �߰��ϱ�
  - �÷��̾� ������ �� �ֱ� *strlen Ȱ�� 
  - ���� ������ �� �ֱ� *strlen Ȱ��

2. while�� �ȿ� �ڵ�� �Լ�ȭ�ϱ�(����)(Ŭ����)
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

/*
����ü Object

1. ��ǥ x,y
2. �̹����� ������ ���ڿ� 
3. �̹����� ������ ���ڿ� ����

Object�� �� �ֱ�

Object ���� ����
��ǥ x 20 y 30
�̹��� "<^0^>" strcpy
�̹��� ���� 
int a = �Լ�
*/

//void SetObject(Object* pA, int posX)
//{
//	pA->iPosX = posX;
//}

/*
����� ����ü�����

1. ����� ����ü
	1. ����� �̸�
	2. ����� Ű
	3. ����� ������
	4. ����� ����
	5. ����� �����̸�

2. ����� ����ü�� ���� �����ϴ� �Լ� �����
3. ����� ����ü ����ϱ�

*/