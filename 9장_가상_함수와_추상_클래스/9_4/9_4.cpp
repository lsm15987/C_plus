#include <iostream>
using namespace std;

class Base {
public:
	virtual void f() {
		cout << "Base" << endl;
	}
};
class Derived :public Base {
public:
	void f(){ cout << "Derived" << endl; }
};
class GrandDerived :public Derived {
public:
	void f(){ cout << "GrandDerived" << endl; }
};
int main()
{
	GrandDerived gd, * pGd;
	Derived* pd;
	Base* pb;
	pGd = &gd; pd = &gd; pb = &gd;
	pGd->f();
	pd->f();
	pb->f();
}