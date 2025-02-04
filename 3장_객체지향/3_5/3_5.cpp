#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
	void show() { cout << "(" << x << ", " << y << ")" << '\n'; }
};

Point::Point():Point(0, 0) {} // 위임 생성자
Point::Point(int a, int b):x(a),y(b){} // 타겟 생성자, 생성자 서두에 초깃값으로 초기화

int main()
{
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
}