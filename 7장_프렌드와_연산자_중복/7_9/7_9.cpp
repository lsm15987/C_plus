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
	bool operator!();
};

void Power::show() {
	cout << "kick = " << kick << endl;
	cout << "punch = " << punch << endl;
}
bool Power::operator!() {
	if (kick == 0 && punch == 0)return true;
	else return false;
}

int main()
{
	Power a(0,0), b(2, 2);
	if (!a) cout << "0" << endl;
	else cout << "not zero" << endl;
}