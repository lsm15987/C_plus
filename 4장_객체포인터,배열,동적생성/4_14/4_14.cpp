#include <iostream>
#include <string>
using namespace std;

// 4+125+4+77+102 �� �Է� �޾� ����ϴ� ���α׷�
int main() {
	string s;
	cout << "���� >> ";
	getline(cin, s, '\n');
	int sum = 0, firstIndex = 0;
	while (true) {
		int findIndex = s.find('+', firstIndex);
		if (findIndex == -1) {
			if (s.substr(firstIndex) == "")break;
			int n = stoi(s.substr(firstIndex));
			cout << n << endl;
			sum += n;
			break;
		}
		int num = stoi(s.substr(firstIndex, findIndex));
		cout << num << endl;
		sum += num;
		firstIndex = findIndex + 1;
	}
	cout << "�� >> " << sum;
}