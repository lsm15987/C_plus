#include <iostream>
using namespace std;

class Base {
public:
	virtual void f() { cout << "Base::f()" << endl; }
};
class Derievd :public Base {
public:
	virtual void f() { cout << "Derievd::f()" << endl; }
};
int main()
{
	Derievd d, * pDer;
	pDer = &d;
	pDer->f();

	Base* pBase; // 업캐스팅
	pBase = pDer;
	pBase->f(); // 동적 바인딩으로 부모가 아닌 자식 함수 실행
}