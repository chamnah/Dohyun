#include <iostream>
using namespace std;

int main()
{
	/*
	arr[0][0] arr[0][1] arr[0][2] i = 0  0    1   2
	arr[1][0] arr[1][1] arr[1][2] i = 1  3	  4   5
	arr[2][0] arr[2][1] arr[2][2] i = 2  6	  7   8
	*/
	//const : ���
	//int arr[4][4]; // 16
	int arr[3][3]; // 9

	int arr[3]; // 3 / 0 1 2

	const int width = 3;
	const int height = 3;
	int arr[height][width] = {};//int 9 / 0 1 2 3 4 5 6 7 8 : 9��
	for (size_t i = 0; i < height; i++)
	{
		for (size_t j = 0; j < width; j++)
		{
			arr[i][j] = (i * width) + j;//1,2,3,4,5,6,7,8,9
		}
	}

	for (size_t i = 0; i < height; i++)
	{
		for (size_t j = 0; j < width; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}

	return 0;
}

/*
1 2  3  4  5  6  7  8    25

5 10 15 20 25 30 35 40 ~ 125

����
���� �������� �迭 �� ä���

int arr[4][3]; // 12

1. 7�� ��� ä���
   ex) 7 ~ 84(7*12)
2. 4���� �����ؼ� 11���� ä���
   ex) 4 ~ 16
3. 12,15,18,21,24,27,30,33,36,39,42,45���� ä���
   ex) ��Ģ�� ������ ã�� ���� ������ �̿��Ͽ� ����ϱ�
*/