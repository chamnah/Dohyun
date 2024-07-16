#include <iostream>
using namespace std;

int main()
{
	/*
	삽입 정렬(Insert Sort)
	: 1번 인덱스 부터 정렬된 배열 중 삽입 가능한 위치에 넣는 정렬
	- 오름차순
	       0  1  2  3  4
	      [5][2][1][4][3]
	
	1.    [2][5][1][4][3] select = 1
	
	2.    [2][1][5][4][3] select = 2
	      [1][2][5][4][3]
	
	3.    [1][2][4][5][3] select = 3

	4.    [1][2][4][3][5] select = 4
	      [1][2][3][4][5]
	*/

	/*
	배열 순서 정리
	삽입 정렬 - 내림차순
	*/
	
	const int arrSize = 10;
	int arr[arrSize] = { 7,9,10,22,55,3,14,17,5,33 };

	for (int i = 1; i < arrSize; i++)
	{
		int selectValue = arr[i]; // 삽입할 값
		int insertIdx = 0;        // 삽입될 위치

		for (int j = i - 1; j >= 0; --j)
		{
			//    2        3
			if (arr[j] <= selectValue)
			{
				insertIdx = j + 1; //삽입할 위치 찾기
				break;
			}

			arr[j + 1] = arr[j]; //오른쪽으로 이동
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

	//   오름 차순 기준
	//   선택 정렬
	//   [5][2][1][4][3]
	//1. [1][2][5][4][3]
	//2. [1][2][5][4][3]
	//3. [1][2][3][4][5]
	//4. [1][2][3][4][5]
	
	// 내림차순 : 54321
	// 오름차순 : 12345

	//   삽입 정렬
	/*
	   [5][2][1][4][3]
	1. [2][5][1][4][3] selectValue : 2
	2. [1][2][5][4][3] selectValue : 1
	3. [1][2][4][5][3] selectValue : 4
	4. [1][2][3][4][5] selectValue : 3
	
	   [20][11][4][77][99]
	1. [11][20][4][77][99] selectValue : 11
	2. [4][11][20][77][99] selectValue : 4
	3. [4][11][20][77][99] selectValue : 77
	4. [4][11][20][77][99] selectValue : 99
	*/

	/*
	숙제 : 복습
	
	삽입 정렬 안보고 만들 수 있도록 연습해오기
	*/

	/*
	bubble sort
	버블 정렬
	*/


























	return 0;
}