#include <iostream>
using namespace std;

int main()
{
	int* p;

	p = new int; // �޸� �Ҵ� ���ִ� �ּҶ�� �����ϸ� ������
	if (!p) { // p �� NUL �̸� �޸� �Ҵ� ����
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		return 0;
	}

	*p = 5;
	int n = *p;
	cout << "*p = " << *p << endl;
	cout << "n = " << n << endl;
}