#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;

	cout << "���ڿ��� �Է��Ͻÿ� << ";
	getline(cin, s, '\n');
	int len = s.length();

	// ���� �̵�
	/*for (int i = 0; i < len; i++) {
		string first = s.substr(0, 1);
		string sub = s.substr(1, len - 1);
		s = sub + first;
		cout << s << endl;
	}*/

	// ������ �̵�
	for (int i = 0; i < len; i++) {
		string last = s.substr(len - 1, 1);
		string sub = s.substr(0, len - 1);
		s = last + sub;
		cout << s << endl;
	}
}