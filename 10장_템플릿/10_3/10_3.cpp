#include <iostream>
using namespace std;

// 배열과 배열의 크기를 매개 변수로 받아 합을 구하여
// 리턴하는 함수 add 작성
template <class T>
T add(T arr[], int b) {
	T sum = 0;
	for (int i = 0; i < b; i++) {
		sum += arr[i];
	}
	return sum;
}
int main()
{
	int x[] = { 1,2,3,4,5 };
	double y[] = { 1.1,2.2,3.3,4.4,5.5 };

	cout << add(x, 5) << endl;
	cout << add(y, 5) << endl;
}