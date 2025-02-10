#include <iostream>
using namespace std;

// 다음 조건에 맞게 디폴트 매개 변수를 가진 f()를 완성하라
// f(문자 *, 5 행, 5 열)을 디폴트로 가진 함수

void f(char c = '*', int a = 5, int b = 5) {
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << c;
		}
		cout << endl;
	}
}
int main()
{
	f();
	f('?');
	f('@', 3);
	f('@', 3, 4);
}