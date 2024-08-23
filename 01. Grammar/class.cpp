#include <iostream>
using namespace std;

struct Info // 사용자 정의 자료형
{
//public
private:
	int a;
	int b;
	int c;
};

class A
{
private:
	int m_a;
public:
	int m_b;
	int m_c;

public:

	A()
	{
		// 생성자ssssssssssssssss
		cout << "생성자 호출~!!!!" << endl;
	}

	~A()
	{
		// 소멸자
		cout << "소멸자 호출~!!!!" << endl;
	}

	void SetPlayer(int _attack, int _money)
	{

	}

	//void Func()
	//{
	//	a = 10;// 클래스 내부 함수만 사용 가능
	//	b = 10;
	//	cout << "A 클래스 함수입니다~";
	//}
};
/*
Player 클래스를 만들어서 속성 값을 세팅해보세요.
이름 / 공격력 / 방어력 / 돈
출력하기

출력 기능을 클래스 내부 함수로 만든 후 함수 호출
*/
/*
접근 지정자

private:
클래스 내부에서만 접근이 가능하다.
외부 접근 불가능

public:
클래스 내부 / 외부 모두 접근이 가능하다.

protected:
부모-자식 클래스

*/
/*
생성자 (함수)
- 클래스 변수 생성 시 자동으로 호출

소멸자 (함수)
- 클래스 변수 소멸 시 자동으로 호출
*/

/*
숙제
텍스트 알피지 만들기
캐릭터 생성 만들기

1. 플레이어 클래스에 이름, 공격력, 방어력, 돈을 cin 이용해서 입력 받기 
2. 캐릭터 생성 후 플레이어 상태창 출력하기

============== 상태창 ===============
이름 : 김용사
레벨 : 1
직업 : 도둑
공격력 :
방어력 :
돈     :
=======================================







닉네임 랜덤 생성기

닉네임 지어주기
나의 이름을 넣으면 별명 지어주기

롤에서 스킬 공식


무한 루프 while(true)

*/


int main()
{
	/*Info structA;
	structA.a = 10;

	A classA;
	classA.a = 20;
	
	int = 20;
	int a = 10;
	a = 10;*/
	/*int a = 0;
	{
		A classA;
	}*/
	
	//classA.Func();

	return 0;
}

/*
클래스와 구조체 차이점?

클래스에는 변수 저장할 수 있다? 없다?

함수 있다? 없다?

클래스 생성할 때 호출되는 함수 이름? 생성자 
클래스 소멸될 때 호출되는 함수 이름? 소멸자

public - 클래스 내부 / 외부 호출 가능 (변수, 함수)
private - 클래스 내부에서만 호출 가능 (변수, 함수) 
*/

/*
08/23 숙제
복습 - 안보고 치기 테스트(함수화 자유)

cin 입력 부분 함수화해오기
*/