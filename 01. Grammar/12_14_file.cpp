#include <iostream>
#include <stdio.h>
using namespace std;

void FileWrite()
{
	FILE* pFile = NULL;
	fopen_s(&pFile, "Save.txt", "wt");

	char szText[100] = "���ع��� ��λ��� ������ �⵵��";

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
	//C��� / C++

	//write : ����.

	//FileWrite();
	FileRead();
	

	return 0;
}

//����
/*
���� ������� �̿��ؼ�,
1. �ֱ��� 1���� ���� ����
2. �ֱ��� 1�� ���� �ҷ��ͼ� ����ϱ�
*/

/*
���� ����� : ���� ���� / ���� �о����
*/