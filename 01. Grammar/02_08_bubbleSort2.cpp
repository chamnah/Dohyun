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

/*
int arrNum[numCount] = { 28,  19,  24,  12, 7 };
28,  19,  24,  12, 7
19,  28,  24,  12, 7  - arrNum[0] <-> arrNum[1];
19,  24,  28,  12, 7  - arrNum[1] <-> arrNum[2];
19,  24,  12,  28, 7  - arrNum[2] <-> arrNum[3];
19,  24,  12,   7, 28 - arrNum[3] <-> arrNum[4];

//left - 0, 1, 2, 3 : i
//right - 1, 2, 3, 4 : i + 1

arrNum[0] <-> arrNum[1]
arrNum[1] <-> arrNum[2]
arrNum[2] <-> arrNum[3]
arrNum[3] <-> arrNum[4]

arrNum[i] <-> arrNum[i + 1]

// arrNum[i]

// arrNum <-> arrNum
arrNum[-1] die


1. ���ʰ��� ������ ���� ū ���
2. ���� ���� �ٲ��. Swap




19,  24,  12,  7, 28 1ȸ��
19,  12,   7, 24, 28
12,   7,  19, 24, 28
7,   12,  19, 24, 28
*/