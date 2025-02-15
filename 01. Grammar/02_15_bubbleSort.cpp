#include <iostream>
using namespace std;

int main()
{
	const int numCount = 5;
	int arrNum[numCount] = { 28,  19,  24,  12, 7 };

	for (size_t i = 0; i < numCount - 1; i++)
	{
		//arrNum[i] <-> arrNum[i + 1]
		int temp = arrNum[i];
		arrNum[i] = arrNum[i + 1];
		arrNum[i + 1] = temp;
	}

	for (size_t i = 0; i < numCount; i++)
	{
		cout << arrNum[i] << ",";
	}

	//int i = 4;

	//if (i <= 4)// i가 4보다 작으면 참
	//{
	//	cout << i << endl;
	//}

	//1. arrNum 0 ~ 3까지 출력
	//2. arrNum 1 ~ 4까지 출력

	// a <-> b
	int a = 20;
	int b = 30; 

	int temp = a;// temp : a
	a = b;       // a : b
	b = temp;    // b : a


	return 0;
}

/*
숙제
버블 정렬 안보고 칠 수 있게 연습해오기

*/