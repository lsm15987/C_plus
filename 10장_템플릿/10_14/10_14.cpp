#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// algorithm�� sort() �Լ� ����ϱ�
int main() {
	vector<int> v;
	cout << "5 ���� ������ �Է��Ͻÿ�" << endl;
	for (int i = 0; i < 5; i++) {
		int n;
		cin >> n;
		v.push_back(n);
	}
	sort(v.begin(), v.end());

	vector<int>::iterator it;

	for (it = v.begin(); it < v.end(); it++) {
		cout << *it << ' ';
	}
	cout << endl;
}