#include <iostream>
using namespace std;

//ex)
/*
int func(void* pA)
{
	*pA = 10;

	return 0;
}
*/
int main()
{
	//void : ������
	//void temp; // void ��ü�� �޸� ũ�Ⱑ ����
	void* pVoid; // 64��Ʈ : 8byte / 32��Ʈ : 4byte

	//void* : ��� �ڷ����� �ּҸ� ���� �� ����
	/*
	1. �پ��� �ڷ����� �޸� �ּҸ� ��Ƽ� ����� ��
	2. ���� ������ �޸� �ּ��� �ڷ����� �� ��
	*/

	/*int a;
	int* pA = &a;
	short* pB = &a;
	void* pC = &a;
	func(&a);*/
	

	return 0;
}