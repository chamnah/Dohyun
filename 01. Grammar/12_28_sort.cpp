#include <iostream>
using namespace std;

void Sort()
{

}

void Swap(int left, int right)
{
	int temp = left;
	left = right;
	right = temp;
}

int main()
{
	const int size = 5;
	int arrNum[size] = { 1,2,3,4,5 }; // 0 ~ 4 
	for (size_t i = 0; i < size - 1; i++)// 0 ~ 3
	{
		/*1. Pointer
		int* pLeft = &arrNum[i];
		int* pRight = &arrNum[i + 1];

		int temp = *pLeft;
		*pLeft = *pRight;
		*pRight = temp;
		*/

		int left = arrNum[i];
		int right = arrNum[i + 1];

		//2. Referrence : ����
		int& left = arrNum[i];
		int& right = arrNum[i + 1];

		int temp = left;
		left = right;
		right = temp;
		


		//Swap(arrNum[i], arrNum[i + 1]);
		//int temp = arrNum[i];
		//arrNum[i] = arrNum[i + 1]; //i : 3 / i + 1 : 4
		//arrNum[i + 1] = temp;
	}

	for (size_t i = 0; i < size; i++)
	{
		cout << arrNum[i] << ",";
	}

	return 0;
}

//1.  int arrNum[2] = {50 , 12};
//    arrNum[0] <-> arrNum[1] Swap
//    ��ü ��� 

//2.  int arrNum[5] = {1,2,3,4,5}
//    arrNum[0] -> ���������� �� �迭���� Swap�Ͽ�
//    2,3,4,5,1 ���·� �����ϰ� ����ϱ�

//    ��������
//    2,1,3,4,5  0 <-> 1
//    2,3,1,4,5  1 <-> 2
//    2,3,4,1,5  2 <-> 3
//    2,3,4,5,1  3 <-> 4

//    1,2,3,4,5
//    2,3,4,5,1

/*
�����ؿ���~~

Sort�Լ� (�迭, ũ��) �����

*/

//1 ~ 4�� -> 6���� 