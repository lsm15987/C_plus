#include <iostream>
using namespace std;

inline int odd(int x) {
	return x % 2;
}
int main()
{
	int sum = 0;
	for (int i = 0; i < 1000000; i++) {
		if (odd(i)) // inline 함수이기에 if(x%2)와 같음
			sum += i; 
	}
	cout << sum;
}