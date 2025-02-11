#include <iostream>
using namespace std;

class Base {
public:
	void f() { cout << "Base::f()" << endl; }
};
class Derievd :public Base {
public:
	void f(){ cout << "Derievd::f()" << endl; }
};
int main()
{
	Derievd d, * pDer;
	pDer = &d;
	pDer->f();

	Base* pBase; // 업캐스팅
	pBase = pDer;
	pBase->f();
}