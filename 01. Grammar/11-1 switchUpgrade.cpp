#include <iostream>
using namespace std;

int main()
{
	srand(time(0));
	cout << "1������ 9������ ��ȭ����� �˷��ּ���.";
	int num;
	cin >> num;
	switch (num)
	{
	case 1:
		cout << "�����Դϴ�." << endl;
		break;
	case 2:
		cout << "�����Դϴ�." << endl;
		break;
	case 3:
		cout << "�����Դϴ�." << endl;
		break;
	}

	
		switch (num)
		{
		case 4:
			if (rand() % 101 <= 50)
			{
				cout << "����" << endl;
			}
			else
			{
				cout << "����" << endl;
			}
			break;
		case 5:
			if (rand() % 101 <= 50)
			{
				cout << "����" << endl;
			}
			else
			{
				cout << "����" << endl;
			}
			break;

		default:
		{
			cout << "����" << endl;
		}
		}
	if (rand() % 101 <= 25)
		switch (num)
		{
		case 6:
			cout << "����" << endl;
			break;
		case 7:
			cout << "����" << endl;
			break;

		default:
		{
			cout << "����" << endl;
		}

		if (rand() % 101 <= 10)
		switch (num)
		{
		case 8:
			cout << "����" << endl;
			break;
		case 9:
			cout << "����" << endl;
			break;

		default:
		{
			cout << "����" << endl;
		}
		}
		}

	//if (true)
	//{
	//	// true�� ����
	//}

	//{
	//	if (true)
	//}

	/*
	���� ����
	-����~~~~!!!
	
	23�� ���ݱ��� �ߴ��� �׽�Ʈ

	- �ڵ带 ���� �ʰ� ġ��

	1. cpp���� cout�� ���� ���� ����ϱ� - 0
	2. �ڷ��� - ���� int ������ ������ 4byte
	3. ������ - cout << "���� ������ �� : " <<  10 & 1 << endl;0
	4. ��Ʈ�� �̿��� ���� �ý��� / ���� ��� / ���� �ֱ� / ���� ���� / ���� �˻�
	5. ��Ʈ �ɰ��� int pos; int x;(����) int y;(����) - ���� ��Ʈ ���� ��Ʈ�� �� �ְ� ���� �� ����
	6. if������ ��ȭ �ý��� ����� - 0 srand
	7. switch������ ��ȯ�ϱ� - 0 - default

	19 & 7
	19 | 7
	19 ^ 7
	19 << 5
	19 >> 3
	*/
	 
	//

	/*
	19 >> 3
	10

	19 << 5
	1001100000
	512 +   64+ 32  
	 
	 576 + 32 608
	*/



	/*
	bool  :
	int(integer) - ����(����) ���� ��� 0 
	float - �Ǽ�()0.1 -0.01
	char - ���� :
	
	*/


	/*
	17 & 5
	17 | 5
	17 ^ 5
	*/

	/*
	bool    
	int
	float
	char - ĳ����
	
	25 << 4
	25 >> 3

	*/

	/*
	����
	���� �ý���	
	��Ʈ �ɰ��� - 
		
	cpp�ļ� ��������
	��� �ٿ� �� ���� �ּ����� �ֱ�
	*/
}