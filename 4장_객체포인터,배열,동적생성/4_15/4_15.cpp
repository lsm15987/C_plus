#include <iostream>
#include <string>
using namespace std;

// &�� �Էµ� ������ ���� ���� ���� ���ڿ��� �Է� �ް�,
// ã�� ���ڿ��� ��ġ�� ���ڿ��� ���� �Է� �޾� ���ڿ��� �����϶�
int main()
{
	string s, f, re;
	cout << "���ڿ� �Է� >>\n";
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