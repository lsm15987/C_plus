#include <iostream>
using namespace std;

inline int odd(int x) {
	return x % 2;
}
int main()
{
	int sum = 0;
	for (int i = 0; i < 1000000; i++) {
		if (odd(i)) // inline �Լ��̱⿡ if(x%2)�� ����
			sum += i; 
	}
	cout << sum;
}