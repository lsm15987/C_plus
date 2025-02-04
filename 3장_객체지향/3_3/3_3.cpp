#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle(); // �Ű����� ���� ������(�⺻ ������)
	Circle(int r); //�Ű����� �ִ� ������
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "������ " << radius << " �� ����" << '\n';
}

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