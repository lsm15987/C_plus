#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; cout << "������ ���� radius = " << radius << endl;
	}
	Circle(int r) { radius = r; cout << "������ ���� radius = " << radius << endl;
	}
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};
Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}

int main()
{
	int r;
	while (1) {
		cout << "������ >> ";
		cin >> r;
		if (r <= 0) break;
		Circle* p;
		p = new Circle(r);
		cout << p->getArea() << endl;
		delete p;
	}
}