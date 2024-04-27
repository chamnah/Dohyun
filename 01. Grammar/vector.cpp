#include <iostream>
#include <vector>

using namespace std;

int main()
{
	/*
	수업스타일에 변화가 있을거다.
	1. 시간안에 최대한 수업을 하고, 모자란 것은 숙제
	2. 범위를 정해요. 무조건 그것을 끝낼때까지 수업이 안끝남

	1. 갯수 입력받기 (단, 갯수는 10개 이하)
	2. 입력한 갯수 만큼의 숫자를 입력하기
	3. 입력한 숫자들을 배열에 보관시키기
	4. 배열에 보관된 숫자를 출력하기
	예시 2 3 2 입력 => 3 2 출력
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
		v.push_back(i); // 20번 v의 크기 20개
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
	0 - v { 0 ~ 19 } 20 개 짜리
	1 - v2 {0 ~ 9}   10 개 짜리
	*/
	vList[0][19] = 20;
	vList[1][9] = 20;
	vector<int> tempList;
	
	for (size_t i = 0; i < 3; i++)
	{
		tempList.push_back(i);
	}
	
	/*
	04/16 숙제
	2차원 vector 만든 후 push_back 이용해서 아래와 같이 값 넣기
	*/
	vector<int> firstArray;
	firstArray.push_back(5);

	vector<vector<int>> arrInt;
	arrInt.push_back(firstArray); // 0번째에 1차원 배열 넣기
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
	두 삼각형 비교해서 다른 부분 갯수를 출력
	arrA / arrB

	arrA와 arrB를 비교해서 다른 부분 갯수를 cout으로 출력하기
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
단계 별 문제
문제 1.
입력한 횟수만큼 Hello World 출력하기

문제 1-1
5회 콘솔창에서 숫자 입력하기

문제 2
콘솔창에서 입력한 횟수만큼 콘솔창에서 숫자 입력하기

문제 3
입력한 횟수만큼 숫자 입력하고
입력한 숫자들 배열에 넣기

문제 4
입력한 횟수만큼 숫자 입력하고
입력한 숫자들 vector에 넣기

문제 5
3 A : {1 2 3} B : {4 5 6}
입력한 횟수만큼 숫자 입력하고
입력한 숫자들 vectorA에 넣기

위에서 입력한 횟수만큼 숫자 입력하고
입력한 숫자들 vectorB에 넣기

문제 6
A B 두 배열에 저장된 숫자가 다른 횟수를 출력
3 1 2 3 1 2 5 : 1회

문제 7
입력한 숫자만큼의 사각형 이차원 배열을 저장하시오.
그리고, 2차원 배열에 저장된 배열을 출력하시오.
3
9의 입력
1 2 3 i = 0 | j = 0 / j = 1 / j = 2
4 5 6
7 8 9

2
4의 입력
1 2
3 4

1
1의 입력
1
*/


/*
1번. 복습하기
2번. 정올 2023년도, 다시 풀어보고, 모르는 문제 가져오기

정올 시험 전에 최소 3개년 2021 ~ 2023년도 시험 모두 풀어보기
*/