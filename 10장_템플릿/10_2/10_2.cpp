#include <iostream>
using namespace std;

// �� ��(�Ǽ�, ����)�� �Ű� ������ �޾� ū ���� �����ϴ� �Լ� bigger() �ۼ�
template <class T1, class T2>
void bigger(T1 a, T2 b) {
	if (a > b)cout << "a" << endl;
	else cout << "b" << endl;
}
int main()
{
	double a = 1.0;
	char b = 'a';
	bigger(a, b);
}