#include <iostream>

using namespace std;

void main()
{
	/*
	조건문
	if / switch
	
	swtich(실수를 제외한 값들을 넣을 수 있다.)
	*/


	//int a = 10;

	//switch (a)
	//{
	//case 10:     //case : 조건 검사
	//	break;     //break; 탈출

	//default:     //default : 위에 조건이 모두 맞지 않다면, else
	//	break;
	//}

	// switch문에서 case를 만나면 break를 만날때까지 실행한다. 

	int a = 20;

	switch (a)
	{
	case 20:
		cout << "case 20" << endl;
		break;
	case 30:
		cout << "case 30" << endl;
		break;
	default:
		cout << "default" << endl;
		break;
	}
	int num = 0;
	if (num == 1 || num == 2)
	{

	}

	
	switch (num)
	{
	case 1:
		break;
	case 2:
		break;
	default:
		break;
	}
}