#include <iostream>
using namespace std;

// char로 구체화되면 숫자 대신 문자가 출력되는 문제 발생
template <class T>
void print(T a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i];
	}
	cout << endl;
}

// 템플릿 함수보다 중보 함수가 우선
void print(char c[], int n) {
	for (int i = 0; i < n; i++) {
		cout << (int)c[i];
	}
	cout << endl;
}
int main()
{
	int a[] = { 1,2,3,4,5 };
	int n = 5;
	print(a, n);
	char c[4] = { 1,2,3,4, };
	print(c, 4);
}