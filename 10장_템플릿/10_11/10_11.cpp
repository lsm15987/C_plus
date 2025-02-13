#include <iostream>
#include <vector>
#include <string>
using namespace std;

// string 타입의 vector를 이용하여 문자열을 저장하는 벡터를 만들고,
// 5개의 이름을 입력 받아 사전에 서 가장 뒤에 나오는 이름을 출력하라
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
	cout << "사전에서 가장 뒤에 나오는 이름은 >> " << name << endl;
}