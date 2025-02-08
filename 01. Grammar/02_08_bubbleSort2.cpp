#include <iostream>
using namespace std;

void Swap(int& left, int& right)
{
	int temp = left;
	left = right;
	right = temp;
}

void BubbleSort(int numCount, int* arrNum)
{
	for (int i = 0; i < numCount - 1; i++)
	{
		int left = i;
		int right = i + 1;
		// 내림차순 : if (arrNum[left] '<' arrNum[right])
		// 오름차순
		if (arrNum[left] > arrNum[right])
		{
			Swap(arrNum[left], arrNum[right]);
		}
	}
}
//왼쪽에 있는 값이 더 큰 경우 스왑한다.

void main()
{
	const int numCount = 5;
	int arrNum[numCount] = { 28,  19,  24,  12, 7 };
	// 배열의 이름은 배열 0번째 주소와 같다.
	// arrNum == &arrNum[0]
	// int* num = arrNum;

	for (int i = 0; i < numCount - 1; i++)
	{
		BubbleSort(numCount, arrNum);
	}

	// 값 최종 출력
	for (int i = 0; i < numCount; i++)
	{
		cout << arrNum[i] << ",";
	}
}

/*
숙제 : 복습~~~~~~~

1. 버블 정렬 1회,2회 .... 변경되는 모습 작성 연습해오기
   (오름차순 / 내림차순)

2. 버블 정렬 코드 따라쳐보고 연습해오기
*/