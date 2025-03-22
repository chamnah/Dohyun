#include <iostream>
using namespace std;

int main()
{
	/*
	���� ����
	�ε����� ���������� ��ȸ�ϸ鼭, ���� ���Ե� ��ġ�� �ű�� ����(������ -> ����)
	*/

	int arrNum[] = { 46, 28, 19, 71, 30, 51, 9 };
	int arrNumCount = _countof(arrNum);

	// ���� ����
	for (int key = 1; key < arrNumCount; key++)
	{
		int keyValue = arrNum[key];
		int j = key - 1;

		// key ������� �����ؼ�, keyvalue�� ������ ��ġ ã��
		for (; j >= 0; --j)
		{
			// keyValue������ ũ��, ���������� �̵� ��Ű�鼭 ������ ��ġ ã��
			if (arrNum[j] > keyValue)
			{
				arrNum[j + 1] = arrNum[j];
			}
			else
			{
				break;
			}
		}

		// j + 1 �� ���� keyValue�� ������ ��ġ�� �Ǿ� �ش� ��ġ�� keyValue ����
		arrNum[j + 1] = keyValue;
	}

	// ���ĵ� �� ���
	for (size_t i = 0; i < arrNumCount; i++)
	{
		cout << arrNum[i] << " ";
	}

	return 0;
}

/*
�����ؿ���
1. �� �ڵ� ���� �ĺ��� �����غ���
2. Swap�Լ� / ���� ���� �Լ��� �Լ�ȭ �غ���

*/