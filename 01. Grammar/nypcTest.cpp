#include <iostream>
#include <vector>
using namespace std;

enum DeleteType
{
	None, // ���� ����
	Front, // �տ� ����
	Back  // �ڿ� ����
};

int main()
{
	int n;
	cin >> n;
	vector<int> conf;
	conf.resize(n);
	for (size_t i = 0; i < n; i++)
	{
		cin >> conf[i];
	}

	DeleteType delType = None; // � ��ġ�� ������ �� Ȥ�� ���� ������ ����

	while (conf.size() > 0) // �迭�� ��Ҹ� �����ϸ鼭, ���ϴ� ������ ����� ���� ��� �ݺ�
	{
		delType = None;

		for (size_t i = 0; i < conf.size() - 2; i += 2)// �迭 ������ ��ŭ �˻�
		{
			if (conf[i] >= conf[i + 2])
			{
				if (i == 0) // ù��° �˻���� Ʋ���� �� ����
				{
					delType = Front;
				}
				else // �ƴϸ� �ڿ� ����
				{
					delType = Back;
				}
				break;
			}
		}
		
		if (delType == None) // ���� Ȧ�� �˻簡 ������ ���� �Ʒ� ���� ���� �˻�
		{
			for (size_t i = 1; i < conf.size() - 2; i += 2)
			{
				if (conf[i] <= conf[i + 2])
				{
					if (i == 1) // ù��° ��� �˻���� Ʋ���� �� ����
					{
						delType = Front;
					}
					else // �ƴϸ� �ڿ� ����
					{
						delType = Back;
					}

					break;
				}
			}
		}
		
		if (delType == Front)
		{
			conf.erase(conf.begin()); // �տ� ����
		}
		else if (delType == Back)
		{
			conf.pop_back(); // �ڿ� ����
		}
		else
		{
			break; // None�̸�, �˻� �����ߴٴ� �ǹ��̹Ƿ�, Ż��
		}
	}

	cout << conf.size() << endl; // �迭 ���� ���

	return  0;
}


/*
	Ȧ�� : ���� ����
	¦�� : ���� ����

	1. 10 2 9 3 8 4 7 5 6 1
	Ȧ�� : 10 9 8 7 6
	¦�� : 2 3 4 5 1

	2. 2 9 3 8 4 7 5 6 1
	Ȧ�� : 2 3 4 5 1
	¦�� : 9 8 7 6

	���� ����
	1.
	����, Ȧ���� �����ϰ�, ¦���� �����ȴٸ�,
	�տ� ���� �� ��˻�

	2.
	����, Ȧ���� ���� �����ϴٰ� �����̸�, �ڿ� ����
	����, ¦���� ���� �����ϴٰ� �����Ǹ�, �ڿ� ����

	*/