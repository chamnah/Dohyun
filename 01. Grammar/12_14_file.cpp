#include <iostream>
#include <stdio.h>
using namespace std;

// w : write ���� / t : text ���� / r : read �б� / b : ���̳ʸ�
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

	char szText[100] = "���ع��� ��λ��� ������ �⵵��";

	fwrite(szText, sizeof(char), strlen(szText), pFile);

	fclose(pFile);

	cout << "������ ����Ǿ����ϴ�." << endl;
}

void FilePrint()
{
	FILE* pFile = nullptr;
	fopen_s(&pFile, "Save.txt", "wt");

	fprintf(pFile, "�ȳ��ϼ��� %d \n", 1);
	fprintf(pFile, "�ȳ��ϼ��� %d \n", 2);
	fprintf(pFile, "�ȳ��ϼ��� %d \n", 3);
	fprintf(pFile, "�ȳ��ϼ��� %d \n", 4);

	fclose(pFile);

	cout << "������ ����Ǿ����ϴ�." << endl;
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
	//C��� / C++

	//write : ����.

	//FileWrite();
	//FileRead();
	//FileGet();
	//FilePrint();

	return 0;
}

//����
/*
���� ������� �̿��ؼ�,
1. �ֱ��� 1���� ���� ����
2. �ֱ��� 1�� ���� �ҷ��ͼ� ����ϱ�
*/

/*
��ǻ�� ���α׷� ����
���� ����� : ���� ���� / ���� �о����

���� �Է� : ���� ����
���� ��� : ���� �б�

*/