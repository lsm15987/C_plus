#include <iostream>
using namespace std;
class Power {
	int kick, punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}
	Power operator +(Power p) {
		Power tmp;
		tmp.kick = this->kick + p.kick;
		tmp.punch = this->punch + p.punch;
		return tmp;
	}
	void show();
};

void Power::show() {
	cout << "kick = " << kick << endl;
	cout << "punch = " << punch << endl;
}

int main()
{
	Power op1(1, 2), op2(10, 20), c;
	c = op1 + op2;
	op1.show();
	op2.show();
	c.show();
}