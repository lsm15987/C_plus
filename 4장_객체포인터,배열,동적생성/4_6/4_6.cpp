#include <iostream>
using namespace std;

int main()
{
	cout << "입력할 정수의 개수 >> ";
	int n, sum = 0;
	cin >> n;

	if (n <= 0) return 0;

	int *p = new int[n];
	if (!p) { cout << "할당을 못 받음"; return 0; }

	for (int i = 0; i < n; i++) {
		cout << i + 1 << " 번째 숫자 >> ";
		cin >> p[i];
		sum += p[i];
	}
	cout << "합 >> " << sum;
	delete [] p;
}