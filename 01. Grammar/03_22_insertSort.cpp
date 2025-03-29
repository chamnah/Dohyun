#include <iostream>
using namespace std;

void InsertSort()
{
	// 삽입 정렬
	for (int key = 1; key < arrNumCount; key++)
	{
		int keyValue = arrNum[key];
		int j = key - 1;

		// key 왼편부터 시작해서, keyvalue를 삽입할 위치 찾기
		for (; j >= 0; --j)
		{
			// keyValue값보다 크면, 오른쪽으로 이동 시키면서 삽입할 위치 찾기
			if (arrNum[j] > keyValue)
			{
				arrNum[j + 1] = arrNum[j];
			}
			else
			{
				break;
			}
		}

		// j + 1 이 최종 keyValue를 삽입할 위치가 되어 해당 위치에 keyValue 삽입
		arrNum[j + 1] = keyValue;
	}
}

int main()
{
	/*
	삽입 정렬
	인덱스를 순차적으로 순회하면서, 내가 삽입될 위치로 옮기는 정렬(오른쪽 -> 왼쪽)
	*/

	int arrNum[] = { 46, 28, 19, 71, 30, 51, 9 };
	int arrNumCount = _countof(arrNum);

	InsertSort();

	// 정렬된 값 출력
	for (size_t i = 0; i < arrNumCount; i++)
	{
		cout << arrNum[i] << " ";
	}

	return 0;
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
*/