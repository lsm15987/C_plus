#include <iostream>
using namespace std;

// 4���� ������ ����Ʈ �Ű������� �����ϰ�,
// �Լ� ������ �ش� 4���� ���� a, b, c, d�� ����Ͽ�
// ����Ʈ �Ű������� �����ϰ� ó������ ������

void f(int a = 1, int b = 2, int c = 3, int d = 4) {
	cout << a << b << c << d << endl;
}
int main()
{
	f();
	f(10);
	f(10, 20);
	f(10, 20, 30);
	f(10, 20, 30, 40);
}