#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; cout << "생성자 실행 radius = " << radius << endl;
	}
	Circle(int r) { radius = r; cout << "생성자 실행 radius = " << radius << endl;
	}
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};
Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

int main()
{
	int r;
	while (1) {
		cout << "반지름 >> ";
		cin >> r;
		if (r <= 0) break;
		Circle* p;
		p = new Circle(r);
		cout << p->getArea() << endl;
		delete p;
	}
}