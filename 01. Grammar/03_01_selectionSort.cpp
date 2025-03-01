#include <iostream>
using namespace std;

int main()
{
	// 선택 정렬 : 내가 정렬할 위치에 해당하는 값을 선택하여 정렬하는 방식

	const int iArrCount = 5;
	int arrNum[5] = { 5, 3, 4, 1, 2 };

	for (int selectionIdx = 0; selectionIdx < iArrCount; selectionIdx++)
	{
		// 오름차순이므로 findIndex는 작은 값을 찾는다.
		int findIndex = selectionIdx;

		//findIndex 찾기
		for (int i = selectionIdx + 1; i < iArrCount; i++)
		{
			if (arrNum[i] < arrNum[findIndex])
			{
				findIndex = i;
			}
		}

		//선택한 selectionIdx값 넣기 
		int temp = arrNum[selectionIdx];
		arrNum[selectionIdx] = arrNum[findIndex];
		arrNum[findIndex] = temp;
	}

	for (int i = 0; i < iArrCount; i++)
	{
		cout << arrNum[i] << " ";
	}

	return 0;
}

/*
복습하기
- 선택 정렬 안보고 작성할 수 있도록 연습해오기 + Swap함수
- 버블 정렬 또 연습해오기
*/