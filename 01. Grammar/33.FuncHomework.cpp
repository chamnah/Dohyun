#include <iostream>
using namespace std;

bool CompareString(const char first[10], const char second[10])
{
	//1. ���� �ٸ� ���ڰ� ���ö�����
	//2. ���ڿ� ������
	for (int i = 0; i < 10; i++)
	{
		if (first[i] != second[i])
		{
			return false;
		}
	}

	return true;
}

int main()
{
	if (CompareString("abce", "abcd"))
	{
		cout << "���ڿ��� ���� �����ϴ�." << endl;
	}
	else
	{
		cout << "���ڿ��� ���� �ٸ��ϴ�." << endl;
	}

	return 0;
}

//�Լ�
/*
3/9 ����~!! �� �ؿ���~~!!!!!
1. ���ڿ� ����
	- ���ڿ� ���� �ΰ��� �޴´�.
	- ù��° ���ڷ� ���� ���ڿ��� �ι�° ������ ���ڿ��� �����Ѵ�.
	- �ι�° ���ڿ� ���

2. ����
    - ���ڿ� �� �Լ�
	- ���ڿ� ���� �Լ�
*/