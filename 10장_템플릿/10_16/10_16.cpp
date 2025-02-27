#include <iostream>
using namespace std;

int main()
{
	[](int x, int y) {cout << x + y << endl; }(2, 3);

	auto love = [](string a, string b) {
		cout << a << "���� " << b << "�� ����" << endl;
		};
	love("��", "��");
	love("�ø�", "����");

	// ĸ�� ����Ʈ�� ���� ���� ���� ����ϱ�
	double pi = 3.14;
	auto calc = [pi](int r)->double {return pi * r * r; };
	cout << "������ " << calc(3) << endl;

	// ���� ������ ���� �޾� ���ٷ� ����
	int sum = 0;
	[&sum](int x, int y) {sum = x + y; }(2, 3);
	cout << "���� " << sum;
}