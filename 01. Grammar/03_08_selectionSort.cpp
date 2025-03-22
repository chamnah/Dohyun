#include <iostream>
using namespace std;

void SelectSort()
{
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
}

int main()
{
	int arrNum[] = { 46, 28, 19, 71, 30, 51, 9 };
	int arrNumCount = _countof(arrNum);

	SelectSort();

	for (int i = 0; i < arrNumCount; i++)
	{
		cout << arrNum[i] << " ";
	}

	return 0;
}

// Swap함수 만들기
// 선택 정렬 함수 만들기
// 인자 : 배열, 배열 크기

/*
선택정렬이란,
첫번째 인덱스로부터 마지막 인덱스까지 순차적으로 해당 인덱스에 들어갈 값을 탐색하여 Swap하는 정렬이다.
오름차순인 경우,
정렬되지 않은 수 중 가장 작은 수를 선택하여 Swap한다.

배열: [][][][][]

*/