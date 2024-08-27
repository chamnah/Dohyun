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
		cout << "============== ����â ==============" << endl;
		cout << "�̸� : " << m_szName << endl;
		cout << "���� : " << m_iLevel << endl;
		cout << "���� : " << m_eJob << endl;
		cout << "���� ���ݷ� : " << m_iPhysicalAttack << endl;
		cout << "���� ���ݷ� : " << m_iMagicAttack << endl;
		cout << "���� : " << m_iDefence << endl;
		cout << "�� : " << m_iMoney << endl;
		cout << "==================================" << endl;
	}

};

int main()
{
	cout << "���� �߼���. ��翩......" << endl;
	cout << "���� ���忡 �� �� ȯ���ϳ�." << endl;
	cout << "�ڳ��� �̸��� �����ΰ�?" << endl;

	Player p1;

	char szName[10];
	cin >> szName;
	p1.SetName(szName);

	cout << "�ڳ��� �̸��� " << p1.GetName() << "�̱�." << endl;
	
	while (true)
	{
		cout << "�츮 ���带 Ž���ϱ� ���ؼ��� ������ �ʼ����." << endl;
		cout << "���ϴ� ������ ��󺸰Գ�." << endl;
		cout << "1. ������ 2. ���� 3. �౸���� 4.�л� 5. �� ���̸� " << endl;

		int iJob;
		cin >> iJob;
		
		switch (iJob)
		{
		case WIZZARD:
			cout << "======= ������ ======" << endl;
			cout << "���� ���ݷ� : 3" << endl;
			cout << "���� ���ݷ� : 10" << endl;
			cout << "���� : 2" << endl;
			cout << "�� : 500" << endl;
			break;
		case WARRIOR:
			cout << "======= ���� ======" << endl;
			cout << "���� ���ݷ� : 7" << endl;
			cout << "���� ���ݷ� : 2" << endl;
			cout << "���� : 5" << endl;
			cout << "�� : 300" << endl;
			break;
		case SOCCER_PLAYER:
			cout << "======= �౸���� ======" << endl;
			cout << "���� ���ݷ� : 20" << endl;
			cout << "���� ���ݷ� : 1" << endl;
			cout << "���� : 7" << endl;
			cout << "�� : 10000" << endl;
			break;
		case STUDENT:
			cout << "======= ����� ======" << endl;
			cout << "���� ���ݷ� : 3" << endl;
			cout << "���� ���ݷ� : 3" << endl;
			cout << "���� : 4" << endl;
			cout << "�� : 200" << endl;
			break;
		case LOL_GAMER:
			cout << "======= �� ���̸� ======" << endl;
			cout << "���� ���ݷ� : 15" << endl;
			cout << "���� ���ݷ� : 10" << endl;
			cout << "���� : 6" << endl;
			cout << "�� : 50000" << endl;
			break;
		default:
			break;
		}

		int selectInput = 0;
		cout << "1. ���� 2. �ڷΰ���" << endl;
		cin >> selectInput;

		if (selectInput == 1)
		{
			// �ɷ�ġ ����
			break;
		}

		system("cls");
	}
	// �ɷ�ġ ����ϱ�

	return 0;
}

/*
���� : ���� ���� �� �ɷ�ġ �����ϱ�
���� : private ���� �����ϸ� �ȵ�
*/