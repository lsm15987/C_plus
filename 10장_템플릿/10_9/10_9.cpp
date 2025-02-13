#include <iostream>
using namespace std;

template <class T1,class T2>
class GClass {
	T1 a;
	T2 b;
public:
	GClass();
	void set(T1 a, T2 b);
	void get(T1& a, T2& b);
};

template <class T1,class T2>
GClass<T1,T2>::GClass() {
	a = 0; b = 0;
}

template <class T1, class T2>
void GClass<T1, T2>::set(T1 a, T2 b) {
	this->a = a;
	this->b = b;
}
template <class T1,class T2>
void GClass<T1, T2>::get(T1& a, T2& b) {
	a = this->a;
	b = this->b;
}

int main()
{
	int a;
	double b;
	GClass<int, double> x;
	x.set(2, 0.5);
	x.get(a, b);
	cout << "a = " << a << " b = " << b << endl;

	char c;
	float f;
	GClass<char, float> y;
	y.set('a', 3.14);
	y.get(c, f);
	cout << "c = " << c << " f = " << f << endl;
}