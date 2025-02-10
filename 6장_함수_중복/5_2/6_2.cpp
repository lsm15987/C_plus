#include <iostream>
using namespace std;

// 함수 sum()을 호출하는 경우가 sum(a, b), sum(a) 유형이 존재하는 경우 
// 함수 sum()에 대한 함수 중복을 구현하라.

int sum(int a, int b) {
	int sum = 0;
	if (b < a) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	for (int i = a; i <= b; i++) {
		sum += i;
	}
	return sum;
}

int sum(int a) {
	int sum = 0;
	for (int i = 0; i <= a; i++) {
		sum += i;
	}
	return sum;
}
int main()
{
	int a = 5, b = 10;
	cout << sum(b) << endl << sum(b, a);
}