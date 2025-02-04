#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle(); // ���� ������
	Circle(int r); // Ÿ�� ������
	double getArea();
};

Circle::Circle():Circle(1) { } // Circle(int r) ���� ���ѱ���� �����ϸ� ���ҵ�

Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius << " �� ����" << '\n';
}

double Circle::getArea() {
	return radius * radius * 3.14;
}

int main()
{
	Circle donut;
	double area = donut.getArea();
	cout << "donut�� ������ " << area << '\n';

	Circle pizza(4);
	area = pizza.getArea();
	cout << "pizza�� ������ " << area << '\n';
}