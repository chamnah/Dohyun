#include <iostream>
using namespace std;

void Add(int& _iNum)
{
	_iNum += 10;
}

void Swap(int& iNumA, int& iNumB)
{
	int temp = iNumA;
	iNumA = iNumB;
	iNumB = temp;
}

int main()
{
	/*int iNum = 10;
	Add(iNum);
	
	cout << "iNum : " << iNum << endl;*/

	const int iNumCount = 6;
	int iNums[iNumCount] = { 5, 3, 999, 4, 1, 2 };
	//iNums[0] <-> iNums[1] i == 0 -> iNums[i] <-> iNums[i+1]
	//iNums[1] <-> iNums[2]
	//iNums[2] <-> iNums[3]
	//iNums[3] <-> iNums[4]

	// i = left / i + 1 = right
	for (size_t i = 0; i < iNumCount - 1; i++)
	{
		if (iNums[i] > iNums[i + 1])
		{
			Swap(iNums[i], iNums[i + 1]);
		}
		
		/*int temp = iNums[i];
		iNums[i] = iNums[i + 1];
		iNums[i + 1] = temp;*/
	}
	cout << "iNums : ";
	for (size_t i = 0; i < iNumCount; i++)
	{
		cout << iNums[i] << ", ";
	}

	return 0;
}

/*
iNumCount = 6
int iNums[iNumCount] = { 5, 3, 999, 4, 1, 2 };
i = 0 ~ 5    / iNumCount - 1

i == 0 
iNums[i]   iNums[i + 1] -> 3, 5, 999, 4, 1, 2
   5     >       3

i == 1
iNums[i]   iNums[i + 1]
   5     >     999  X   ->  3, 5, 999, 4, 1, 2

i == 2
iNums[i]   iNums[i + 1] ->  3, 5, 4, 999, 1, 2
  999    >     4

i == 3
iNums[i]   iNums[i + 1]
  999    >     1        ->  3, 5, 4, 1, 999, 2

i == 4
iNums[i]   iNums[i + 1] ->  3, 5, 4, 1, 2, 999
   999   >     2   

3, 5, 4, 1, 2, 999
3, 4, 5, 1, 2, 999
3, 4, 1, 5, 2, 999
3, 4, 1, 2, 5, 999
3, 1, 2, 4, 5, 999
1, 2, 3, 4, 5, 999
*/