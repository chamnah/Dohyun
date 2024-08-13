#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	vector<int> totalList; // ������ ���� ��� 
	vector <int> currentList; // ���� ��� - 
	int n = 0;
	cin >> n; // ������ ���� �ޱ�
	totalList.resize(n); // �迭�� ũ��
	currentList.resize(n);// �迭�� ũ��
	for (int i = 0; i < n; i++)
	{
		cin >> totalList[i]; // ���� �ޱ�
	}
	
	const int nextIndex = 2; // ���� ��° Ȧ��/¦���� �̵�
	size_t maxLength = 0; // ���� �� ����� ����
	for (size_t i = 0; i < totalList.size(); i++) // ù ���� ��ġ ���� ���̸� ��� ���ϱ� ����
	{
		currentList.assign(totalList.begin() + i, totalList.end()); //������ġ ���� �� ����

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

		maxLength = max(maxLength,currentList.size()); // �� ���� �� �� ū�� ��ȯ
		currentList.clear();
	}

	cout << maxLength;
}




/*
10 2 9 3 8 4 7 5 6 1




*/