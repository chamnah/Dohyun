#include <iostream>
using namespace std;

void Swap(int& iLeft, int& iRight)
{
	int temp = iLeft;
	iLeft = iRight;
	iRight = temp;
}

int main()
{
	const int iNumCount = 6;
	int iNums[iNumCount] = { 5, 3, 999, 4, 1, 2 };

	for (size_t i = 0; i < iNumCount; i++)
	{
		for (size_t j = 0; j < iNumCount - 1; j++)
		{
			if (iNums[j] < iNums[j + 1])
			{
				Swap(iNums[j], iNums[j + 1]);
			}
		}
	}

	cout << "iNums : ";
	for (size_t i = 0; i < iNumCount; i++)
	{
		cout << iNums[i] << ", ";
	}

	return 0;
}

/*
숙제 : 복습~

1. 연습해보기 / 내림차순 | 오름차순
for (size_t j = 0; j < iNumCount - 1; j++)
		{
			if (iNums[j] < iNums[j + 1])
			{
				Swap(iNums[j], iNums[j + 1]);
			}
		}

2. 전체 정렬 연습해보기
*/