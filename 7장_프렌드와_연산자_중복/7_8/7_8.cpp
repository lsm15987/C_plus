#include <iostream>
using namespace std;

class Power {
	int kick, punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}
	void show();
	Power& operator++();
	Power operator++(int x);
};

void Power::show() {
	cout << "kick = " << kick << endl;
	cout << "punch = " << punch << endl;
}
Power& Power::operator++() {
	kick++;
	punch++;
	return *this;
}
Power Power::operator++(int x) {
	Power tmp = *this;
	kick++;
	punch++;
	return tmp;
}

int main() {
	Power a(1, 1), b(2, 2), c;
	++a;
	++b;
	a.show();
	b.show();
	c = a++;
	c.show();
	a.show();
}