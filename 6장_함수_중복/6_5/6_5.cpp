#include <iostream>
using namespace std;

// �Լ� f()�� ȣ���ϴ� ��찡 ������ ���� �� 
// f()�� ����Ʈ �Ű� ������ ���� �Լ��� �ۼ��϶�.
void f(char c = ' ', int n = 1) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 10; j++) {
			cout << c;
		}
		cout << endl;
	}
}

int main()
{
	f();
	f('%');
	f('@', 5);
}