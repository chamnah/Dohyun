#include <iostream>

using namespace std;

int main()
{
	const int iArrCount = 5;
	int arrNum[iArrCount] = { 5, 3, 2, 4, 1 };
//  i :0 1 2 3 4
	// 5 3 2 4 1
	// 3 2 4 1 5  1ȸ�� 
	// 2 3 1 4 5  2ȸ��
	// 2 1 3 4 5  3ȸ��
	// 1 2 3 4 5  4ȸ��

	for (int bubbleCount = 0; bubbleCount < iArrCount - 1; bubbleCount++)
	{
		for (int i = 0; i < iArrCount - 1; i++)
		{
			if (arrNum[i] > arrNum[i + 1])
			{
				int temp = arrNum[i];
				arrNum[i] = arrNum[i + 1];
				arrNum[i + 1] = temp;
			}
		}
	}
	
	for (int i = 0; i < 5; i++)
	{
		cout << arrNum[i] << " ";
	}

	return 0;
}