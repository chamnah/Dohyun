#include <iostream>

using namespace std;

int main()
{
	/*
	������ : �ڷ��� / �޸� �ּҸ� �����ϴ� �ڷ���
	// ���� Ư���� ������ ���� ��
	*/

	int a; // 4byte - �޸�ũ�� //�� ī�� - �޸𸮿� ������ 4����Ʈ��ŭ �Ҵ��
	a = 10;

	//cout << "a �� �ּ� :" << a << endl;

	//int* pInt = &a; // pInt �����ͷ� a�� �ּҸ� ����Ŵ
	//*pInt = 20;

	//cout << "a �� �ּ� :" << a << endl;

	//cout << "a�� �ּ� : " << &a << endl;

	// �޸� �ּ� �̸� a // ��������

	/*
	C++���� ����� ����
	
	1. FOR�� �迭 - ����� �����ϰ� �ѱ�
	2. ������(�߿�) - ���� ���α׷����� ���� �ƴѰ�����.
	
	*/

	int _Int; // 4byte
	bool _Bool; // 1byte
	short _Short; // 2byte
	long _Long; // 4byte
	
	float* ptrFloat;// �޸� �ּҸ� �����ϴ� �ڷ���
	//�ڷ��� ũ�� 32��Ʈ : 4byte / 64 : 8byte
	// ��� �ڷ����� �������� ũ��� �����ϴ�.

	cout << "�������� ũ�� : " << sizeof(ptrFloat);

	return 0;
}