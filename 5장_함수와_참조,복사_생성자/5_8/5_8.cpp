#include <iostream>
using namespace std;

// 키보드로부터 반지름 값을 읽어 
// Circle 객체에 반지름을 설정하는 readRadius() 함수를 작성하라

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
	cout << "donut의 면적 = " << donut.getArea() << endl;
}