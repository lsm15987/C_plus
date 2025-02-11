#include <iostream>
using namespace std;

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
	void showB() {
		setA(5);
		showA();
		cout << b;
	}
};
class GrandDerived :private Derived {
	int c;
protected:
	void setAB(int x) {
		/* Derived 클래스에서 private 로 상속 받았기 때문
		setA(x);
		showA();
		*/
		setB(x);
	}
};
int main()
{

}