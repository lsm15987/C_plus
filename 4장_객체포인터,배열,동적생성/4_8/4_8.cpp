#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle() {
		radius = 1; cout << "������ ���� radius = " << radius << endl;
	}
	Circle(int r) {
		radius = r; cout << "������ ���� radius = " << radius << endl;
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
	int n, count = 0;
	cout << "���� ���� >> ";
	cin >> n;
	Circle* pArray = new Circle[n];
	for (int i = 0, r; i < n; i++) {
		cout << i + 1 << "�� ������ >> ";
		cin >> r;
		pArray[i].setRadius(r);
		if ((pArray + i)->getArea() >= 100 && (pArray + i)->getArea() >= 200) count++;
	}
	cout << "���� >> " << count << endl;
	delete[] pArray;
}