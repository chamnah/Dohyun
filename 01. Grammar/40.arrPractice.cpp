#include <iostream>
using namespace std;

int main()
{
	/*

	1. 배열에 들어있는 숫자의 갯수 찾기
	ex) int arr[10] = {1,1,2,2,3,3,3,7,7,10} - 배열에 들어있는 숫자의 갯수 찾기

	2. 배열의 합
	ex) int arr[10] = {1,2,3,4,5,6,7,8,9,10}

	3. 배열의 최대값
	ex) int arr[10] = {1,2,3,4,5,6,7,8,9,10}

	4. 배열의 평균
	ex) int arr[10] = {1,2,3,4,5,6,7,8,9,10}

	평균 구하는 방법
	arr[10] = 1,2,3,4,5,6,7,8,9,10
	1. 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55
	2. 55 / 10 = 5

	도현
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
	int maxValue = arr[0]; //arr 배열의 최대값
	   // 1          2
	if (maxValue < arr[1]) // 
	{
		maxValue = arr[1];
	}
	// maxValue = arr[0] 과 arr[1] 중 더 큰 값
	if (maxValue < arr[2])
	{
		maxValue = arr[2];
	}

	cout << maxValue;
	*/
	/*
	int arr[10] = { 1,1,2,2,3,3,3,7,7,10 };
	int arrCount[10] = {}; // 갯수
	int arrNum[10] = {};   // 어떤 숫자

	//arrNum[0] -> arrCount[0];
	
	// arrNum에 arr값을 하나씩만 저장
	int addIdx = 0;
	for (int i = 0; i < 10; i++)
	{
		bool find = false;
		for (int j = 0; j < 10; j++)
		{
			if (arr[i] == arrNum[j])
			{
				find = true; // 이미 숫자가 들어있으므로 아무것도 하지 않고 다음으로 순회
				break;
			}
		}

		if (!find)
		{
			arrNum[addIdx] = arr[i];
			++addIdx;
		}
	}
	// 갯수 증가
	for (int i = 0; i < 10; i++) // arr 순회
	{
		for (int j = 0; j < 10; j++) // arrNum 순회
		{
			if (arr[i] == arrNum[j])
			{
				arrCount[j]++;
				break;
			}
		}
	}

	// 전체 출력
	for (int i = 0; i < 10; i++)
	{
		cout << arrNum[i] << ": " << arrCount[i] << endl;
	}
	
	*/
	// 구조체로 표현한 경우.
/*
	struct CountInfo
	{
		int num; // 어떤 숫자 
		int count; // 갯수
	};

	int arr[10] = { 1,1,2,2,3,3,3,7,7,10 };
	CountInfo arrCount[10] = {};   // 어떤 숫자

	int addIdx = 0; // 추가할 위치
	for (int i = 0; i < 10; i++)
	{
		bool find = false;
		for (int j = 0; j < 10; j++)
		{
			if (arr[i] == arrCount[j].num)
			{
				find = true; // 이미 숫자가 들어있으므로 아무것도 하지 않고 다음으로 순회
				break;
			}
		}

		if (!find)
		{
			arrCount[addIdx].num = arr[i];
			++addIdx;
		}
	}

	for (int i = 0; i < 10; i++) // arr 순회
	{
		for (int j = 0; j < 10; j++) // arrNum 순회
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
	1. 복습
	2. 배열에서 특정 값의 숫자를 찾기
	
	ex) int arr[10] = { 1,1,2,2,3,3,3,7,7,10 };
	int findNum = 10;
	int findCount; -> findNum에 해당하는 Count 찾기 
	*/
	//int arr[10] = { 1,1,2,2,3,3,3,7,7,10 };
	//int findNum; // 찾을 값 (임의 값)
	//int findCount; // 찾은 숫자의 갯수

	// 탐색 + findCount에 값 채우기


	//findCount 값 출력

	/*
	1. 배열에서 최대값 찾기
	int arr[10] = { 1,1,2,2,3,3,3,7,7,10 };
	int maxNum; // 최대값

	// 탐색 + maxNum 값 넣기
	// maxNum 출력

	2. 배열에서 최소값 찾기
	int arr[10] = { 1,1,2,2,3,3,3,7,7,10 };
	int minNum; // 최소값

	// 탐색 + minNum 값 넣기
	// minNum 출력

	3. 배열에서 같은 값 찾기
	int arr[10] = { 1,1,2,2,3,3,3,7,7,10 };
	int sameNum; // 임의의 값

	// 탐색

	//같은 값이 존재한다. / 같은 값이 존재하지 않는다.

	bool check;

	*/
	/*
	int arr[10] = { 1,2 };
	int maxNum = 0; // arr 배열의 최대값

	if (maxNum < arr[0])
	{
		maxNum = arr[0];
	}

	if (maxNum < arr[1])
	{
		maxNum = arr[1];
	}

	if (maxNum < arr[2])
	{
		maxNum = arr[2];
	}

	maxNum; //최대값
	*/
                 // x x x x o
/*
//1. 값은 값 찾기 bool 활용
	int arr[10] = { 1,1,2,2,3,3,3,7,7,10 };
	int sameNum = 3;
	bool checkSame = false;

	for (size_t i = 0; i < 10; i++)
	{
		if (sameNum == arr[i])
		{
			checkSame = true;
			cout << "같은 값이 존재한다." << endl;
			break;
		}
	}

	if (checkSame == false)// 같은 값이 없을 때만 출력해야 함
	{
		cout << "같은 값이 존재하지 않는다." << endl; 
	}
*/
/*
//2. 값은 값 찾기 return 활용
	int arr[10] = { 1,1,2,2,3,3,3,7,7,10 };
	int sameNum = 3;

	for (size_t i = 0; i < 10; i++)
	{
		if (sameNum == arr[i])
		{
			cout << "같은 값이 존재한다." << endl;
			return 0; // 함수값반환 + 함수 종료
		}
	}
	
	cout << "같은 값이 존재하지 않는다." << endl;
*/
	for (size_t i = 0; i < 10; i++) // 10번
	{
		for (size_t j = 0; j < 10; j++) // 10번
		{
			cout << "Show" << endl;
			break; // j 탈출
		}
		//break; // i 탈출
	}

	// break; for문 1개 / switch문 1개 탈출
	// return : 함수값반환 + 함수 종료

	/*
	복습~~~~~!!!!!!
	*/

	return 0;
}