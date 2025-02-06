#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;

	cout << "문자열을 입력하시오 << ";
	getline(cin, s, '\n');
	int len = s.length();

	// 왼쪽 이동
	/*for (int i = 0; i < len; i++) {
		string first = s.substr(0, 1);
		string sub = s.substr(1, len - 1);
		s = sub + first;
		cout << s << endl;
	}*/

	// 오른쪽 이동
	for (int i = 0; i < len; i++) {
		string last = s.substr(len - 1, 1);
		string sub = s.substr(0, len - 1);
		s = last + sub;
		cout << s << endl;
	}
}