#include <iostream>
using namespace std;

// Ű����κ��� ������ ���� �о� 
// Circle ��ü�� �������� �����ϴ� readRadius() �Լ��� �ۼ��϶�

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};
void readRadius(Circle &c) {
	int r;
	cin >> r;
	c.setRadius(r);
}
int main()
{
	Circle donut;
	readRadius(donut);
	cout << "donut�� ���� = " << donut.getArea() << endl;
}