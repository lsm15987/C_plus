#include <iostream>
#include <string>
using namespace std;

int main()
{
	string names[5];
	for (int i = 0; i < 5; i++) {
		cout << "숫자 >> ";
		getline(cin, names[i], '\n');
	}
	int high = stoi(names[0]);
	int low = stoi(names[0]);
	for (int i = 1, k; i < 5; i++) {
		k = stoi(names[i]);
		if (high < k) high = k;
		if (low > k) low = k;
	}
	cout << "가장 작은 수 " << low << endl;
	cout << "가장 큰 수 " << high << endl;
}