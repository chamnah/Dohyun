#include <iostream>
using namespace std;

int main()
{
	// ���� ���� : ���� ������ ��ġ�� �ش��ϴ� ���� �����Ͽ� �����ϴ� ���

	const int iArrCount = 5;
	int arrNum[5] = { 5, 3, 4, 1, 2 };

	for (int selectionIdx = 0; selectionIdx < iArrCount; selectionIdx++)
	{
		// ���������̹Ƿ� findIndex�� ���� ���� ã�´�.
		int findIndex = selectionIdx;

		//findIndex ã��
		for (int i = selectionIdx + 1; i < iArrCount; i++)
		{
			if (arrNum[i] < arrNum[findIndex])
			{
				findIndex = i;
			}
		}

		//������ selectionIdx�� �ֱ� 
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
�����ϱ�
- ���� ���� �Ⱥ��� �ۼ��� �� �ֵ��� �����ؿ��� + Swap�Լ�
- ���� ���� �� �����ؿ���
*/