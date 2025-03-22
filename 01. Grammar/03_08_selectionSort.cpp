#include <iostream>
using namespace std;

void SelectSort()
{
	for (int i = 0; i < arrNumCount; i++)
	{
		//i -> ���� �����ϰ� ���� �ε���
		int findIndex = i;

		// ���� ���� ���� ����ִ� �ε��� ã��
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

// Swap�Լ� �����
// ���� ���� �Լ� �����
// ���� : �迭, �迭 ũ��

/*
���������̶�,
ù��° �ε����κ��� ������ �ε������� ���������� �ش� �ε����� �� ���� Ž���Ͽ� Swap�ϴ� �����̴�.
���������� ���,
���ĵ��� ���� �� �� ���� ���� ���� �����Ͽ� Swap�Ѵ�.

�迭: [][][][][]

*/