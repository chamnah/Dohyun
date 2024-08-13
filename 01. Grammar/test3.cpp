#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> totalList;
	vector<int> currentList;

	int n = 0;
	cin >> n;
	totalList.resize(n);
	currentList.resize(n);
	for (int i = 0; i < n; i++)
	{
		cin >> totalList[i];
	}

	const int nextIndex = 2;
	size_t maxLength = 0;
	for (size_t i = 0; i < totalList.size(); i++)
	{
		currentList.assign(totalList.begin() + i, totalList.end());

		vector <int>::iterator iter = currentList.begin();

		int index = 1;

		for (; iter != currentList.end();)
		{
			if ((iter + 1) == currentList.end())
			{
				break;
			}

			if ((iter + 2) == currentList.end())
			{
				break;
			}

			if (index % 2 == 1 && (*iter) < *(iter + nextIndex))
			{
				++iter;
				++index;
			}
			else if (index % 2 == 0 && (*iter) > *(iter + nextIndex))
			{
				++iter;
				++index;
			}
			else
			{
				currentList.erase(iter + nextIndex);
			}
		}

		if (maxLength < currentList.size())
		{
			maxLength = currentList.size();
		}

		currentList.clear();
	}

	int m = maxLength;
	cout << m << endl;
	return 0;
}


/*
// Ȧ��
		//iterator pointer�� ����� �ڷ����̴�. �� ���� : (*odditer)
		vector <int>::iterator odditer = currentList.begin();//����

		for (; odditer != currentList.end();)//currentList ��ü ��ȸ
		{
			if ((odditer + 1) == currentList.end())
			{
				break;
			}

			if ((odditer + 2) == currentList.end())
			{
				break;
			}

			//if (conf[i] <= conf[i + 2])
			if (*odditer < *(odditer + nextIndex)) // Ȧ�� ������ ���
			{
				odditer += nextIndex; // ���� Ȧ�������� �̵�
			}
			else // �����ϰų�, ũ�Ⱑ ������ ���
			{
				currentList.erase(odditer + nextIndex); // �����Ѵ�.
			}
		}

		if (currentList.size() > 0) //
		{
			vector <int>::iterator eveniter = currentList.begin() + 1;

			for (; eveniter != currentList.end();)
			{
				if ((eveniter + 1) == currentList.end())
				{
					break;
				}

				if ((eveniter + 2) == currentList.end())
				{
					break;
				}

				if (*eveniter > *(eveniter + nextIndex)) // ¦�� �� ���� ��ġ�� ���� �� ���� ���
				{
					eveniter += 2;
				}
				else // �� ũ�ų� ���� ���
				{
					currentList.erase(eveniter + nextIndex); // ����
				}
			}
		}

*/