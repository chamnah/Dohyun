#include <iostream>
using namespace std;

int main()
{
	/*

	1. �迭�� ����ִ� ������ ���� ã��
	ex) int arr[10] = {1,1,2,2,3,3,3,7,7,10} - �迭�� ����ִ� ������ ���� ã��

	2. �迭�� ��
	ex) int arr[10] = {1,2,3,4,5,6,7,8,9,10}

	3. �迭�� �ִ밪
	ex) int arr[10] = {1,2,3,4,5,6,7,8,9,10}

	4. �迭�� ���
	ex) int arr[10] = {1,2,3,4,5,6,7,8,9,10}

	��� ���ϴ� ���
	arr[10] = 1,2,3,4,5,6,7,8,9,10
	1. 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55
	2. 55 / 10 = 5

	����
	1/10 + 2/10 + 3/10 + 4/10 + 5/10 + 6/10 + 7/10 + 8/10 + 9/10 + 10/10
	*/
	/*
	float sum = 0;
	for (int i = 1; i <= 10; i++)
	{
		sum += i / 10.f;
	}
	cout << sum << endl;
	//0.1 + 0.2 + 0.3 + 0.4 + 0.5 + 0.6 + 0.7 + 0.8 + 0.9 + 1.0 = 1;
	*/
	/*
	bool
	char
	float
	int
	*/
	/*
	//int arr1 int arr2
	int arr[10] = {1, 2, 3};
	int maxValue = arr[0]; //arr �迭�� �ִ밪
	   // 1          2
	if (maxValue < arr[1]) // 
	{
		maxValue = arr[1];
	}
	// maxValue = arr[0] �� arr[1] �� �� ū ��
	if (maxValue < arr[2])
	{
		maxValue = arr[2];
	}

	cout << maxValue;
	*/
	
	int arr[10] = { 1,1,2,2,3,3,3,7,7,10 };
	int arrCount[10] = {}; // ����
	int arrNum[10] = {};   // � ����

	//arrNum[0] -> arrCount[0];
	
	// arrNum�� arr���� �ϳ����� ����
	int addIdx = 0;
	for (int i = 0; i < 10; i++)
	{
		bool find = false;
		for (int j = 0; j < 10; j++)
		{
			if (arr[i] == arrNum[j])
			{
				find = true; // �̹� ���ڰ� ��������Ƿ� �ƹ��͵� ���� �ʰ� �������� ��ȸ
				break;
			}
		}

		if (!find)
		{
			arrNum[addIdx] = arr[i];
			++addIdx;
		}
	}
	// ���� ����
	for (int i = 0; i < 10; i++) // arr ��ȸ
	{
		for (int j = 0; j < 10; j++) // arrNum ��ȸ
		{
			if (arr[i] == arrNum[j])
			{
				arrCount[j]++;
				break;
			}
		}
	}

	// ��ü ���
	for (int i = 0; i < 10; i++)
	{
		cout << arrNum[i] << ": " << arrCount[i] << endl;
	}
	

	// ����ü�� ǥ���� ���.
/*
	struct CountInfo
	{
		int num; // � ���� 
		int count; // ����
	};

	int arr[10] = { 1,1,2,2,3,3,3,7,7,10 };
	CountInfo arrCount[10] = {};   // � ����

	int addIdx = 0; // �߰��� ��ġ
	for (int i = 0; i < 10; i++)
	{
		bool find = false;
		for (int j = 0; j < 10; j++)
		{
			if (arr[i] == arrCount[j].num)
			{
				find = true; // �̹� ���ڰ� ��������Ƿ� �ƹ��͵� ���� �ʰ� �������� ��ȸ
				break;
			}
		}

		if (!find)
		{
			arrCount[addIdx].num = arr[i];
			++addIdx;
		}
	}

	for (int i = 0; i < 10; i++) // arr ��ȸ
	{
		for (int j = 0; j < 10; j++) // arrNum ��ȸ
		{
			if (arr[i] == arrCount[j].num)
			{
				arrCount[j].count++;
				break;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arrCount[i].num << ": " << arrCount[i].count << endl;
	}
	*/


	/*
	1. ����
	2. �迭���� Ư�� ���� ���ڸ� ã��
	
	ex) int arr[10] = { 1,1,2,2,3,3,3,7,7,10 };
	int findNum = 10;
	int findCount; -> findNum�� �ش��ϴ� Count ã�� 
	*/
	return 0;
}