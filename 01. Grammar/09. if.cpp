#include <iostream>
using namespace std;

void main()
{
	/*
	���ǹ�
	if / switch


	if(true/false) // ���� �Ұ���
	{
		// true�� �Ǹ� �߰�ȣ �ȿ� ���� ����	
	}
	else if() // ���� ����, if���� �����ϰ� ���� �˻�
	{

	}
	else // �� ���� ��� false�� ����, ���� ����
	{
	}

	true�� �ش� �߰�ȣ ���� �����ϰ�, Ż��
	*/

	/*if (true)
	{
		cout << "first" << endl;
	}
	else if(true)
	{
		cout << "second" << endl;
	}
	
	if (false)
	{
		cout << "third" << endl;
	}
	else
	{
		cout << "four" << endl;
	}*/

	//if (false)
	//	cout << "first" << endl; // ���� ����
	//
	//cout << "second" << endl;

	if (false)
		if (true)
			cout << "first" << endl;
		else
			cout << "second" << endl;

	// if�� �� �� �߰�ȣ �־��ִ°� ����. �������� ���ؼ�

	//cout : ���� ���
	//cin : �Է� 
	//

	//int num;
	//std::cin >> num; // int - ���� �Է¹ްڴ�.

	/*
	char  text;
	std::cin >> text; //���ڸ� �Է� �ްڴ�.
	*/

	//����
	// �Ʒ� ������ Ȱ���ؼ� ������ ��������.
	// �ִ��� �غ���

	/*
	���� - �����ֱ��� ����(���)
	int x = 3;
	int y = 4;
	int z = 6;
	int w = 7;
					x        y        z        w
	int position 00000000 00000000 00000000 00000000

	x,y,z,w�� �� ����Ʈ�� ����
	position���� x ���� / y ���� / z���� / w����
	�Ͽ� cout���� �� ������ ���
	*/

	/*
	1. ����!!!!!!
	1. �Ⱥ��� ���� ���� ���� ������. ��� ������ �ĺ���
	2. �ѹ� ���� ���� �Ⱦ��, �ٽ� �Ⱥ��� �ĺ���
	3. ���� �ݺ�

	// 20 -> 2(�� ����)
	// ������ �� �ڵ� �о��(�ȵ�)

	MBTI / ������ � /

	������ � 
	0 ~ 7������ ���ڸ� ������.

	0��
	cout << "�� ������ ����� ���� ���Դϴ�. ���� �� �����ϼ���."

	if()
	*/

	cout << "1. ������ 2. �����" << endl;
	int num;
	cin >> num;

	if (num == 1)
	{
		cout << "����� ������ ����̱���." << endl;
	}
	else if (num == 2)
	{
		cout << "����� ��ĥ�� ����̱���." << endl;
	}
	else
	{
		cout << "�߸��������ϴ�.";
	}
}