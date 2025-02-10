#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	void setRadius(int r) { this->radius = r; }
	double getArea() { return 3.14 * radius * radius; }
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
};
int main()
{
	Circle c;
	Circle& circle = c;
	circle.setRadius(10);
	cout << c.getArea() << endl;
}