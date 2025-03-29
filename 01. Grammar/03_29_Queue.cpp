#include <iostream>
using namespace std;

int pushIndex = 0;
int popIndex = 0;

// �����͸� ������ ���, ������
void Push(int* pDataList, int data)
{
	pDataList[pushIndex] = data;
	pushIndex++;// pushIndex += 1;
}

int Pop(int* pDataList)
{
	int popData = pDataList[popIndex];
	pDataList[popIndex] = 0;
	popIndex++;

	return popData;
}

int main()
{
	int m_iDataList[100] = {};

	for (int i = 1; i <= 10; i++)
	{
		Push(m_iDataList, i);
	}

	cout << "Push �� ���" << endl;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << m_iDataList[i * 10 + j];
		}

		cout << endl;
	}

	cout << "Pop" << endl;

	for (int i = 1; i <= 10; i++)
	{
		cout << Pop(m_iDataList) << " ";
	}

	cout << "Pop �� ���" << endl;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << m_iDataList[i * 10 + j];
		}

		cout << endl;
	}
}

/*
�����ؿ���
1. �� �ڵ� ���� �ĺ��� �����غ��� - O
2. ���� ���� �Լ��� �Լ�ȭ �غ��� - X
*/

/*
���̵� : (��) (��) (��)
�� - ���� ����, ���� ����, ���� ������ ���� �Ⱥ��� ġ��

�� - ���� �� �Ѱ����� ���� �Լ�ȭ �Ͽ�, ���� �����

�� - ���� �� �Ѱ����� �����Ͽ� ��Ե� �����


����
1. (��) �ܰ� ���� �����ؿ���
2. ť �ڵ� �м��ؼ� ������ �� �ְ� �ϱ�
*/