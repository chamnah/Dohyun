#include <iostream>
using namespace std;

int main()
{
	int a; // 4byte
	int* pA = &a; // ���� ������ 64��Ʈ : 8byte
	int** ppA = &pA; // ���� �������� �޸� �ּ�
	int*** pppA = &ppA;
	int******************************* pTemp;

	*pA; // �ڷ��� int
	*ppA;// �ڷ��� int* 
	
	//*ppA == int* 
	//
	*(*ppA) = 10;

	/*
	int a = 100;
	int*** pppA;
	pppA�� �̿��ؼ� a�� ���� 100���� �����غ�����.
	*/

	return 0;
}