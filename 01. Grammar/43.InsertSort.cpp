#include <iostream>
using namespace std;

int main()
{
	/*
	���� ����(Insert Sort)
	: 1�� �ε��� ���� ���ĵ� �迭 �� ���� ������ ��ġ�� �ִ� ����
	- ��������
	       0  1  2  3  4
	      [5][2][1][4][3]
	
	1.    [2][5][1][4][3] select = 1
	
	2.    [2][1][5][4][3] select = 2
	      [1][2][5][4][3]
	
	3.    [1][2][4][5][3] select = 3

	4.    [1][2][4][3][5] select = 4
	      [1][2][3][4][5]
	*/

	const int arrSize = 10;
	int arr[arrSize] = { 7,9,10,22,55,3,14,17,5,33 };

	for (int i = 1; i < arrSize; i++)
	{
		int selectValue = arr[i]; // ������ ��
		int insertIdx = 0;        // ���Ե� ��ġ

		for (int j = i - 1; j >= 0; --j)
		{
			//    2        3
			if (arr[j] <= selectValue)
			{
				insertIdx = j + 1; //������ ��ġ ã��
				break;
			}

			arr[j + 1] = arr[j]; //���������� �̵�
		}
		
		arr[insertIdx] = selectValue;
	}

	for (int i = 0; i < arrSize; i++)
	{
		cout << arr[i] << ", ";
	}

		/*
		arr[j] = 2
		selectValue = 3
		 j j + 1
		[2][4][5][6][3] selectValue = 3
		[2][3][4][5][6]
		*/

		// [2][3][4][5][1]
		// [2][2][3][4][5] : selectValue = 1
		// [1][2][3][4][5]

	return 0;
}