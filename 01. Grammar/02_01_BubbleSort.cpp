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

/*
index   0  1  2  3  4
value   5, 4, 7, 2, 3   5개  : (배열 갯수 - 1)회 정렬
	 -> 4, 5, 2, 3, 7   1회 1개 정렬완료 (7) 
	 -> 4, 2, 3, 5, 7   2회 2개 정렬완료 (5, 7) 
	 -> 2, 3, 4, 5, 7   3회 3개 정렬완료 (4, 5, 7)
	 -> 2, 3, 4, 5, 7   4회 4개 정렬완료 (3, 4, 5, 7)

value   11  10  9  8  7    (배열 갯수 - 1)회 정렬
     -> 10  9   8  7  11   1회          (11)
	 -> 9   8   7  10 11   2회       (10 11)
	 -> 8   7   9  10 11   3회     (9 10 11)
	 -> 7   8   9  10 11   4회 (7 8 9 10 11)

최종 정렬 : 7   8   9  10 11

value    28  19  24  12  7
      -> 19  24  12  7  28 1회
	  -> 19  12  7  24  28
	  -> 12  7  19  24  28
	  -> 7  12  19  24  28

최종 결과7  12  19  24  28
*/