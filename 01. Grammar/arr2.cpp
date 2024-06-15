#include <iostream>
using namespace std;

int main()
{
	// 1차원 배열
	//int arrA[10]; //int * 10 
	// 0 ~ 9  / a[0] ~ a[9]

	// 2차원 배열
	//int arr[10][10]; //int * 100
	/*
	arr[0][0] ~ arr[0][9] 10
	arr[1][0] ~ arr[1][9] 10
	arr[2][0] ~ arr[2][9] 10
	.....

	arr[9][0] ~ arr[9][9] 10
	*/

	//3차원 배열
	//int arrB[10][10][10]; // 1000

	//int arrA[3] = {1, 2, 3}; // 1 2 3
	//int arrB[3] = {}; // 0 0 0
	//int arrC[3] = {1};// 1 0 0

	/*for (size_t i = 0; i < 3; i++)
	{
		cout << arrC[i] << endl;
	}*/

	/*for (size_t i = 0; i < 3; i++)
	{
		arrA[i] = i + 1;
	}*/

	// arr[0][0] arr[0][1] arr[0][2]
	// arr[1][0] arr[1][1] arr[1][2]
	// arr[2][0] arr[2][1] arr[2][2]
	//int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };// 1 2 3 4 5 6 7 8 9
	//               arr[0]    arr[1]  arr[2]
	// arr[2][0] arr[2][1] arr[2][2]

	//       i   j
	/*int arr[10][10];

	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			arr[i][j] = (i * 10 + j) + 1;
		}
	}*/

	// arr[5][5] // 1 ~ 25
	// 이중 포문 이용하기

	/*for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}*/


	/*int arr[4][4] = { 
		{0},
		{1,2},
		{3,4,5} 
	};*/
	/*
	int arr[4][4] - 
	arr[0][0] arr[0][1] arr[0][2] arr[0][3]
	    0         0        0           0
	arr[1][0] arr[1][1] arr[1][2] arr[1][3]
	    1          1        1          1
	arr[2][0] arr[2][1] arr[2][2] arr[2][3]
	    3          3        3          3
	arr[3][0] arr[3][1] arr[3][2] arr[3][3]
	    4          4        4          4
	*/


	int arr[3][3] = {
		{10,50,90},
		{1,2},
		{3,5,14.7}
	};
	/*
	arr[0][0] arr[0][1] arr[0][2] 
		10		  50		90
	arr[1][0] arr[1][1] arr[1][2] 
	    1		  2			0
	arr[2][0] arr[2][1] arr[2][2] 
		3		5			14
	
	*/
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}

	/*
	int arr[4][4] = {{0,1,2},{3,4,5}};
	
	*/

}