#include <iostream>
using namespace std;

struct Player
{
	int atk;
	int def;
};

int main()
{
	// ����ü ������
	Player ply;
	ply.atk = 10;
	
	Player* pPly;
	pPly = &ply;
	
	// ����ü �����ͷ� �� ���� ���
	(*pPly).atk = 10;
	pPly->atk = 10;
}