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
3/12 숙제 연장~~~~~!!!!! 꼭 해오기~!!!!!
1. 문자열 복사 - 문자 배열 == 문자열
	- 문자열 인자 두개를 받는다.
	- 첫번째 인자로 들어온 문자열을 두번째 인자인 문자열에 복사한다.
	- 두번째 문자열 출력

2. 복습
    - 문자열 비교 함수
	- 문자열 길이 함수
*/

/*
이름 규칙!!!!

함수 이름 규칙
- 첫번째 문자는 무조건 대문자로 시작
- 카멜 표기법을 준수한다. - 단어별로 단어 첫자를 대문자로 나머지는 소문자로
ex) getcharlength -> GetCharLength

변수 이름 규칙
- 헝가리안 표기법
카멜 표기법을 준수한다.
- 첫번째 문자가 무조건 소문자로 시작

int   iHP;
short iHP;
long  iHP;
char  szName;
char[10] arrName; - arr : 배열(array)
int [10] arrHp;
float fHP;
double dbHP;
bool   bFlag;
*/