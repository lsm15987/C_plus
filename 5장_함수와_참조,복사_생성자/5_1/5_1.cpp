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
	cout << "생성자 실행 radius = " << radius << endl;
}
Circle::Circle(int radius) {
	this->radius = radius;
	cout << "생성자 실행 radius = " << radius << endl;
}
Circle::~Circle() {
	cout << "소멸장 실행 radius = " << radius << endl;
}
void increase(Circle c) {
	int r = c.getRadius();
	c.setRadius(r + 1);
}

int main()
{
	Circle waffle(30);
	increase(waffle);
	cout << waffle.getArea() << endl; // increase 함수를 사용하였지만 값에 의한 호출이기에 변동 x
}