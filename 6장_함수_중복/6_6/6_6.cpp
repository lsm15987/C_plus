#include <iostream>
using namespace std;

// ���� ���ǿ� �°� ����Ʈ �Ű� ������ ���� f()�� �ϼ��϶�
// f(���� *, 5 ��, 5 ��)�� ����Ʈ�� ���� �Լ�

void f(char c = '*', int a = 5, int b = 5) {
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << c;
		}
		cout << endl;
	}
}
int main()
{
	f();
	f('?');
	f('@', 3);
	f('@', 3, 4);
}