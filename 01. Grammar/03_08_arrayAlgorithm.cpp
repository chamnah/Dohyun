#include <iostream>

using namespace std;

int main()
{
	int arrNum[5] = { 1,2,3,4,5 };
	int iNum = arrNum[0];

	// ���� ���� ���� ����ϴ� �ڵ�
	for (int i = 0; i < 5; i++)
	{
		if (arrNum[i] < iNum)
		{
			iNum = arrNum[i];
		}
	}
	
	cout << iNum << endl;
	return 0;
}

/*
����
int arrNum[5] = { 1,2,3,4,5 };
1. �������� ����ϱ�
2. ���� ū ���� �ε��� ���
3. ���� ���� ���� �ε��� ���
4. ���� ���� ���� ã�Ƽ� �����ϱ� - ����
*/