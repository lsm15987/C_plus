#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};
double Circle::getArea() {
	return radius * radius * 3.14;
}

int main()
{
	Circle circle[2][3];

	for (int i = 0, p = 1; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			circle[i][j].setRadius(p++);
		}
	}
	for (int i = 0, p = 1; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Circle [" << i << ',' << j << "]의 면적은 " << circle[i][j].getArea() << '\n';
		}
	}
}