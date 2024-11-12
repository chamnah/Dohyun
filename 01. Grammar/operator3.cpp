#include <iostream>

using namespace std;

class A
{
private:
	int m_iNum = 0;

public:
	int operator +(int other)
	{
		return m_iNum + other;
	}
};

int main()
{
	/*int a = 10;
	cout << a + 20 << endl;*/
	A cA;
	cout << cA + 20 << endl;

	return 0;
}