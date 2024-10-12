#include <iostream>

using namespace std;

enum DungeonType
{
	MOUNTAIN_OF_GOLEM, // �� 0
	NEST_OF_BALROG,    // �߷� 1
	CAVE_OF_ZAKUM,     // ���� 2
	BLACKWIZARD,       // ���� ������ 3
	END,               // 4
	BACK = END
};
enum MainSelectType
{
	DUNGEON,
	HOTEL,
	STORAGE,
	EXIT
};

enum JobType
{
	NONE,
	WIZZARD,
	WARRIOR,
	SOCCER_PLAYER,
	STUDENT,
	LOL_GAMER
};

class Monster
{
private:
	char m_szName[10];
	int  m_iHP;
	int  m_iAttack = 0;
	int  m_iMagicAttack = 0;
	int  m_iDefence = 0;
	int  m_iMoney = 0; // ��� �Ӵ�

public:
	void SetName(const char* pszName)
	{
		strcpy_s(m_szName, pszName);
	}
};

class Player
{
private:
	char m_szName[10];
	JobType m_eJob = JobType::NONE;
	int  m_iHP;
	int  m_iLevel = 0;
	int  m_iAttack = 0; //AD
	int  m_iMagicAttack = 0; // AP
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

	int  m_iAttack = 0;
	int  m_iMagicAttack = 0;
	int  m_iDefence = 0;
	int  m_iMoney = 0; // ��� �Ӵ�

	Player p1;
	Monster arrayMonster[DungeonType::END] = 
	{ 
	  {"���� ���� ��", 100, 20, 10, 50, 100},
	  {"������ ���� �߷�", 200, 40, 20, 100, 200},
	  {"��...����", 400, 80, 40, 200, 400},
	  {"���ħħ�� ����", 800, 160, 80, 400, 800}
	};
	// ���� �ɷ�ġ �̸� ����
	
	arrayMonster[DungeonType::MOUNTAIN_OF_GOLEM].SetName("���� ���� ��");
	arrayMonster[DungeonType::NEST_OF_BALROG].SetName("���� ���� ������");
	arrayMonster[DungeonType::CAVE_OF_ZAKUM].SetName("���� ���� ������");
	arrayMonster[DungeonType::BLACKWIZARD].SetName("���� ���� ������");


	char szName[10];
	cin >> szName;
	p1.SetName(szName);

	cout << "�ڳ��� �̸��� " << p1.GetName() << "�̱�." << endl;
	
	// ���� ����
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
			break;
		}

		system("cls");
	}

	p1.PrintStatus();

	while (true)
	{
		int mainSelect = 0;
		cout << "1. ���� 2. ���� 3. ���� 4. ���� ����" << endl;
		cin >> mainSelect;
		system("cls");

		switch (mainSelect)
		{
		case DUNGEON:
		{
			cout << "1. ���� �� 2. �߷��� ���� 3. ������ ���� 4. ���� ������ 5. �ڷ� ����" << endl;
			int dungeonSelect = 0;
			cin >> dungeonSelect;
			switch (dungeonSelect)
			{
			case MOUNTAIN_OF_GOLEM:
				cout << "====== ���� �� =====" << endl;
				//���� �ɷ�ġ(0)
				// �÷��̾� �ɷ�ġ(0)
				arrayMonster[dungeonSelect];
				p1;
				// ����

				break;
			case NEST_OF_BALROG:
				cout << "====== �߷��� ���� =====" << endl;

				// ����

				break;
			case CAVE_OF_ZAKUM:
				cout << "====== ������ ���� =====" << endl;

				// ����

				break;
			case BLACKWIZARD:
				cout << "====== ���� ������ =====" << endl;

				// ����

				break;
			case BACK:
				break;
			default:
				break;
			}
		}

			break;
		case HOTEL:
			break;
		case STORAGE:
			break;
		case EXIT:
			break;
		default:
			break;
		}
	}

	

	return 0;
}

/*
10/05 ~ 10/08 ����

�� �κ��� 
����� �ؽ�Ʈ ������Ʈ�� ����ϱ�
�غ� ��� Ȱ���ؼ�, �غ� �Ǿ��ٴ� ������ �ؽ�Ʈ ������Ʈ�� ����ϱ�
*/

/*
10/1 ����

1. ��� ���� ���� �ɷ�ġ / �÷��̾� �ɷ�ġ ����

2. ���κ��� �˾ƿ���

*/

/*
09/28 ����
1. ���� �ɷ�ġ ����

2. ���� ���� ��, ���Ϳ� �÷��̾� �ɷ�ġ ���� ���

3. �� ���� �˾ƿ���
*/


/*
09/24 ����
1. �� �����ϱ� �����
 - Ȥ�� ���� �߻� �� ���� �ٶ�

2. ���̵�� �� ���� �Բ� ǥ���ϱ�(��)

--------------------------------------
     ��ŷ
1. �趯�� 10

���̵� : �趯�� / ���� : 0
1. ������ �ݱ�
2. ���� �Ʋ�����

09/21 ����
���κ��� �α��� ��� ��������
*/

/*
���� ���߿� ����

1. ��ȹ O
- ����ç����
-- ����Ʈ �ο�
-- ����Ʈ �Ϸ� - ī�޶� ����
-- �����Ǹ�, ���� ����
-- ������ ���̾� ���̽��� ����
-- �����ǿ� ������ ���
*/


/* 
�� �� �ִ� ��
1. �α���
2. ī�޶� ���� ����
*/

/*
09 / 14 ����
1. ���� ���� ��, ���� ���� �ɷ�ġ ����ϱ�
*/

/* 09 / 07 ����
1. ���� ���� ���� �ɷ�ġ �����ؿ���
  - ���� Ÿ�� �� �ɷ�ġ�� �̸��� ������� ���� ����

2. ���� �Ĳ��� �ؿ���~!!!!!
*/



/*
���� : ����~!!
�Ⱥ��� ġ��
*/




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
�� ��ĵ / �繰 �Ǵ�

*/