#include <iostream>

using namespace std;

/*
로딩 - 호출
함수 오버로딩 : 동일한 이름의 함수를 인자로 구분하여 재정의

라이딩 - 부모 위에 자식이 올라타는 느낌
함수 오버라이딩 : 부모 클래스에서 만든 함수를 자식 클래스에서 재정의 / 가상 함수만 가능
*/

//void Func()
//{
//	cout << "Func1" << endl;
//}

/*
int Func()
{
	cout << "Func3" << endl;
	return 0;
}
*/
//void Func(int a)
//{
//	cout << "Func2" << endl;
//}

// 가상 or 가상의 : virtual

class CParent
{
public:
	virtual void PrintMyClassName()
	{
		cout << "CParent 클래스 호출" << endl;
	}
};

class CChild : public CParent
{
public:
	void PrintMyClassName()
	{
		cout << "CChild 클래스 호출" << endl;
	}
};

/*
parent class 챔피언

child class : 볼리베어,야스오,요네
virtual PrintMyName()

int main()
{
   챔피언클래스로 자식 클래스 동적할당
   챔피언 클래스 PrintMyName함수 호출

}
*/

int main()
{
	CParent* pParent = new CChild;
	pParent->PrintMyClassName();

	/*
	부모 포인터 활용 시, 하나의 배열에 보관 가능
	CParent* arrParent[2];
	arrParent[0] = new CChild;
	arrParent[1] = new CChild2;*/

	/*CParent* pParent = new CParent;
	pParent->PrintMyClassName();*/

	/*CParent tempParent;
	tempParent.PrintMyClassName();

	CChild tempChild;
	tempChild.PrintMyClassName();*/

	return 0;
}

/*
숙제
1. 챔피언 부모 클래스 포인터 배열 크기 3으로 만들기
2. 배열 인덱스 0,1,2 에 야스오,요네,볼리베어 동적할당
3. 반복문을 사용하여, 배열 모든 인덱스 순회하여, PrintMyName함수 호출
*/

/*
class CChild2 : public CParent
{
public:
	void PrintMyClassName()
	{
		cout << "CChild 클래스 호출" << endl;
	}
};
*/