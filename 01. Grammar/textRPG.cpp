#include <iostream>

using namespace std;

enum JobType
{
	WIZZARD = 1,
	WARRIOR,
	SOCCER_PLAYER,
	STUDENT,
	LOL_GAMER
};

class Player
{
private:
	char m_szName[10];
	JobType m_eJob;
	int  m_iLevel;
	int  m_iPhysicalAttack;
	int  m_iMagicAttack;
	int  m_iDefence;
	int  m_iMoney;

public:
	//Getter/Setter
	void SetName(const char* pszName)
	{
		strcpy_s(m_szName, pszName);
	}

	const char* GetName()
	{
		return m_szName;
	}

	void PrintStatus()
	{
		cout << "============== 상태창 ==============" << endl;
		cout << "이름 : " << m_szName << endl;
		cout << "레벨 : " << m_iLevel << endl;
		cout << "직업 : " << m_eJob << endl;
		cout << "물리 공격력 : " << m_iPhysicalAttack << endl;
		cout << "마법 공격력 : " << m_iMagicAttack << endl;
		cout << "방어력 : " << m_iDefence << endl;
		cout << "돈 : " << m_iMoney << endl;
		cout << "==================================" << endl;
	}

};

int main()
{
	cout << "눈을 뜨세요. 용사여......" << endl;
	cout << "도현 월드에 온 걸 환영하네." << endl;
	cout << "자네의 이름은 무엇인가?" << endl;

	Player p1;

	char szName[10];
	cin >> szName;
	p1.SetName(szName);

	cout << "자네의 이름은 " << p1.GetName() << "이군." << endl;
	
	while (true)
	{
		cout << "우리 월드를 탐험하기 위해서는 직업이 필수라네." << endl;
		cout << "원하는 직업을 골라보게나." << endl;
		cout << "1. 마법사 2. 전사 3. 축구선수 4.학생 5. 롤 게이머 " << endl;

		int iJob;
		cin >> iJob;
		
		switch (iJob)
		{
		case WIZZARD:
			cout << "======= 마법사 ======" << endl;
			cout << "물리 공격력 : 3" << endl;
			cout << "마법 공격력 : 10" << endl;
			cout << "방어력 : 2" << endl;
			cout << "돈 : 500" << endl;
			break;
		case WARRIOR:
			cout << "======= 전사 ======" << endl;
			cout << "물리 공격력 : 7" << endl;
			cout << "마법 공격력 : 2" << endl;
			cout << "방어력 : 5" << endl;
			cout << "돈 : 300" << endl;
			break;
		case SOCCER_PLAYER:
			cout << "======= 축구선수 ======" << endl;
			cout << "물리 공격력 : 20" << endl;
			cout << "마법 공격력 : 1" << endl;
			cout << "방어력 : 7" << endl;
			cout << "돈 : 10000" << endl;
			break;
		case STUDENT:
			cout << "======= 수험생 ======" << endl;
			cout << "물리 공격력 : 3" << endl;
			cout << "마법 공격력 : 3" << endl;
			cout << "방어력 : 4" << endl;
			cout << "돈 : 200" << endl;
			break;
		case LOL_GAMER:
			cout << "======= 롤 게이머 ======" << endl;
			cout << "물리 공격력 : 15" << endl;
			cout << "마법 공격력 : 10" << endl;
			cout << "방어력 : 6" << endl;
			cout << "돈 : 50000" << endl;
			break;
		default:
			break;
		}

		int selectInput = 0;
		cout << "1. 선택 2. 뒤로가기" << endl;
		cin >> selectInput;

		if (selectInput == 1)
		{
			// 능력치 세팅
			break;
		}

		system("cls");
	}
	// 능력치 출력하기

	return 0;
}

/*
숙제 : 직업 선택 후 능력치 세팅하기
주의 : private 상태 변경하면 안됨
*/