#include <iostream>
using namespace std;

int main()
{
	const int numCount = 5;
	int arrNum[numCount] = { 19,  28,  24,  12, 7 };
	                       // 12 19 24 28
	for (size_t i = 0; i < numCount - 1; i++)
	{
		for (size_t j = 0; j < numCount - 1; j++)
		{
			if (arrNum[j] > arrNum[j + 1]) // i > i + 1���� ū ���(���� ���� �� ū ���)
			{
				int temp = arrNum[j];
				arrNum[j] = arrNum[j + 1];
				arrNum[j + 1] = temp;  // i <-> i + 1 Swap
			}
		}
	}

	for (size_t i = 0; i < numCount; i++) // �迭 ���
	{
		cout << arrNum[i] << ","; 
	}

	//int i = 4;

	//if (i <= 4)// i�� 4���� ������ ��
	//{
	//	cout << i << endl;
	//}

	//1. arrNum 0 ~ 3���� ���
	//2. arrNum 1 ~ 4���� ���

	// a <-> b
	int a = 20;
	int b = 30; 

	int temp = a;// temp : a
	a = b;       // a : b
	b = temp;    // b : a


	return 0;
}

/*
����
���� ���� �Ⱥ��� ĥ �� �ְ� �����ؿ���
*/