#include <iostream>
using namespace std;

int b = 0; // ��������

int func(int d/*�Ű�����, ��������*/)
{
	int c = 0; // ��������
	return 0;
}
/*
struct Info // �ڷ���
{
	bool a; // 1byte - 4 ... 3
	int  b; // 4byte - 4
	char c; // 1byte - 4
};
*/

//struct Player
//{
//	char name[10];
//	int  attack;
//	int  deffence;
//	int  money;
//};
// �÷��̾� ����ü�� ���� ä�� �� ����ϼ���.
// �̸� : ����, ���ݷ� : 10, ���� : 5, �� : 500 


struct Student
{
	char name[10];
	int  kor;
	int  math;
	int  eng;
};
/*
	����ü�� �����Ҵ� �� �� �ְ� ����ϱ�
	�̸� : �̵��� ���� : ? ���� : ? ���� : ?
*/
/*
strcpy_s : ���ڿ� ����
strcat : ���ڿ� �̾���̱�
strcmp : ���ڿ� ��

*/

// ���� ū �ڷ��� ����Ʈ �� : 
// ���� �����ؾ� �� ����Ʈ : 
// ����Ʈ �е�
int main()
{
	{
		int q = 0;
	}

	//int a = 0; // ��������

	
	//int* ptrA = new int; // �����Ҵ�
	//delete ptrA;         // �Ҹ�
	//ptrA = nullptr;      // �ʱ�ȭ

	//int* ptrArray = new int[10];
	//delete[] ptrArray;

	/*
	1. int�� �����Ҵ��ؼ� ���� 100�� �ְ� �����Ҵ��� ���� ���
	��� �� �Ҹ�

	2. int 10��¥�� �迭�� �����Ҵ��Ͽ� 1 ~ 10���� ���ڸ� ��� �ش� �迭�� ����Ͻÿ�.
	��� �� �Ҹ�
	*/

	//int arrA[10] = {1,2,3};
	//arrA; // �迭�� �̸��� �ּ�
	//arrA == &(arrA[0])

	//cout << *arrA;

	//int arrA[10] = {}; // 1 ~ 10����
	
	//����ü
	/*
	Info testInfo;

	testInfo.a = 10;

	cout << sizeof(testInfo);


	int = 10;
	int a = 10;
	Player a;
	a.name;
	*/
	// ����Ʈ �е�

	

	 
	return 0;
}

/*
	�޸𸮿��� 4����
	STACK
	- ���� ���� : ��ȣ �ȿ� ����� ����
	��ȣ �ȿ��� ���� / ��ȣ ������ �Ҹ�

	HEAP
	- �����Ҵ�� �޸� ���� - ����� ����
	���� ���Ҷ� ���� / ���� ���� �� �Ҹ�

	DATA
	- ���� ���� : ��ȣ �ۿ� ����� ����
	���α׷� ����� �� ���� / ���α׷� ���� �� �Ҹ�

	CODE
	- �ڵ�
	
*/