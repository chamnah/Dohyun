#include <iostream>

using namespace std;

int main()
{



	for (size_t i = 5; i > 0; i--)
	{
		cout << i << " ";
	}
	// i = 5 거짓 - 실행 안됨
	// i = 5 4 3 2 1 0 -1 -2 -3 -4 -5 -6
	// i 5 4 3 2 1









	/*for (size_t i = 1; i < 6; i++)
	{
		cout << i << " ";
	}*/
	/*
	i = 1 참 - 실행
	i = 2 참 - 실행
	i = 3 참 - 실행
	i = 4 참 - 실행
	i = 5 참 - 실행
	i = 6 거짓 - 탈출
	*/

	return 0;
}

/*
숙제
03_08_selectionSort.cpp 참고해서, 
도현 학생 코드 중 3-8.cpp 오류 확인해서 수정해오기

1. 다음 시간에 원인과 어떻게 개선했는지 설명하기 
2. 선택 정렬에 대해서, 분석하고 설명하기

*/