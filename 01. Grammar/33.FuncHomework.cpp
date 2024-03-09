#include <iostream>
using namespace std;

bool CompareString(const char first[10], const char second[10])
{
	//1. 서로 다른 문자가 나올때까지
	//2. 문자열 끝까지
	for (int i = 0; i < 10; i++)
	{
		if (first[i] != second[i])
		{
			return false;
		}
	}

	return true;
}

int main()
{
	if (CompareString("abce", "abcd"))
	{
		cout << "문자열이 서로 같습니다." << endl;
	}
	else
	{
		cout << "문자열이 서로 다릅니다." << endl;
	}

	return 0;
}

//함수
/*
3/9 숙제~!! 꼭 해오기~~!!!!!
1. 문자열 복사
	- 문자열 인자 두개를 받는다.
	- 첫번째 인자로 들어온 문자열을 두번째 인자인 문자열에 복사한다.
	- 두번째 문자열 출력

2. 복습
    - 문자열 비교 함수
	- 문자열 길이 함수
*/