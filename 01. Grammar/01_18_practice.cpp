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
	
	// Add함수
	int iNumB = iNumA; // iNumB : 10
	iNumB += 10;       // iNumB : 20 / iNumA : 10

	//Print함수
	int iNumC = iNumA; // iNumC : 10
	cout << iNumC << endl; // 10
	*/

	/*int iNumA = 10;

	int& iNumB = iNumA;
	iNumB += 10;

	cout << iNumA << endl;*/

	// 1번 문제
	/*
	int iNumA = 20;

	20을 더하는 Add 함수 만들고 출력하기
	Add(iNumA);
	cout;
	2.
	int iNumA = 30;
	int iNumB = 50;

	Swap함수 만들어서 두 변수의 값을 교체 후 출력
	
	3.
	int iNumA = 30;
	int iNumB = 50;
	int result = 0;
	Add 함수로 iNumA와 iNumB 값을 result 변수에 합쳐서 출력 하기;

	*/


	return 0;
}