#include <iostream>
using namespace std;

int main()
{
	char szText1[20] = "�ȳ��ϼ���.";
	char szText2[20] = "�ݰ����ϴ�.";
	char szResult[200] = "";

	//strcat : ���ڿ� �̾���̱�
	//strcpy : ���ڿ� �������ִ� �Լ�
	//strlen : ���ڿ� ���� ��ȯ���ִ� �Լ�
	//strcmp : ���ڿ� �� ��ȯ�� : 0 ���� / ��ȯ�� : 0�� �ƴϸ� �ٸ���
	
	//strcpy_s(szResult, szText1);
	//strcpy_s(szResult, szText2);
	
	strcat_s(szResult, szText1);
	strcat_s(szResult, szText2);
	strcat_s(szResult, szText2);
	strcat_s(szResult, szText2);
	strcat_s(szResult, szText2);
	strcat_s(szResult, szText2);

	cout << szResult;

	return 0;
}