#include <iostream>
using namespace std;

int main()
{
	//int* pInt; //4byte크기의 메모리의 주소
	//short*;    //2byte크기의 메모리가 담긴 주소

	const char* pChar = "abcd"; // 1byte크기의 메모리가 담긴 주소
	char szArr[5] =  "abcd";

	//cout << pChar << endl;
	//cout << *(pChar + 2) << endl;
	cout << static_cast<int>(*pChar) << endl;

	/*
	1번 문제
	char szArr[6] = "abcde";
	char* pChar;

	c의 값을 j로 바꾸세요.

	szArr = "abjde"
	
	1. 배열 for문으로 출력하기
	2. cout << pChar
	*/
	return 0;
}