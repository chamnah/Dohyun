#include <iostream>

using namespace std;

int main()
{
	// ĳ���� - ����ȯ - �ڷ����� ��ȯ��Ų��.

	int a = 10000000; // 4byte - 21��
	short b = (short)a; // 2byte - 65000���� ����

	/*
	C���
	
	C++��� - C��� ����
	C��� ���̽��� Ȯ��� ��� 

	C��� ��Ÿ�� - �˾Ƶ־� ��
	ĳ����
	(�ڷ���)���� - ������ �ڷ����� �ٸ� �ڷ������� ����

	*/

	

	/*
	C++��� ��Ÿ�� - ��ȣ
	ĳ����

	���� - ���� �Ҷ� ���� �߻�
	1. staitc_cast<�ڷ���>(����)
	- �����Ϸ����� ��������� ������ִ� ĳ���ø� ���
	
	int a; // ����
	int* pInt = static_cast<int*>(a);
	�Ұ�

	int a; // ����
	short pInt = static_cast<short>(a);
	����

	int a = 100000;

	short b = a;
	cout << b << endl;

	// short
	// bool
	// longlong
	// long
	// char
	// float

	���� - ���α׷� ���� �� ���� üũ
	2. dynamic_cast<�ڷ���>(����)
	- Ŭ�������� �θ� Ŭ������ �ڽ� Ŭ���� ����ȯ


	3. const_cast<�ڷ���>(����)
	- const int ����; // ������ �ʴ� ��
	- const �����Ϳ� const�� �������ִ� ����ȯ

	const int* c = &a;
	int* temp = const_cast<int*>(c);

	4. reinterpret_cast<�ڷ���>(����)
	- ���� ����ȯ
	- ������ ����ȯ ���� / ������ �����ϴ�.
	*/
	

}


