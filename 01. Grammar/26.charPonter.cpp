#include <iostream>
using namespace std;

int main()
{
	//int* pInt; //4byteũ���� �޸��� �ּ�
	//short*;    //2byteũ���� �޸𸮰� ��� �ּ�

	const char* pChar = "abcd"; // 1byteũ���� �޸𸮰� ��� �ּ�
	char szArr[5] =  "abcd";

	//cout << pChar << endl;
	//cout << *(pChar + 2) << endl;
	cout << static_cast<int>(*pChar) << endl;

	/*
	1�� ����
	char szArr[6] = "abcde";
	char* pChar;

	c�� ���� j�� �ٲټ���.

	szArr = "abjde"
	
	1. �迭 for������ ����ϱ�
	2. cout << pChar
	*/
	return 0;
}