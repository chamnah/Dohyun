#include <iostream>
using namespace std;

const int playerMaxCount = 11;
// �ٲ�� �ȵǴ� ��
// �˾ƺ��� ���� �ϱ� ����
// ���� �ٲٸ� �� �ٲ�

int main()
{
	int a = 10; // ��� - ������ �ʴ� ��
	int b = 10; 
	//a = 20;

	const int const* const ptrA = &a;
	*ptrA = 10;// �� ���� �Ұ�
	ptrA = &b;// �����Ͱ� ����Ű�� �ּ� ���� �Ұ��� 
	/*
	const int* ptr = &a;
	*ptr = 10; // �� ���� �Ұ�
	ptr = &b; // �����Ͱ� ����Ű�� �ּ� ���� ���� 
	*/

	/*
	int const* ptr = &a;
	*ptr = 10; // �� ���� �Ұ�
	ptr = &b; // �����Ͱ� ����Ű�� �ּ� ���� ���� 
	*/

	int* const ptr = &a;
	*ptr = 10; // �� ���� ����
	ptr = &b; // �����Ͱ� ����Ű�� �ּ� ���� �Ұ��� 

	return 0;
}