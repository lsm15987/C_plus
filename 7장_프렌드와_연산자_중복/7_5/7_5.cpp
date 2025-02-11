#include <iostream>
using namespace std;

class Power{
	int kick, punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}
	void show();
	/*void operator==(Power p) {
		if (this->kick == p.kick && this->punch == p.punch)cout << "같다" << endl;
		else cout << "틀림" << endl;
	}*/
	bool operator==(Power a);
};

void Power::show() {
	cout << "kick = " << kick << endl;
	cout << "punch = " << punch << endl;
}
bool Power::operator==(Power a) {
	if (this->kick == a.kick && this->punch == a.punch) return true;
	else return false;
}

int main() {
	Power a(1, 2), b(3, 4);
	//a == b;

	if (a == b)cout << "같다" << endl;
	else cout << "다르다" << endl;
}