#include <iostream>
using namespace std;

// 4가지 유형의 디폴트 매개변수를 전달하고,
// 함수 내에서 해당 4가지 변수 a, b, c, d를 출력하여
// 디폴트 매개변수가 적합하게 처리됨을 보여라

void f(int a = 1, int b = 2, int c = 3, int d = 4) {
	cout << a << b << c << d << endl;
}
int main()
{
	f();
	f(10);
	f(10, 20);
	f(10, 20, 30);
	f(10, 20, 30, 40);
}