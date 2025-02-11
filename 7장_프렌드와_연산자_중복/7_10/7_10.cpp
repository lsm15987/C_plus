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
	friend Power operator+(int n, Power p);
};

void Power::show() {
	cout << "kick = " << kick << endl;
	cout << "punch = " << punch << endl;
}
Power operator+(int n, Power p) {
	Power tmp;
	tmp.kick = n + p.kick;
	tmp.punch = n + p.punch;
	return tmp;
}

int main()
{
	Power a(1, 1), b;
	b = 5 + a;
	b.show();
}