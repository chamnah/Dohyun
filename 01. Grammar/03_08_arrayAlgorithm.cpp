#include <iostream>

using namespace std;

int main()
{
	int arrNum[5] = { 1,2,3,4,5 };
	int iNum = arrNum[0];

	// 가장 작은 수를 출력하는 코드
	for (int i = 0; i < 5; i++)
	{
		if (arrNum[i] < iNum)
		{
			iNum = arrNum[i];
		}
	}
	
	cout << iNum << endl;
	return 0;
}

/*
숙제
int arrNum[5] = { 1,2,3,4,5 };
1. 역순으로 출력하기
2. 가장 큰 수의 인덱스 출력
3. 가장 작은 수의 인덱스 출력
4. 선택 정렬 오류 찾아서 수정하기 - 숙제
*/