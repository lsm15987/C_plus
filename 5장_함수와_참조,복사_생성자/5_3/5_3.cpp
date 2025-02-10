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
	cout << "������ ���� radius = " << radius << endl;
}
Circle::Circle(int radius) {
	this->radius = radius;
	cout << "������ ���� radius = " << radius << endl;
}
Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}

Circle getCircle() {
	Circle c(30);
	return c;
}

int main()
{
	Circle c;
	cout << c.getArea() << endl;

	c = getCircle(); // ��ü ����
	cout << c.getArea() << endl;

	Circle cir;
	cir = c; // ��ü ġȯ
	cout << c.getArea() << endl;
}