#include <iostream>
//Ŭ���� == ����ü c++ ����
//Ŀ���� �ڷ���
//int / char / bool : �⺻ �ڷ���
using namespace std;

struct Animal
{
	int leg;
	bool wing;
	bool tail;
};

/*
struct car
{
	int wheel; // 4byte
	int seat;  // 4
	int mouth; // 4
	int window; //4
	bool wing; //1byte
	bool boost; // 1byte
};
*/

struct car
{
	bool wing; //1byte + 3byte
	bool boost; // 1byte
	int wheel; // 4byte
};

//cout << "car�� ũ�� :" << sizeof(car) << endl;

/*Animal dog = {4, false, true};
dog.wing = false;
dog.leg = 4;
dog.tail = true;*/

/*
����ü�� Ư¡ : ���� ū ũ���� �ڷ����� �������� ũ�⸦ �ø���.
*/
enum PositionType : int
{
	FW,// ���ݼ�
	MF,//�̵��ʴ�
	DF, // �����
	GK // ��Ű��
};

enum SelectType
{
	ADD = 1,
	DEL,
	SEARCH,
	VIEW,
	EXIT
};

struct Player
{
	char name[16];//""
	int height; // 0
	PositionType pos; //0
};

int main()
{
	Player ply[10] = {};

	while (true)
	{
		int select;
		cout << "1. ���� ���� 2. ���� ���� 3. ���� �˻� 4. ���� ���� 5. ������" << endl;
		cin >> select;

		switch (select)
		{
		case ADD:
			Player addPlayer;
			int pos;
			cout << "�̸��� �Է����ּ���" << endl;
			cin >> addPlayer.name;
			cin >> pos;

			ply[0] = addPlayer;
			ply[0].pos = static_cast<PositionType>(pos);

			//���� ����
			break;
		case DEL:
			//���� ����
			break;
		case SEARCH:
		{
			bool sameChar = true;
			for (int i = 0; i < 9; i++) // ply ��ȸ
			{
				sameChar = true;
				for (int j = 0; j < 16; j++) // ���ڿ� ��ȸ
				{
					if (ply[i].name[j] != b[j])
					{
						sameChar = false;
						break;
					}
				}

				if (sameChar)
				{
					cout << ply[i].name;
					break;
				}
			}
		}
			//���� �˻�
			break;
		case VIEW:
			//���� ����
			break;
		case EXIT:
			//������
			break;
		default:
			break;
		}

		/*add�Ҷ��� height == 0 �������� �ʴ´�.
		view�Ҷ��� name ���̰� 0�̸� �������� �ʴ´�.
		ply[i].height = 0;
		ply[i].name = "";
		ply[10]->ply[9]*/
			int n = 0;
			char temp[16] = "";
			
			memset(ply[n].name, 0, sizeof(ply[n].name));

			for (size_t i = 0; i < sizeof(ply[n].name); i++)
			{
				cout << i << "��°";
				if (true)
				{

				}
				else
				{

				}
				ply[n].name[i] = '\0';
			}
	}

	//���� ���� ���α׷�
	// ���� ���� - �߰�
	// ���� ���� - ����
	// ���� �˻�
	return 0;

	//����
	//���� ���� ���α׷�
	/*
	1. ���� ���⿡�� ���� �߰��� ������ ��µǰԲ� �ٲٱ�

	2. ���� ���� ������
	   - ���� �̸� �Է� - �ش� �̸��� ������ ����
	*/

	/*
	����
	SEARCH ��� - �̸� �˻�
	*/

	/*
	�޽� 

	ply 0 ~ 9
	
	ply[0].name[0 ~ 15] == �޽�[0 ~ 15]
	ply[1].name == �޽�
	ply[2].name == �޽�

	*/
	/*
	��������
	�л��� ���� �ʰ� �����ڵ带 �ۼ��� �� �־�� �ȴ�.
	
	1. ���ڿ� ���� / �ڿ� ���̱� / ��
	2. ���� ���� ���α׷�
	3. ���� ���α׷�
	

	�ð����!! ����!!
	*/
}