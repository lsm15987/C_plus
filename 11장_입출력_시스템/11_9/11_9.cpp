#include <iostream>
using namespace std;

// Point Ŭ������ ���� cin >> p;�� �����ϵ��� >> �����ڸ� �ۼ�
class Point {
	int x, y;
public:
	Point(int x = 0, int y = 0) { this->x = x; this->y = y; }
	friend ostream& operator << (ostream& stream, Point a);
	friend istream& operator >> (istream& ins, Point& a);
};
istream& operator >> (istream& ins, Point& a) {
	cout << "x ��ǥ >> ";
	ins >> a.x;
	cout << "y ��ǥ >> ";
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