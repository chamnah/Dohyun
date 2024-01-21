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
enum 숫자의 대한 의미를 직접적으로 표현하여 가독성을 높이기 위해서 사용
1. enum 순서는 0부터 순차적으로 증가되어 값이 매칭된다.
*/

void main()
{
	int input = 0;
	cin >> input;
	switch (input)
	{
	case COW:
		cout << "소";
		break;
	case DOG:
		cout << "개";
		break;
	case CAT:
		cout << "고양이";
		break;
	case RABBIT:
		cout << "토끼";
		break;
	default:
		break;
	}
}