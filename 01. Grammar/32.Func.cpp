#include <iostream>
using namespace std;

//�Լ� ����
//��ȯ�� �Լ��̸� ���� ������

bool func(int a)
{
	return false;
}
//void : ������ ���� ���� ���
void Func2()
{
}

int Add(int a, int b)
{
	int c = 0;
	c += 100;

	return a + b;
}

int ChangeValue1()
{
	return 30; // int a = 30
}

void ChangeValue2(int* a)
{
	*a = 30;
}

void ChangeValue3(char* a, int count)
{
	for (int i = 0; i < count; i++)
	{
		a[i] = 'a' + i;
	}

	//*(a + i)
	//*a == a[0]
}

int main()
{
	//int a = Add(20, 30);
	//cout << a << endl;
	/*
	//int b = 0;
	//int a = b;
	//a = 30;
	//ChangeValue(b); �� ���ٰ� ���� �ǹ� 
	//cout << b << endl;
	// �Լ� �̿��ؼ� �ٱ��� �ִ� ���� �� �ٲٱ�
	*/
	//�Լ� �ܺ��� ���� ���� �����ϴ� ���
	//ù��°
	//int b = ChangeValue1();
	//cout << b << endl;

	//�ι�°
	int c = 0; 
	ChangeValue2(&c);
	cout << c << endl;
	
	//�Լ� �����
	/*
	1. �����ϱ� �Լ� - ���� 3�� / ����� ���
	*/

	/* 03/02 ����
	1. ũ�� �� �Լ�
	   - ���� 2���� �ִ´�.
	   - ���ʰ� or �������� �� ũ�� / �۴� / ���� ���

	2. ���ڿ� �Լ�
	  - ���ڿ��� ���ڷ� �޾Ƽ� ���ڿ��� ���̸� ��ȯ

	  char �迭 / char*
	*/
	/*
	char value = 'a';
	func(value); // ���� d�� ����
	cout << value;//�� d�� ���

	int arrInt[10] = {};
	func(arrInt);// 1 ~ 10
	for cout

	const char szText[10] = "abcdef";
	const char* pText = "abcdef";
	int count = 0;

	char text[10] = {};
	//text == &(text[0])

	ChangeValue3(text, 10);

	for (size_t i = 0; i < 10; i++)
	{
		cout << text[i];
	}

	/*
	�Լ� ����
	
	���ڿ� ����
	- ���ڿ� ���� �ΰ��� �޴´�.
	- ù��° ���ڷ� ���� ���ڿ��� �ι�° ������ ���ڿ��� �����Ѵ�.
	- �ι�° ���ڿ� ���

	bool temp = true;
	���ڿ� ��
	- ���ڿ� ���� �ΰ��� �޴´�.
	- ���ڿ� �ΰ��� ���� ������ true ��ȯ �ٸ��� false ��ȯ / bool

	abceefg
	abcdefh

	bool k = a == b;
	return k;


	return a == b;

	*/
	/*
	int a[10] = {};
	for (int i = 0; i < 10; i++)
	{
		a[i] = i + 1;
	}
	*/
}