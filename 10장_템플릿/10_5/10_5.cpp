#include <iostream>
using namespace std;

// char�� ��üȭ�Ǹ� ���� ��� ���ڰ� ��µǴ� ���� �߻�
template <class T>
void print(T a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i];
	}
	cout << endl;
}

// ���ø� �Լ����� �ߺ� �Լ��� �켱
void print(char c[], int n) {
	for (int i = 0; i < n; i++) {
		cout << (int)c[i];
	}
	cout << endl;
}
int main()
{
	int a[] = { 1,2,3,4,5 };
	int n = 5;
	print(a, n);
	char c[4] = { 1,2,3,4, };
	print(c, 4);
}