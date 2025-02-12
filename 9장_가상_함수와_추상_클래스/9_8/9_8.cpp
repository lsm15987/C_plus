#include <iostream>
using namespace std;

class Calculator {
public:
	virtual int add(int a, int b) = 0;
	virtual int subtract(int a, int b) = 0;
	virtual double average(int a[], int size) = 0;
};
class GoodCalc :public Calculator {
public:
	virtual int add(int a, int b);
	virtual int subtract(int a, int b);
	virtual double average(int a[], int size);
};
int GoodCalc::add(int a, int b) {
	return a + b;
}
int GoodCalc::subtract(int a, int b) {
	return a - b;
}
double GoodCalc::average(int a[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += a[i];
	}
	return (double)sum / size;
}
int main()
{
	int a[] = { 1,2,3,4,5,6 };
	int x = 2;
	int y = 3;
	GoodCalc gc;
	Calculator* p = &gc;
	cout << p->add(x, y) << endl;
	cout << p->subtract(x, y) << endl;
	cout << p->average(a, 6) << endl;
}