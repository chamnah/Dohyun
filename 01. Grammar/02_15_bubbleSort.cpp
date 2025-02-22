#include <iostream>
using namespace std;

int main()
{
	const int numCount = 5;
	int arrNum[numCount] = { 19,  28,  24,  12, 7 };
	                       // 12 19 24 28
	for (size_t i = 0; i < numCount - 1; i++)
	{
		for (size_t j = 0; j < numCount - 1; j++)
		{
			if (arrNum[j] > arrNum[j + 1]) // i > i + 1보다 큰 경우(왼쪽 값이 더 큰 경우)
			{
				int temp = arrNum[j];
				arrNum[j] = arrNum[j + 1];
				arrNum[j + 1] = temp;  // i <-> i + 1 Swap
			}
		}
	}

	for (size_t i = 0; i < numCount; i++) // 배열 출력
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