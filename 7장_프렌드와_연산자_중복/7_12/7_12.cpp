#include <iostream>
using namespace std;

class Power {
	int kick, punch;
public:
	Power(int kick = 0, int punch = 0) { 
		this->kick = kick; this->punch = punch;
	}
	void show() {
		cout << "kick = " << kick << endl;
		cout << "punch = " << punch << endl;
	}
	friend Power& operator++(Power& op);
	friend Power operator++(Power& op, int x);
};
Power& operator++(Power& op) {
	op.kick++;
	op.punch++;
	return op;
}
Power operator++(Power& op, int x) {
	Power tmp = op;
	op.kick++;
	op.punch++;
	return tmp;
}

int main()
{
	Power a(1, 1), b;
	++a;
	a.show();
	b = a++;
	b.show();
	a.show();
}