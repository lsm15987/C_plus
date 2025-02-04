#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle(); // 위임 생성자
	Circle(int r); // 타겟 생성자
	double getArea();
};

Circle::Circle():Circle(1) { } // Circle(int r) 에게 떠넘기기라고 생각하면 편할듯

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