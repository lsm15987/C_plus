#include <iostream>
using namespace std;

// �Լ� sum()�� ȣ���ϴ� ��찡 sum(a, b), sum(a) ������ �����ϴ� ��� 
// �Լ� sum()�� ���� �Լ� �ߺ��� �����϶�.

int sum(int a, int b) {
	int sum = 0;
	if (b < a) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	for (int i = a; i <= b; i++) {
		sum += i;
	}
	return sum;
}

int sum(int a) {
	int sum = 0;
	for (int i = 0; i <= a; i++) {
		sum += i;
	}
	return sum;
}
int main()
{
	int a = 5, b = 10;
	cout << sum(b) << endl << sum(b, a);
}