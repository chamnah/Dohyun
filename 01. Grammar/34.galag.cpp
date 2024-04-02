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

void SetBoard(Object* pTarget)
{
	for (size_t i = 0; i < 5; i++)
	{
		board[pTarget->iPosY][pTarget->iPosX + i] = pTarget->arrImage[i];
	}
}

void Input(Object* pPlayer)
{
	// 입력
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

	int playerImageLength = strlen(pPlayer->arrImage);// 문자열 길이

	if (pPlayer->iPosX < 0) // x < 0 왼쪽 점점 감소
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
		
		// 입력 및 플레이어 이동
		Input(&player); 

		// 보드에 이미지 그리기
		SetBoard(&player);
		SetBoard(&monster); 
		
		RenderBoard();
		ClearBoard();
		

		Sleep(20); // 프로그램 쉬기 20 / 1000
	}
	
	return 0;
}

/*
04/02 숙제
1. SetArrImage(Object* pObj){} 형태로 만들기
  1. 인자 하나만 받아서 플레이어/총알/몬스터 각각 호출하도록 변경

2. 플레이어가 스페이스바를 누르면, 총알의 위치를 플레이어 주변으로 변경하기


*/

/*
03/26 숙제
1. SetObject만들기
-> 함수로 값 세팅해보기
단, 함수를 보지 않고 만들어보기

2. cout으로 Object 변수에 저장된 값 모두 출력하기
*/

/*
03/23 숙제
1. Object 구조체에 size 변수를 추가하기
  - 플레이어 사이즈 값 넣기 *strlen 활용 
  - 몬스터 사이즈 값 넣기 *strlen 활용

2. while문 안에 코드들 함수화하기(복습)(클리어)
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

/*
구조체 Object

1. 좌표 x,y
2. 이미지를 저장할 문자열 
3. 이미지를 저장한 문자열 길이

Object에 값 넣기

Object 변수 선언
좌표 x 20 y 30
이미지 "<^0^>" strcpy
이미지 길이 
int a = 함수
*/

//void SetObject(Object* pA, int posX)
//{
//	pA->iPosX = posX;
//}

/*
고양이 구조체만들기

1. 고양이 구조체
	1. 고양이 이름
	2. 고양이 키
	3. 고양이 몸무게
	4. 고양이 성별
	5. 고양이 종류이름

2. 고양이 구조체에 값을 세팅하는 함수 만들기
3. 고양이 구조체 출력하기

*/