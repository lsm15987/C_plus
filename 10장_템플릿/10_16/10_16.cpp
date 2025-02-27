#include <iostream>
using namespace std;

int main()
{
	[](int x, int y) {cout << x + y << endl; }(2, 3);

	auto love = [](string a, string b) {
		cout << a << "보다 " << b << "가 좋아" << endl;
		};
	love("돈", "너");
	love("냉면", "만두");

	// 캡쳐 리스트를 통해 지역 변수 사용하기
	double pi = 3.14;
	auto calc = [pi](int r)->double {return pi * r * r; };
	cout << "면적은 " << calc(3) << endl;

	// 지역 변수를 참조 받아 람다로 접근
	int sum = 0;
	[&sum](int x, int y) {sum = x + y; }(2, 3);
	cout << "합은 " << sum;
}