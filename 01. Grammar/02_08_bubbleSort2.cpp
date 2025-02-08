#include <iostream>
using namespace std;

void Swap(int& left, int& right)
{
	int temp = left;
	left = right;
	right = temp;
}

void BubbleSort(int numCount, int* arrNum)
{
	for (int i = 0; i < numCount - 1; i++)
	{
		int left = i;
		int right = i + 1;
		// �������� : if (arrNum[left] '<' arrNum[right])
		// ��������
		if (arrNum[left] > arrNum[right])
		{
			Swap(arrNum[left], arrNum[right]);
		}
	}
}
//���ʿ� �ִ� ���� �� ū ��� �����Ѵ�.

void main()
{
	const int numCount = 5;
	int arrNum[numCount] = { 28,  19,  24,  12, 7 };
	// �迭�� �̸��� �迭 0��° �ּҿ� ����.
	// arrNum == &arrNum[0]
	// int* num = arrNum;

	for (int i = 0; i < numCount - 1; i++)
	{
		BubbleSort(numCount, arrNum);
	}

	// �� ���� ���
	for (int i = 0; i < numCount; i++)
	{
		cout << arrNum[i] << ",";
	}
}

/*
���� : ����~~~~~~~

1. ���� ���� 1ȸ,2ȸ .... ����Ǵ� ��� �ۼ� �����ؿ���
   (�������� / ��������)

2. ���� ���� �ڵ� �����ĺ��� �����ؿ���
*/