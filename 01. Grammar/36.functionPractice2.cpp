#include <iostream>
using namespace std;

// �Լ� ��ȯ �ϴ� ���

// && : �� && �� : true(��)
// & : ��Ʈ ���� ���� AND

/*
 010110101
&101010110
      0100
*/

/*
��� (�׸���) �踦 ��Ͷ�
      and

���� 1000��
���(1000��)
��(1000��)

��� �Ǵ� �踦 ��Ͷ�
     (or)

��� O / �� O / �Ѵ� ���
*/

// 30 : 2����  1010101
// 20 : 2���� &0101011
//             0000001
//                   1

struct Info
{
	int a;
	int b;
};

Info func()
{
	Info temp;
	temp.a = 30;
	temp.b = 20;

	return temp; // ��Ʈ���� ����
}

int main()
{
	int a; // 30
	int b; // 20

	Info tempA = func();

	a = tempA.a; // 30
	b = tempA.b; // 20

	cout << "a :" << a << endl;
	cout << "b :" << b << endl;

	return 0;
}

/*
�Լ��� �� ���ڸ� ���� ��, �� ������ ���� ���� �ٲ� �� ����ü�� ��ȯ�Ͽ�, ���� ������ ���� ����϶�
int main(){
    int a = ?;
	int b = ?;
    func(a, b);

	cout << a << endl; 
	cout << b << endl; 
}
*/

/*
05/25 ����
�ڡڡڡڡں���~~!!
*/