#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle(); // 매개변수 없는 생성자(기본 생성자)
	Circle(int r); //매개변수 있는 생성자
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << '\n';
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << '\n';
}

double Circle::getArea() {
	return radius * radius * 3.14;
}

int main()
{
	Circle donut;
	double area = donut.getArea();
	cout << "donut의 면적은 " << area << '\n';

	Circle pizza(4);
	area = pizza.getArea();
	cout << "pizza의 면적은 " << area << '\n';
}