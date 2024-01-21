#pragma once
// *.h : 각종 라이브러리를 불러오기 위한 확장자
#include <iostream>
using namespace std;
void func2()
{
	cout << "나는 다른 파일에서 불리는 함수야" << endl;
}

namespace Haland
{
	void Shot()
	{
		cout << "슛" << endl;
	}
}