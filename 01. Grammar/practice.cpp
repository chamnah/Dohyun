#include <iostream>
using namespace std;

struct tagInfo
{
	int a, b, c;
};

//��ȯ�� �Լ��̸�(����(:�ڷ��� ������)) { ������ }

int playDohyun(int a, float b, char c, bool d)
{
	return 100;
}

int main()
{
	int result = playDohyun(1, 2, 3, 4);

	int arrNum[10] = {1,2,3,4,5,6,7,8,9,10};

	int num = 10;// 4byte ����
	int* pInt = &num; //int pointer
	*pInt = 20;

	pInt = arrNum;
	pInt = &(arrNum[0]);

	pInt[3] = 20;
	*(pInt + 3) = 50;
	
	tagInfo info;
	info.a = 20;

	/*tagInfo* pInfo = nullptr;
	(*pInfo).a = 20;
	pInfo->a = 20;*/

	/*
	����(������ ��)
	�����Ҵ�(������ ��) -> ���α׷� ���� �� �޸𸮸� ����
	�����Ҵ� -> ���α׷� ���� ���� �޸𸮸� ����
	*/

	int temp = 10; // 4byte �޸𸮰����� temp��� �̸����� ���� ����
	int* tempA = new int;
	*tempA = 10;
	delete tempA;


	int c = 10;
	c += 10;
	c -= 10;
	//++c; // 11
	//c++; // 12
	//--c; // 11
	//cout << c << endl;
}

/*
�Լ� �����
�Լ��� ���� �ѱ��, +10 ���� �����ִ� �Լ��� ���弼��~

�Լ��� ���� �ѱ��, 10 ���� �ϴ� �Լ��� ���弼��~
�Լ��� ���� �ѱ��, 10 ���ϱ� �ϴ� �Լ��� ���弼��~
�Լ��� ���� �ѱ��, 10 ������ �ϴ� �Լ��� ���弼��~
*/
/*
05/14 ����

1. �Լ��� ���� �ΰ��� �Ѱܼ� �� ������ �� ���ϴ� �Լ�
2. �Լ��� ���� �ΰ��� �Ѱܼ� �� ������ ���� ���ϴ� �Լ�
3. �Լ��� ���� �ΰ��� �Ѱܼ� �� ������ �� ���ϴ� �Լ�
4. �Լ��� ���� �ΰ��� �Ѱܼ� �� ������ ������ ���ϴ� �Լ�

*/