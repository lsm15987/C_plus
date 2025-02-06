#include <iostream>
using namespace std;

int main()
{
	int* p;

	p = new int; // 메모리 할당 해주는 주소라고 생각하면 좋을듯
	if (!p) { // p 가 NUL 이면 메모리 할당 실패
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}

	*p = 5;
	int n = *p;
	cout << "*p = " << *p << endl;
	cout << "n = " << n << endl;
}