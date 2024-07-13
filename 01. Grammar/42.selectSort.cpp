#include <iostream>
using namespace std;

int main()
{
	/*
	정렬 : 내가 원하는 순서로 배치하는 것

	(점점) 오름차순 : 작은것 부터 큰 순서대로 정렬된 상태 - 점점 오르는 형태
	(점점) 내림차순 : 큰 것 부터 작은 순서대로 정렬된 상태 - 점점 내려가는 형태
	*/

	/*
	1. 선택 정렬
	2. 삽입 정렬
	3. 버블 정렬
	4. 합병 정렬
	5. 퀵 정렬
	6. .......
	
	*/

	/*
	1. 선택 정렬
	오름차순 기준

	   [5][2][1][4][3]
	1. [1][2][5][4][3]
	2. [1][2][5][4][3]
	3. [1][2][3][4][5]
	4. [1][2][3][4][5]

	int selection = 0;
	   [5][2][1][4][3]
	int selection = 1;
	   [1][2][5][4][3]
	int selection = 2;
	   [1][2][3][4][5]
	int selection = 3;
	   [1][2][3][4][5]
	*/

	const int arrSize = 10;
	int arr[arrSize] = { 5, 2, 1, 4, 3, 9,10,20,30,40 };

	for (int i = 0; i < arrSize - 1; i++)
	{
		int select = i;
		int minIdx = i; // 가장 작은 값이 들어있는 배열 인덱스

		for (int j = i; j < arrSize; j++)
		{
			if (arr[j] < arr[minIdx])
			{
				minIdx = j;
			}
		}

		int temp = arr[select];
		arr[select] = arr[minIdx];
		arr[minIdx] = temp;
	}

	for (int i = 0; i < arrSize; i++)
	{
		cout << arr[i] << ", ";
	}

	// 내림차순

	/*
	숙제
	- 선택 정렬 안보고 칠 수 있게 연습해오기(오름차순)
	*/

	/*
	int arr[10] = {7,9,10,22,55,3,14,17,5,33};
	*/


	/*
	선택 정렬
	   0  1  2  3  4
	  [5][2][1][4][3]
	1.[1][2][5][4][3] :select = 0 minIdx = 2 
	2.[1][2][5][4][3] :select = 1 minIdx = 1          
	3.[1][2][3][4][5] :select = 2 minIdx = 4 
	4.[1][2][3][4][5] :select = 3 minIdx = 3
	
	[1][2][3][4][5]
	*/




	return 0;
}