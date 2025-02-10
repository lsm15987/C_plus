#include <iostream>
using namespace std;

class Circle {
	static int numOfCircles;
	int radius;
public:
	Circle(int r = 1);
	~Circle() { numOfCircles--; }
	double getArea() { return 3.14 * radius * radius; }
	static int getNumOfCIrcles() { return numOfCircles; }
};
Circle::Circle(int r) {
	radius = r;
	numOfCircles++;
}
int Circle::numOfCircles = 0;

int main()
{
	Circle* p = new Circle[10];
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCIrcles() << endl;
	delete[] p;
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCIrcles() << endl;
	Circle a;
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCIrcles() << endl;
	Circle b;
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCIrcles() << endl;
}