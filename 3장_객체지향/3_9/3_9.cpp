#include <iostream>
using namespace std;

class PrivateAccessError {
private:
	int a;
	void f();
	PrivateAccessError();
public:
	int b;
	PrivateAccessError(int x);
	void g();
};
PrivateAccessError::PrivateAccessError() {
	a = 1;
	b = 1;
}
PrivateAccessError::PrivateAccessError(int x) {
	a = x;
	b = x;
}
void PrivateAccessError::f() {
	a = 5;
	b = 5;
}
void PrivateAccessError::g() {
	a = 6;
	b = 6;
}


int main()
{
	PrivateAccessError objA; // private 이므로 접근 불가능
	PrivateAccessError objB(100); // public 이기에 가능
	objB.a = 10; // private 이므로 접근 불가능
	objB.b = 20; // public 이기에 가능
	objB.f(); // private 이므로 접근 불가능
	objB.g(); // public 이기에 가능
}