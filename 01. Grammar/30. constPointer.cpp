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

	
	
	// 1��
	char temp[6] = "abcde";
	char* pTemp1;
	// d�� ���� j�� �ٲٱ�
	//2��
	void* pTemp2;
	// b�� ���� e�� �ٲٱ�

	int* ptrTemp = NULL;
	*ptrTemp = 10;
	ptrTemp + 1;

	void* ptrTemp2;
;
	*ptrTemp2;
	*static_cast<int*>(ptrTemp2) = 20

	int arrInt[8] = { 5,8,9,10,4,3,7,1 };
	void* ptrVoid;
	// 3�� ���� 45�� ����


	return 0;
}