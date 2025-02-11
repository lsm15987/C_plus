#include <iostream>
using namespace std;

// 다음에서 컴파일 오류가 발생하는 부분을 찾아라
class Base {
	int a;
protected:
	void setA(int a) { this->a = a; }
public:
	void showA() { cout << a; }
};
class Derived :private Base {
	int b;
protected:
	void setB(int b) { this->b = b; }
public:
	void showB() { cout << b; }
};
int main()
{
	Derived x;
	/* private이면서 protected 이기에 오류이다.
	x.a = 5;
	x.setA(10);
	x.showA();
	x.showB = 10;
	x.setB(10);
	*/
	x.showB();
}