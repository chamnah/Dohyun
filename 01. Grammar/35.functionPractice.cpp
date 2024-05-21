#include <iostream>
using namespace std;

int Func(int a)
{
	if (a == 3)
	{
		return a;
	}

	int result = Func(a + 1);
	return result;
}

int main()
{
	srand(time(0));

	rand() % 100 + 1; // 0 + 1 ~ 99 + 1 -> 1 ~ 100

	// 0 ~ 100
	rand() % 101;

	/*
	1. 400 ~ 500
	2. -200 ~ 0
	3. -100 ~ 100 
	*/

	//cout << rand() << endl;

	/*
	재귀 함수 : 자신의 함수를 호출하는 함수
	
	*/

	cout << Func(0) << endl;

	return 0;
}