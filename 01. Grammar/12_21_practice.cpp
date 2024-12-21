#include <iostream>
using namespace std;

int main()
{
	char szText1[20] = "안녕하세요.";
	char szText2[20] = "반갑습니다.";
	char szResult[200] = "";

	//strcat : 문자열 이어붙이기
	//strcpy : 문자열 복사해주는 함수
	//strlen : 문자열 길이 반환해주는 함수
	//strcmp : 문자열 비교 반환값 : 0 같다 / 반환값 : 0이 아니면 다르다
	
	//strcpy_s(szResult, szText1);
	//strcpy_s(szResult, szText2);
	
	strcat_s(szResult, szText1);
	strcat_s(szResult, szText2);
	strcat_s(szResult, szText2);
	strcat_s(szResult, szText2);
	strcat_s(szResult, szText2);
	strcat_s(szResult, szText2);

	cout << szResult;

	return 0;
}