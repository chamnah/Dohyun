#include <iostream>
using namespace std;

struct Player
{
	int atk;
	int def;
};

int main()
{
	// 구조체 포인터
	Player ply;
	ply.atk = 10;
	
	Player* pPly;
	pPly = &ply;
	
	// 구조체 포인터로 값 접근 방법
	(*pPly).atk = 10;
	pPly->atk = 10;
}