#include <iostream>
using namespace std;

void main()
{
	/*
	증감 연산자 - 1이 증가되거나, 1이 감소되는 연산자
	전위 연산자 - 가장 먼저 연산되는 연산자
	후위 연산자 - 가장 마지막에 연산되는 연산자
	*/
	/*
	int num = 10;
	++num; // 1이 증가 - 전위 연산
	num++; // 1이 증가 - 후위 연산

	--num; // 1이 감소
	num--; // 1이 감소
	*/
	
	//int num = 10;
	//int a = num++; 
	////1. num을 a에 대입한다 
	////2. num의 값을 1증가시킨다.
	//cout << a << endl;
	//cout << num << endl;

	//int num = 10;
	//int a = ++num;
	////1. num의 값을 1증가시킨다.
	////2. a에 num의 값을 대입한다.
	//cout << a << endl;  //11
	//cout << num << endl;//11


	/*int num = 0;
	cout << num++ << endl;*/

	/*int a = 10;
	int num = (a++) + 1;
	cout << num << endl;*/

	/*
	전위 연산 위주로 사용 권장
	*/
}