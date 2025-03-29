#include <iostream>
using namespace std;

int pushIndex = 0;
int popIndex = 0;

// 데이터를 저장할 장소, 데이터
void Push(int* pDataList, int data)
{
	pDataList[pushIndex] = data;
	pushIndex++;// pushIndex += 1;
}

int Pop(int* pDataList)
{
	int popData = pDataList[popIndex];
	pDataList[popIndex] = 0;
	popIndex++;

	return popData;
}

int main()
{
	int m_iDataList[100] = {};

	for (int i = 1; i <= 10; i++)
	{
		Push(m_iDataList, i);
	}

	cout << "Push 후 모습" << endl;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << m_iDataList[i * 10 + j];
		}

		cout << endl;
	}

	cout << "Pop" << endl;

	for (int i = 1; i <= 10; i++)
	{
		cout << Pop(m_iDataList) << " ";
	}

	cout << "Pop 후 모습" << endl;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << m_iDataList[i * 10 + j];
		}

		cout << endl;
	}
}

/*
복습해오기
1. 위 코드 따라 쳐보고 연습해보기 - O
2. 삽입 정렬 함수로 함수화 해보기 - X
*/

/*
난이도 : (상) (중) (하)
상 - 선택 정렬, 삽입 정렬, 버블 정렬을 각각 안보고 치기

중 - 정렬 중 한가지만 선택 함수화 하여, 정렬 만들기

하 - 정렬 중 한가지만 선택하여 어떻게든 만들기


숙제
1. (중) 단계 정렬 연습해오기
2. 큐 코드 분석해서 설명할 수 있게 하기
*/