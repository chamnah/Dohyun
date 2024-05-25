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
/*
재귀함수 만들어보기
10씩 덧셈하는 재귀함수
100까지 덧셈을 하면 탈출
*/

/*
함수에 인자 두개를 넘긴 후 두 인자를 합친 값을 반환 시켜주는 함수 만들기

1. 함수에 인자 두개 넘기기(5,15)
2. 두 인자를 합친 값을 반환 시키기

*/