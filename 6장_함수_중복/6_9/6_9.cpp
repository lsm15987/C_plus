#include <iostream>
using namespace std;

// 형변환으로 인해 함수 중복이 모호
float square(float a) {
	return a * a;
}
double square(double a) {
	return a * a;
}

// 참조 매개 변수로 인한 함수 중복의 모호
int add(int a, int b) {
	return a + b;
}
int add(int a, int& b) {
	b = b + a;
	return b;
}

// 디폴트 매개 변수로 인한 함수 중복의 모호
void msg(int id) {
	cout << id << endl;
}
void msg(int id, string s = "") {
	cout << id << ":" << s << endl;
}
int main()
{
	cout << square(3.0);
	cout << square(3); // square(3)은 int 형이여서 double, float 어떤것을 쓸지 모호하여 에러 발생

	int s = 10, t = 20;
	cout << add(s, t); // value 인지 reference 인지 모호하여 에러 발생

	msg(5, "Good Morning");
	msg(6); // 디폴트 매개 변수를 이용할지 모호하여 에러 발생
}