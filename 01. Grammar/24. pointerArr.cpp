#include <iostream>
using namespace std;
int main()
{
	// ������ == �迭 ģ��

	/*
	int a;
	int arrInt[5] = { 0,1,2,3,4 };
	int* ptrInt = &arrInt[0];
	ptrInt = arrInt;// ���� == &arrInt[0]

	//cout << ptrInt[2] << endl;
	//cout << *(ptrInt + 2) << endl;
	// arrInt ������ ����� ���� 100���� ����

	bool* ptrBool = (bool*)(&arrInt[0]);

	cout << "bool ������+0 �� :" << *(ptrBool + 0) << endl;
	cout << "bool ������+1 �� :" << *(ptrBool + 1) << endl;
	cout << "bool ������+2 �� :" << *(ptrBool + 2) << endl;
	cout << "bool ������+3 �� :" << *(ptrBool + 3) << endl;
	*/
	
	//int arrInt[2] = { 10, 20 }; // 8byte == bool x 8

	/*bool* ptrBool = (bool*)(&arrInt[0]);

	for (size_t i = 0; i < 8; i++)
	{
		cout << i << "��° �� : " << ptrBool[i] << endl;
	}*/

	/*short* ptrShort = (short*)(&arrInt[0]);

	for (size_t i = 0; i < 8; i++)
	{
		cout << i << "��° �� : " << ptrShort[i] << endl;
	}*/


	/*short arrShort[5] = { 1,2,3,4,5 };
	short* pShort = &arrShort[1];
	cout << *(pShort + 2) << endl;*/

	/*int arrInt[5] = { 1,2,3,4,5 };
	int* pInt = &arrInt[2];
	cout << *(pInt + 2) << endl;*/
}

/*
0. ĳ����
1. ����������
2. ���ڿ� - �����ͷ� ǥ���ϴ� ���
3. ����ü ������
4. ���� �Ҵ� - �ǽð����� ��ǻ�Ϳ��� �ڷ��� ����
*/

/*
������ - �ǽð����� ����
*/