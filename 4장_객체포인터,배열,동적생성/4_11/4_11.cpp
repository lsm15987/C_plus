#include <iostream>
#include <string>
using namespace std;

int main()
{
	string names[5];
	for (int i = 0; i < 5; i++) {
		cout << "�̸� >> ";
		getline(cin, names[i], '\n');
	}
	string high = names[0];
	string low = names[0];
	for (int i = 1; i < 5; i++) {
		if (high < names[i]) high = names[i];
		if (low > names[i]) low = names[i];
	}
	cout << "�������� ���� �տ� ������ �̸��� " << low << endl;
	cout << "�������� ���� �ڿ� ������ �̸��� " << high << endl;

}