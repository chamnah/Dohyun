#include <iostream>
using namespace std;

int main()
{
	/*
	삽입 정렬
	인덱스를 순차적으로 순회하면서, 내가 삽입될 위치로 옮기는 정렬(오른쪽 -> 왼쪽)
	*/

	int arrNum[] = { 46, 28, 19, 71, 30, 51, 9 };
	int arrNumCount = _countof(arrNum);

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

	// 정렬된 값 출력
	for (size_t i = 0; i < arrNumCount; i++)
	{
		cout << arrNum[i] << " ";
	}

	return 0;
}

/*
복습해오기
1. 위 코드 따라 쳐보고 연습해보기
2. Swap함수 / 삽입 정렬 함수로 함수화 해보기

*/