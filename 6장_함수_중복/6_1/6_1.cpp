#include <iostream>
using namespace std;

// ū ���� �����ϴ� ���� �� ���� �Լ��� �ߺ� �����϶�

int big(int a, int b) {
	if (a > b) return a;
	else return b;
}
int big(int a[], int size) {
	int k = a[0];
	for (int i = 1; i < size; i++) {
		if (k < a[i])k = a[i];
	}
	return k;
}

int main()
{
	int a = 5, b = 10;
	int k[3] = { 0,1,2 };
	cout << big(a, b) << endl<< big(k, 3) << endl;
}