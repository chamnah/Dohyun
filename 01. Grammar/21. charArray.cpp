#include <iostream>

using namespace std;

int main()
{
	/*
	int arrInt[10]; // ���� ������ŭ�� �ڷ��� ����
	                // 0 ~ 9

	char a = 'a'; //�ƽ�Ű �ڵ�

	char arrChar[10] = "�ȳ�"; //����
	// "����Ŀ" / "�ݺ�"


	char arrTemp[5] = "abcd"; //\0 : ���ڿ� �� 
	int ab = 0;
	*/
	
	//int a = 10;
	//int b;
	//b = a;

	//int arrA[10] = { 0,1,2,3,4 };
	//int arrB[10]; // 0 ~ 9
	//arrB[0] = arrA[0];
	//arrB[1] = arrB[1];

	/*char a = 'a';
	char b;
	b = a;

	char arrA[10] = "AB\0CD";
	char arrB[10];
	
	for (size_t i = 0; i < 10; i++)
	{
		arrB[i] = arrA[i];
	}

	cout << arrB;*/
	//cout << arrB;

	//char arrA[10] = "ABCD";
	//char arrB[10] = "EFGH";
	//
	//arrA = arrA + arrB; //ABCDEFGH
	//arrA += arrB;

	//arrA // ABCDEFGH

	//char nickName[20] = "faker";

	char arrA[10] = "ABCD";
	char arrB[10] = "EFGH";

	int endIdx = 0;
	for (int i = 0; i < 10; i++)
	{
		if (arrA[i] == '\0')
		{
			endIdx = i;
			break;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		arrA[endIdx + i] = arrB[i];
	}
	// 4+i -> endIdx + i

	/*
	����
	
	����
	���ڿ� �񱳸����

	char arrA[10] = "ABCD";
	char arrB[10] = "ABCD";

	arrA / aarB = ���ڿ��� ���� �� ��

	cout���� ��� ���
	������ �����ϴ�.
	�ٸ��� �ٸ��ϴ�.

	���� - ��ҹ��� �޶� ���� ���ڷ� ���
	*/

	char a[5] = "ABCD";
	char b[5] = "ABCD";

	/*
	for (size_t i = 0; i < 4; i++)
	{
		if (a[i] != b[i])
		{
			// ���� �ٸ� ��Ȳ 1���̶�
			cout << "���� �ٸ��ϴ�.";
			return 0;
		}
	}

	cout << "�����ϴ�.";
	*/
	/* bool ������ üũ
	bool sameChar = true;
	for (size_t i = 0; i < 4; i++)
	{
		if (a[i] == b[i])
		{
			// ���� ���� ��Ȳ
		}
		else
		{
			// ���� �ٸ� ��Ȳ 1���̶�
			sameChar = false;
		}
	}
	if (sameChar)
	{
		cout << "�����ϴ�.";
		//���ڿ� ���
	}
	else
	{
		cout << "�ٸ��ϴ�.";
	}*/


	char temp[10]; // ����
	/*
	����
	����
	���ڿ� ����
	���ڿ� �̾���̱�
	���ڿ� ��
	*/

	/*
	1. ����
	char a[10] = "ABCD";
	char b[10]; a -> b�� ����

	2. �̾���̱�
	char a[10] = "ABCD";
	char b[10] = "EFGH";
	char c[10];
	c = a + b // "ABCDEFGH"
	1. 
	3. ��
	char a[10] = "ABCD";
	char b[10] = "ABCD";

	������ cout���� ���� ���
	�ٸ��� cout���� �ٸ� ���

	if(a[0] == 'a' || a[0] == 'A'
	&& b[0] == 'a' || b[0] == 'A')
	{
	
	}

	*/
	/*
	ȿ������ ��� �ƽ�Ű �ڵ�
	*/
	char a[5] = "ABCD";
	char b[5] = "EFGH";
	char c[8] = "";

	int i = 0;
	for (int i = 0; i <= 3; i++)
	{
		c[i] = a[i];
	}

	for (int t = 4; t <= 7; t++)
	{
		c[t] = b[t-4];
		//t = 4 i = 0; E t - 4  == 0
		//t = 5 i = 1; F t - 4 == 0 
		//t = 6 i = 2; G t - 4
		//t = 7 i = 3; H t - 4
		//t = 8 i = 4; \0 t - 4
	}

	// i = 0 ABCDEEEE
	// i = 1 ABCDFFFF
	// i = 2 ABCDGGGG
	// i = 3 ABCDHHHH
	// c = ABCDEFGH
	
	/*
	for
	{
	a[0] / b[0] - cmd false
	}

	cmd == true
	a = ABCD
	b = HBCD
	*/
	
	// c = a; ���� t = 4
	// c[4~7] = b;
}