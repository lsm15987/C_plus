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
	friend Power operator+(Power a, Power b);
};

void Power::show() {
	cout << "kick = " << kick << endl;
	cout << "punch = " << punch << endl;
}
Power operator+(Power a, Power b) {
	Power tmp;
	tmp.kick = a.kick + b.kick;
	tmp.punch = a.punch + b.punch;
	return tmp;
}

int main()
{
	Power a(1, 1), b(10, 10);
	Power c = a + b;
	c.show();
}
