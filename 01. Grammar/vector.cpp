#include <iostream>
#include <vector>

using namespace std;

int main()
{
	/*
	������Ÿ�Ͽ� ��ȭ�� �����Ŵ�.
	1. �ð��ȿ� �ִ��� ������ �ϰ�, ���ڶ� ���� ����
	2. ������ ���ؿ�. ������ �װ��� ���������� ������ �ȳ���

	1. ���� �Է¹ޱ� (��, ������ 10�� ����)
	2. �Է��� ���� ��ŭ�� ���ڸ� �Է��ϱ�
	3. �Է��� ���ڵ��� �迭�� ������Ű��
	4. �迭�� ������ ���ڸ� ����ϱ�
	���� 2 3 2 �Է� => 3 2 ���
	*/

	//vector<int> vec(10);
	////int storage[10] = {};
	//int n = 0;
	//cin >> n;
	

	

	// 3 1 2 3
	// storage[0] = 1
	// storage[1] = 2
	// storage[2] = 3

	vector<int> v;
	
	for (size_t i = 0; i < 20; i++)
	{
		v.push_back(i); // 20�� v�� ũ�� 20��
	}
	
	vector<int> v2;
	for (size_t i = 0; i < 10; i++)
	{
		v2.push_back(i);
	}

	vector<vector<int>> vList;
	vList.push_back(v); // 0 v
	vList.push_back(v2);// 1 v2

	/*
	0 - v { 0 ~ 19 } 20 �� ¥��
	1 - v2 {0 ~ 9}   10 �� ¥��
	*/
	vList[0][19] = 20;
	vList[1][9] = 20;
	vector<int> tempList;
	
	for (size_t i = 0; i < 3; i++)
	{
		tempList.push_back(i);
	}
	
	/*
	04/16 ����
	2���� vector ���� �� push_back �̿��ؼ� �Ʒ��� ���� �� �ֱ�
	*/
	vector<int> firstArray;
	firstArray.push_back(5);

	vector<vector<int>> arrInt;
	arrInt.push_back(firstArray); // 0��°�� 1���� �迭 �ֱ�
	//arrInt[0] = 5

	//arrInt[0] - {5,9,6,4,3} = firstArray
	//arrInt[1] - {6,4,3} = secondArray
	//arrInt[2] - 77,88,33
	//arrInt[3] - 71,81,38,100
	/*
	59643/643/778833/718138100
	*/

	/*for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			cout << '*';
		}
		cout << endl;
	}*/
	/*
	*****
	*****
	*****
	*****
	*****
	*/
	int height;
	cin >> height;
	vector<vector<int>> arrA;
	for (size_t i = 0; i < height; i++)
	{
		vector<int> arrLine;
		
		//i= 0 | j < 1 == i + 1
		//i= 1 | j < 2 == i + 1
		//i= 2 | j < 3 == i + 1
		for (size_t j = 0; j < i + 1; j++)
		{
			int value;
			cin >> value;
			arrLine.push_back(value);
		}

		arrA.push_back(arrLine);
	}

	//arrA[0] - {0} i = 0 / j = 0
	//arrA[1] - {1,0} i = 1 / j = 0 / j = 1
	//arrA[2] - {1,0,0} i = 2 / j = 0 / j = 1 / j = 2

	//arrB[0] - {0}
	//arrB[1] - {0,0}
	//arrB[2] - {0,0,1}

	/*
	�� �ﰢ�� ���ؼ� �ٸ� �κ� ������ ���
	arrA / arrB

	arrA�� arrB�� ���ؼ� �ٸ� �κ� ������ cout���� ����ϱ�
	*/
	
	vector<int> arrTemp;
	arrTemp.push_back(10);
	arrTemp.push_back(20);
	arrTemp.push_back(30);
	//height
	for (size_t i = 0; i < length; i++)
	{
		arrTemp[i];
	}

	cout << arrA[0][0] << endl;

	int a[10] = {0,1,2,3};
	int b[10] = {0,1,2,2};
	return 0;
}
/*
�ܰ� �� ����
���� 1.
�Է��� Ƚ����ŭ Hello World ����ϱ�

���� 1-1
5ȸ �ܼ�â���� ���� �Է��ϱ�

���� 2
�ܼ�â���� �Է��� Ƚ����ŭ �ܼ�â���� ���� �Է��ϱ�

���� 3
�Է��� Ƚ����ŭ ���� �Է��ϰ�
�Է��� ���ڵ� �迭�� �ֱ�

���� 4
�Է��� Ƚ����ŭ ���� �Է��ϰ�
�Է��� ���ڵ� vector�� �ֱ�

���� 5
3 A : {1 2 3} B : {4 5 6}
�Է��� Ƚ����ŭ ���� �Է��ϰ�
�Է��� ���ڵ� vectorA�� �ֱ�

������ �Է��� Ƚ����ŭ ���� �Է��ϰ�
�Է��� ���ڵ� vectorB�� �ֱ�

���� 6
A B �� �迭�� ����� ���ڰ� �ٸ� Ƚ���� ���
3 1 2 3 1 2 5 : 1ȸ

���� 7
�Է��� ���ڸ�ŭ�� �簢�� ������ �迭�� �����Ͻÿ�.
�׸���, 2���� �迭�� ����� �迭�� ����Ͻÿ�.
3
9�� �Է�
1 2 3 i = 0 | j = 0 / j = 1 / j = 2
4 5 6
7 8 9

2
4�� �Է�
1 2
3 4

1
1�� �Է�
1
*/


/*
1��. �����ϱ�
2��. ���� 2023�⵵, �ٽ� Ǯ���, �𸣴� ���� ��������

���� ���� ���� �ּ� 3���� 2021 ~ 2023�⵵ ���� ��� Ǯ���
*/