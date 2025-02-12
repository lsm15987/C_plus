#include <iostream>
using namespace std;

// 두 값(실수, 문자)을 매개 변수로 받아 큰 값을 리턴하는 함수 bigger() 작성
template <class T1, class T2>
void bigger(T1 a, T2 b) {
	if (a > b)cout << "a" << endl;
	else cout << "b" << endl;
}
int main()
{
	double a = 1.0;
	char b = 'a';
	bigger(a, b);
}