#include <iostream>
using namespace std;

class Base {
public:
	virtual ~Base() {
		cout << "~Base()" << endl;
	}
};
class Derived :public Base {
public:
	virtual ~Derived() {
		cout << "~Derived()" << endl;
	}
};
int main()
{
	Base* b = new Derived();
	Derived* d = new Derived();

	delete b;
	delete d;
}