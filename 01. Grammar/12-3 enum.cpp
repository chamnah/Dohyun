#include <iostream>

enum AnimalType
{
	COW,
	DOG,
	CAT,
	RABBIT
};

using namespace std;

/*
enum ������ ���� �ǹ̸� ���������� ǥ���Ͽ� �������� ���̱� ���ؼ� ���
1. enum ������ 0���� ���������� �����Ǿ� ���� ��Ī�ȴ�.
*/

void main()
{
	int input = 0;
	cin >> input;
	switch (input)
	{
	case COW:
		cout << "��";
		break;
	case DOG:
		cout << "��";
		break;
	case CAT:
		cout << "�����";
		break;
	case RABBIT:
		cout << "�䳢";
		break;
	default:
		break;
	}
}