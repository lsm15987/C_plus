#include <iostream>
#include <vector>
#include <string>
using namespace std;

// string Ÿ���� vector�� �̿��Ͽ� ���ڿ��� �����ϴ� ���͸� �����,
// 5���� �̸��� �Է� �޾� ������ �� ���� �ڿ� ������ �̸��� ����϶�
int main()
{
	vector<string> v;
	string name;

	for (int i = 0; i < 5; i++) {
		cout << i + 1 << " >> ";
		getline(cin, name);
		v.push_back(name);
	}
	name = v[0];
	for (int i = 1; i < 5; i++) {
		if (name < v[i])name = v[i];
	}
	cout << "�������� ���� �ڿ� ������ �̸��� >> " << name << endl;
}