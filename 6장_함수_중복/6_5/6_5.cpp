#include <iostream>
using namespace std;

// 함수 f()를 호출하는 경우가 다음과 같을 때 
// f()를 디폴트 매개 변수를 가진 함수로 작성하라.
void f(char c = ' ', int n = 1) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 10; j++) {
			cout << c;
		}
		cout << endl;
	}
}

int main()
{
	f();
	f('%');
	f('@', 5);
}