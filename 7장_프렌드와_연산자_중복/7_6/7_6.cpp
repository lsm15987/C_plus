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
	Power operator+=(Power p);
	Power operator*=(Power p);
	Power operator/=(Power p);
};

void Power::show() {
	cout << "kick = " << kick << endl;
	cout << "punch = " << punch << endl;
}
Power Power::operator+=(Power p) {
	this->kick += p.kick;
	this->punch += p.punch;
	return *this;
}
Power Power::operator*=(Power p) {
	kick *= p.kick;
	punch *= p.punch;
	return *this;
}
Power Power::operator/=(Power p) {
	kick /= p.kick;
	punch /= p.punch;
	return *this;
}

int main()
{
	Power a(1, 2), b(2, 3);
	a.show();
	b.show();
	cout << "-----µ¡¼À------" << endl;
	a += b;
	a.show();
	b.show();
	cout << "-----°ö¼À------" << endl;
	a *= b;
	a.show();
	b.show();
	cout << "-----³ª´°¼À------" << endl;
	a /= b;
	a.show();
	b.show();
}