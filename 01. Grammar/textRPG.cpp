#include <iostream>

using namespace std;

enum JobType
{
	NONE,
	WIZZARD,
	WARRIOR,
	SOCCER_PLAYER,
	STUDENT,
	LOL_GAMER
};

class Player
{
private:
	char m_szName[10];
	JobType m_eJob = JobType::NONE;
	int  m_iLevel = 0;
	int  m_iAttack = 0;
	int  m_iMagicAttack = 0;
	int  m_iDefence = 0;
	int  m_iMoney = 0;

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

	void SetAttack(int _iAttackPoint)
	{
		m_iAttack = _iAttackPoint;
	}

	void SetJob(JobType _eType)
	{
		m_eJob = _eType;
	}

	const char* GetJobName()
	{
		switch (m_eJob)
		{
		case WIZZARD:
			return "������";
		case WARRIOR:
			return "����";
		case SOCCER_PLAYER:
			return "�౸ ����";
		case STUDENT:
			return "�л�";
		case LOL_GAMER:
			return "�� ���ΰ��̸�";
		default:
			break;
		}
	}

	void PrintStatus()
	{
		cout << "============== ����â ==============" << endl;
		cout << "�̸� : " << m_szName << endl;
		cout << "���� : " << m_iLevel << endl;
		cout << "���� : " << GetJobName() << endl;
		cout << "���� ���ݷ� : " << m_iAttack << endl;
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
			p1.SetAttack(3);
			p1.SetJob(WIZZARD);
			break;
		case WARRIOR:
			cout << "======= ���� ======" << endl;
			cout << "���� ���ݷ� : 7" << endl;
			cout << "���� ���ݷ� : 2" << endl;
			cout << "���� : 5" << endl;
			cout << "�� : 300" << endl;
			p1.SetJob(WARRIOR);
			break;
		case SOCCER_PLAYER:
			cout << "======= �౸���� ======" << endl;
			cout << "���� ���ݷ� : 20" << endl;
			cout << "���� ���ݷ� : 1" << endl;
			cout << "���� : 7" << endl;
			cout << "�� : 10000" << endl;
			p1.SetJob(SOCCER_PLAYER);
			break;
		case STUDENT:
			cout << "======= ����� ======" << endl;
			cout << "���� ���ݷ� : 3" << endl;
			cout << "���� ���ݷ� : 3" << endl;
			cout << "���� : 4" << endl;
			cout << "�� : 200" << endl;
			p1.SetJob(STUDENT);
			break;
		case LOL_GAMER:
			cout << "======= �� ���̸� ======" << endl;
			cout << "���� ���ݷ� : 15" << endl;
			cout << "���� ���ݷ� : 10" << endl;
			cout << "���� : 6" << endl;
			cout << "�� : 50000" << endl;
			p1.SetJob(LOL_GAMER);
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

	p1.PrintStatus();

	return 0;
}

/*
���� : ���� ���� �� �ɷ�ġ �����ϱ�
���� : private ���� �����ϸ� �ȵ�
*/

/*
����
1. ���� ���� �� �Ʒ� ������ ����
  1. ����
  2. ����
  3. ����
  4. ������

2. ������ �����غ���(���� ����) 

���簳�߿� -> �� �κ��� / ��Ʈ��

�غ���
�� �κ��� : ȸ�� ���� / �α��� / QR ���� / QR ��ĵ

���߿�


*/