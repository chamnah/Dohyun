#include <iostream>
using namespace std;
int main()
{
	// 포인터 == 배열 친구

	/*
	int a;
	int arrInt[5] = { 0,1,2,3,4 };
	int* ptrInt = &arrInt[0];
	ptrInt = arrInt;// 동일 == &arrInt[0]

	//cout << ptrInt[2] << endl;
	//cout << *(ptrInt + 2) << endl;
	// arrInt 마지막 요소의 값을 100으로 변경

	bool* ptrBool = (bool*)(&arrInt[0]);

	cout << "bool 포인터+0 값 :" << *(ptrBool + 0) << endl;
	cout << "bool 포인터+1 값 :" << *(ptrBool + 1) << endl;
	cout << "bool 포인터+2 값 :" << *(ptrBool + 2) << endl;
	cout << "bool 포인터+3 값 :" << *(ptrBool + 3) << endl;
	*/
	
	//int arrInt[2] = { 10, 20 }; // 8byte == bool x 8

	/*bool* ptrBool = (bool*)(&arrInt[0]);

	for (size_t i = 0; i < 8; i++)
	{
		cout << i << "번째 값 : " << ptrBool[i] << endl;
	}*/

	/*short* ptrShort = (short*)(&arrInt[0]);

	for (size_t i = 0; i < 8; i++)
	{
		cout << i << "번째 값 : " << ptrShort[i] << endl;
	}*/


	/*short arrShort[5] = { 1,2,3,4,5 };
	short* pShort = &arrShort[1];
	cout << *(pShort + 2) << endl;*/

	/*int arrInt[5] = { 1,2,3,4,5 };
	int* pInt = &arrInt[2];
	cout << *(pInt + 2) << endl;*/
}

/*
0. 캐스팅
1. 다중포인터
2. 문자열 - 포인터로 표현하는 방법
3. 구조체 포인터
4. 동적 할당 - 실시간으로 컴퓨터에서 자료형 생성
*/

/*
갤러그 - 실시간으로 동작
*/