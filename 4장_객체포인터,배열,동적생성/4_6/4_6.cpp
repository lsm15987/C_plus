#include <iostream>
using namespace std;

int main()
{
	cout << "�Է��� ������ ���� >> ";
	int n, sum = 0;
	cin >> n;

	if (n <= 0) return 0;

	int *p = new int[n];
	if (!p) { cout << "�Ҵ��� �� ����"; return 0; }

	for (int i = 0; i < n; i++) {
		cout << i + 1 << " ��° ���� >> ";
		cin >> p[i];
		sum += p[i];
	}
	cout << "�� >> " << sum;
	delete [] p;
}