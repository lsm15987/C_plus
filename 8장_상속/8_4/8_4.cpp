#include <iostream>
using namespace std;

// �������� ������ ������ �߻��ϴ� �κ��� ã�ƶ�
class Base {
	int a;
protected:
	void setA(int a) { this->a = a; }
public:
	void showA() { cout << a; }
};
class Derived :private Base {
	int b;
protected:
	void setB(int b) { this->b = b; }
public:
	void showB() { cout << b; }
};
int main()
{
	Derived x;
	/* private�̸鼭 protected �̱⿡ �����̴�.
	x.a = 5;
	x.setA(10);
	x.showA();
	x.showB = 10;
	x.setB(10);
	*/
	x.showB();
}