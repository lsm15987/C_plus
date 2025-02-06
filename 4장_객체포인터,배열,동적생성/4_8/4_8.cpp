#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle() {
		radius = 1; cout << "생성자 실행 radius = " << radius << endl;
	}
	Circle(int r) {
		radius = r; cout << "생성자 실행 radius = " << radius << endl;
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
	int n, count = 0;
	cout << "원의 개수 >> ";
	cin >> n;
	Circle* pArray = new Circle[n];
	for (int i = 0, r; i < n; i++) {
		cout << i + 1 << "번 반지름 >> ";
		cin >> r;
		pArray[i].setRadius(r);
		if ((pArray + i)->getArea() >= 100 && (pArray + i)->getArea() >= 200) count++;
	}
	cout << "답은 >> " << count << endl;
	delete[] pArray;
}