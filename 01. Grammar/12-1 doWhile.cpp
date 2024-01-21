#include <iostream>
using namespace std;

void main()
{
	while (false)
	{
		cout << "반복 실행";
	}

	do
	{
		// true면 실행
		//false여도 무조건 1회이상 실행
		cout << "반복 실행";
	} while (false);
}