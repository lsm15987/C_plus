#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(const Circle& c) {
		this->radius = c.radius;
		cout << "복사 생성자 실행 radius = " << radius << endl;
	}
	Circle() { radius = 1; }
	Circle(int r) { this->radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};
int main()
{
	Circle src(30);
	Circle dest(src);

	cout << "원본의 면적 = " << src.getArea() << endl;
	cout << "원본의 면적 = " << dest.getArea() << endl;
}