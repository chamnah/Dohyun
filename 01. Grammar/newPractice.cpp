#include <iostream>
using namespace std;

int main()
{
	//1. �ڷ���
	/*
	int      ����                       4byte
	bool   ��/����(0�Ǵ� 0�� �ƴ� ��)   1byte
	float    �Ǽ�(�Ҽ�)                 4byte
	char     ����                       1byte
	char[10] ���ڿ�                    10byte

	1byte = 8bit   / 4byte = 32bit

	int*    int�� �ּҰ�                 8byte - x64(64��Ʈ) / 4byte - x86(32��Ʈ)
	char*   char�� �ּҰ�                8byte - x64(64��Ʈ) / 4byte - x86(32��Ʈ)

	int&    int �޸� ����    


	2. for�� / while�� / do while
	-> 1. for�� 1���� 10���� ���� ���
	   2. while�� 
	   3. do while�� 
	*/

	/*int a = 10;
	int& refA = a;
	refA = 30;

	cout << a << endl;

	int* pointerA;*/ // �� ���� �̿��ؼ� a�� ���� 100���� �����غ�����.

	/*if (true)
		int temp = 0;

	while (true)
		int temp = 0;*/

	int a = 0;

	// ������ �ѹ��� �����
	do
	{
		a += 1;
		cout << a << endl;

		if (a == 10)
		{
			break;
		}
	} while (false);


	//temp = 10;
	return 0;
}