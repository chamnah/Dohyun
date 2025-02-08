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
���� : ����~

1. �����غ��� / �������� | ��������
for (size_t j = 0; j < iNumCount - 1; j++)
{
	if (iNums[j] < iNums[j + 1])
	{
		Swap(iNums[j], iNums[j + 1]);
	}
}

2. ��ü ���� �����غ���
*/

/*
index   0  1  2  3  4
value   5, 4, 7, 2, 3   5��  : (�迭 ���� - 1)ȸ ����
	 -> 4, 5, 2, 3, 7   1ȸ 1�� ���ĿϷ� (7) 
	 -> 4, 2, 3, 5, 7   2ȸ 2�� ���ĿϷ� (5, 7) 
	 -> 2, 3, 4, 5, 7   3ȸ 3�� ���ĿϷ� (4, 5, 7)
	 -> 2, 3, 4, 5, 7   4ȸ 4�� ���ĿϷ� (3, 4, 5, 7)

value   11  10  9  8  7    (�迭 ���� - 1)ȸ ����
     -> 10  9   8  7  11   1ȸ          (11)
	 -> 9   8   7  10 11   2ȸ       (10 11)
	 -> 8   7   9  10 11   3ȸ     (9 10 11)
	 -> 7   8   9  10 11   4ȸ (7 8 9 10 11)

���� ���� : 7   8   9  10 11

value    28  19  24  12  7
      -> 19  24  12  7  28 1ȸ
	  -> 19  12  7  24  28
	  -> 12  7  19  24  28
	  -> 7  12  19  24  28

���� ���7  12  19  24  28
*/