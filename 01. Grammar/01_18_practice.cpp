#include <iostream>
using namespace std;

//void Add(int iNumB)
//{
//	iNumB += 10;
//}
//
//void Print(int iNumC)
//{
//	cout << iNumC << endl;
//}

void Add(int* iNumb)
{

}

int main()
{
	int iNumA = 20;

	//Add(iNumA);
	int* iNumb = &iNumA;

	/*int iNumA = 10;
	Add(iNumA);
	Print(iNumA);*/
	/*
	int iNumA = 10; // iNumA : 10
	
	// Add�Լ�
	int iNumB = iNumA; // iNumB : 10
	iNumB += 10;       // iNumB : 20 / iNumA : 10

	//Print�Լ�
	int iNumC = iNumA; // iNumC : 10
	cout << iNumC << endl; // 10
	*/

	/*int iNumA = 10;

	int& iNumB = iNumA;
	iNumB += 10;

	cout << iNumA << endl;*/

	// 1�� ����
	/*
	int iNumA = 20;

	20�� ���ϴ� Add �Լ� ����� ����ϱ�
	Add(iNumA);
	cout;
	2.
	int iNumA = 30;
	int iNumB = 50;

	Swap�Լ� ���� �� ������ ���� ��ü �� ���
	
	3.
	int iNumA = 30;
	int iNumB = 50;
	int result = 0;
	Add �Լ��� iNumA�� iNumB ���� result ������ ���ļ� ��� �ϱ�;

	*/


	return 0;
}