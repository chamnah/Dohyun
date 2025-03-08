#include <iostream>
using namespace std;

int main()
{
	int arrNum[] = { 46, 28, 19, 71, 30, 51, 9 };
	int arrNumCount = _countof(arrNum);

	for (int i = 0; i < arrNumCount; i++)
	{
		//i -> 내가 정렬하고 싶은 인덱스
		int findIndex = i;

		// 가장 작은 값이 들어있는 인덱스 찾기
		for (int j = i; j < arrNumCount; j++)
		{
			if (arrNum[j] < arrNum[findIndex])
			{
				findIndex = j;
			}
		}

		int temp = arrNum[i];
		arrNum[i] = arrNum[findIndex];
		arrNum[findIndex] = temp;
	}

	for (int i = 0; i < arrNumCount; i++)
	{
		cout << arrNum[i] << " ";
	}

	return 0;
}

// Swap함수 만들기
// 선택 정렬 함수 만들기
// 인자 : 배열, 배열 크기