#include <iostream>
using namespace std;

/* 다음 두 개의 중복 함수를 디폴트 매개 변수를 가진 하나의 함수로 작성하라.
void fillLine() {
	for (int i = 0; i < 25; i++) {
		cout << '*';
	}
	cout << endl;
}

void fillLine(int n, char c) {
	for (int i = 0; i < 25; i++) {
		cout << c;
	}
	cout << endl;
}
*/
void fillLine(int n = 25, char c = '*') {
	for (int i = 0; i < n; i++) {
		cout << c;
	}
	cout << endl;
}
int main()
{
	fillLine();
	fillLine(10, '%');
}