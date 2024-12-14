#include <iostream>
#include <stdio.h>
using namespace std;

void FileWrite()
{
	FILE* pFile = NULL;
	fopen_s(&pFile, "Save.txt", "wt");

	char szText[100] = "동해물과 백두산이 마르고 닳도록";

	fwrite(szText, sizeof(char), 100, pFile);

	fclose(pFile);
}

void FileRead()
{
	FILE* pFile = NULL;
	fopen_s(&pFile, "Save.txt", "rt");

	char szText[100];

	fread(szText, sizeof(char), 100, pFile);

	fclose(pFile);

	cout << szText << endl;
}

int main()
{
	//C언어 / C++

	//write : 쓰다.

	//FileWrite();
	FileRead();
	

	return 0;
}

//숙제
/*
파일 입출력을 이용해서,
1. 애국가 1절을 파일 저장
2. 애국가 1절 파일 불러와서 출력하기
*/

/*
파일 입출력 : 파일 저장 / 파일 읽어오기
*/