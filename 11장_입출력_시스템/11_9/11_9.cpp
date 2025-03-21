#include <iostream>
using namespace std;

// Point 클래스에 대해 cin >> p;가 가능하도록 >> 연산자를 작성
class Point {
	int x, y;
public:
	Point(int x = 0, int y = 0) { this->x = x; this->y = y; }
	friend ostream& operator << (ostream& stream, Point a);
	friend istream& operator >> (istream& ins, Point& a);
};
istream& operator >> (istream& ins, Point& a) {
	cout << "x 좌표 >> ";
	ins >> a.x;
	cout << "y 좌표 >> ";
	ins >> a.y;
	return ins;
}
ostream& operator << (ostream& stream, Point a) {
	stream << "(" << a.x << ", " << a.y << ")";
	return stream;
}

int main()
{
	Point p;
	cin >> p;
	cout << p;
}