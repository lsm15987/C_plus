#include <iostream>
using namespace std;

// 두 개의 배열을 매개 변수로 받아 
// 배열을 복사하는 제네릭 mcopy() 함수를 작성
template <class T1, class T2>
void mcopy(T1 src[], T2 dest[], int n) {
	for (int i = 0; i < n; i++) {
		dest[i] = (T2)src[i];
	}
}

int main()
{
	int x[] = { 1,2,3,4,5 };
	double d[5];
	char c[5] = { 'h','e','l','l','o' }, e[5];

	mcopy(x, d, 5);
	mcopy(c, e, 5);
	for (int i = 0; i < 5; i++) {
		cout << d[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < 5; i++) {
		cout << e[i] << ' ';
	}
}
