#include <iostream>
using namespace std;

// ����ȯ���� ���� �Լ� �ߺ��� ��ȣ
float square(float a) {
	return a * a;
}
double square(double a) {
	return a * a;
}

// ���� �Ű� ������ ���� �Լ� �ߺ��� ��ȣ
int add(int a, int b) {
	return a + b;
}
int add(int a, int& b) {
	b = b + a;
	return b;
}

// ����Ʈ �Ű� ������ ���� �Լ� �ߺ��� ��ȣ
void msg(int id) {
	cout << id << endl;
}
void msg(int id, string s = "") {
	cout << id << ":" << s << endl;
}
int main()
{
	cout << square(3.0);
	cout << square(3); // square(3)�� int ���̿��� double, float ����� ���� ��ȣ�Ͽ� ���� �߻�

	int s = 10, t = 20;
	cout << add(s, t); // value ���� reference ���� ��ȣ�Ͽ� ���� �߻�

	msg(5, "Good Morning");
	msg(6); // ����Ʈ �Ű� ������ �̿����� ��ȣ�Ͽ� ���� �߻�
}