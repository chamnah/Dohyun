#include <iostream>

using namespace std;



void Func1()
{
	int a = 20;
}

void Func2()
{
	int a;
	a = 999;
}

void Swap(int a, int b)
{
	a = 20;
	b = 30;
}

int main()
{
	int a = 50;

	//Referrence : �����ϴ�
	
	// �����л��� Ű��� ��� 
	//����� : �ϴϾ�~
	//ģ�� : �Ŀ˾�~
	//���� : �����~

	// �ϴϿ��� �򸣸� �־���
	// �Ŀ��̿��� �򸣸� �־���
	// ���񿡰� �򸣸� �־���



	int& b = a; // b : 50
	b = 30;    // b : 30

	//int �ּҰ�
	int* pInt = &a;
	*pInt = 20;

	cout << a << endl; // 

	return 0;
}

/* ����
�����ؿ���~~

Sort�Լ� (�迭, ũ��) �����

*/