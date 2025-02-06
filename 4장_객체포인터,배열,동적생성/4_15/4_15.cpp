#include <iostream>
#include <string>
using namespace std;

// &가 입력될 때까지 여러 줄의 영문 문자열을 입력 받고,
// 찾는 문자열과 대치할 문자열을 각각 입력 받아 문자열을 변경하라
int main()
{
	string s, f, re;
	cout << "문자열 입력 >>\n";
	getline(cin, s, '&');
	cin.ignore();
	cout << "find >> ";
	getline(cin, f, '\n');
	cout << "replace >> ";
	getline(cin, re, '\n');

	int startIndex = 0;
	while (true) {
		int findIndex = s.find(f, startIndex);
		if (findIndex == -1) {
			break;
		}
		s.replace(findIndex,f.length(),re);
		startIndex = findIndex + re.length();
	}
	cout << s << endl;

}