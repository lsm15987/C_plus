#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 1) {
		this->radius = radius;
	}
	int getRadius() { return radius; }
};

template <class T>
void myswap(T& a, T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}
int main()
{
	int a = 1, b = 10;
	myswap(a, b);
	cout << a << b << endl;

	double c = 1.1, d = 10.1;
	myswap(c, d);
	cout << c << d << endl;

	Circle cir1, cir2(100);
	myswap(cir1, cir2);
	cout << cir1.getRadius() << cir2.getRadius() << endl;

}