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
	Power operator+(int n);
};

void Power::show() {
	cout << "kick = " << kick << endl;
	cout << "punch = " << punch << endl;
}
Power Power::operator+(int n) {
	/* �̷������� �ϸ� a�� �ٲ�⿡ ��ü�� ���� �ϳ� ����
	��ȯ�ϴ°� ����
	kick = kick + n;
	punch = punch + n;
	return *this;
	*/
	Power p;
	p.kick = kick + n;
	p.punch = punch + n;
	return p;
}

int main()
{
	Power a(1, 2), b(3, 4), c;
	c = a + 3;
	c.show();
	a.show();
}