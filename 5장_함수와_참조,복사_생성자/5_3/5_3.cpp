#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea() {
		return 3.14 * radius * radius;
	}
	int getRadius() {
		return radius;
	}
	void setRadius(int radius) { this->radius = radius; }
};
Circle::Circle() {
	radius = 1;
	cout << "积己磊 角青 radius = " << radius << endl;
}
Circle::Circle(int radius) {
	this->radius = radius;
	cout << "积己磊 角青 radius = " << radius << endl;
}
Circle::~Circle() {
	cout << "家戈厘 角青 radius = " << radius << endl;
}

Circle getCircle() {
	Circle c(30);
	return c;
}

int main()
{
	Circle c;
	cout << c.getArea() << endl;

	c = getCircle(); // 按眉 府畔
	cout << c.getArea() << endl;

	Circle cir;
	cir = c; // 按眉 摹券
	cout << c.getArea() << endl;
}