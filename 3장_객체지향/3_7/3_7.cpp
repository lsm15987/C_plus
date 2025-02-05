#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle::Circle():Circle(1){}
Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius << "�� ����" << '\n';
}
Circle::~Circle() {
	cout << "������ " << radius << "�� �Ҹ�" << '\n';
}
double Circle::getArea() {
	return radius * radius * 3.14;
}

int main()
{
	Circle pizza(30);
	Circle donut;
}