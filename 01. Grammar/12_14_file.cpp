#include <iostream>
#include <stdio.h>
using namespace std;

// w : write 쓰기 / t : text 글자 / r : read 읽기 / b : 바이너리
// wt
// rt
// wb
// rb
// w
// r

void FileWrite()
{
	FILE* pFile = nullptr;
	fopen_s(&pFile, "Save.txt", "wt");

	char szText[100] = "동해물과 백두산이 마르고 닳도록";

	fwrite(szText, sizeof(char), strlen(szText), pFile);

	fclose(pFile);

	cout << "파일이 저장되었습니다." << endl;
}

void FilePrint()
{
	FILE* pFile = nullptr;
	fopen_s(&pFile, "Save.txt", "wt");

	fprintf(pFile, "안녕하세요 %d \n", 1);
	fprintf(pFile, "안녕하세요 %d \n", 2);
	fprintf(pFile, "안녕하세요 %d \n", 3);
	fprintf(pFile, "안녕하세요 %d \n", 4);

	fclose(pFile);

	cout << "파일이 저장되었습니다." << endl;
}

void FileRead()
{
	FILE* pFile = nullptr;
	fopen_s(&pFile, "Save.txt", "rt");

	char szText[100] = "";

	fread(szText, sizeof(char), 100, pFile);

	fclose(pFile);

	cout << szText << endl;
}

void FileGet()
{
	FILE* pFile = nullptr;
	fopen_s(&pFile, "Save.txt", "rt");

	char szText[100] = "";

	for (size_t i = 0; i < 3; i++)
	{
		fgets(szText, 100, pFile);
		cout << szText << endl;
	}
	
	fclose(pFile);
}

int main()
{
	//C언어 / C++

	//write : 쓰다.

	//FileWrite();
	//FileRead();
	//FileGet();
	//FilePrint();

	return 0;
}

//숙제
/*
파일 입출력을 이용해서,
1. 애국가 1절을 파일 저장
2. 애국가 1절 파일 불러와서 출력하기
*/

/*
컴퓨터 프로그램 단위
파일 입출력 : 파일 저장 / 파일 읽어오기

파일 입력 : 파일 쓰기
파일 출력 : 파일 읽기

*/