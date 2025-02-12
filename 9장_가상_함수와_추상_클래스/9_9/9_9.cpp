#include <iostream>
using namespace std;
// 4Ģ����(+, -, *, /) ���α׷� �ϼ�

class Calc {
	void input() {
		cout << "���� 2���� �Է��ϼ���>>";
		cin >> a >> b;
	}
protected:
	int a, b;
	virtual int calc(int a, int b) = 0;
public:
	void run() {
		input();
		cout << "���� ���� " << calc(a, b) << endl;
	}
};
class Adder :public Calc {
public:
	virtual int calc(int a, int b) {
		return a + b;
	}
};
class Subtract :public Calc {
public:
	virtual int calc(int a, int b) {
		return a - b;
	}
};
class Multiple :public Calc {
public:
	int calc(int a, int b) {
		return a * b;
	}
};
class Divide :public Calc {
public:
	int calc(int a, int b) { return a / b; }
};
int main()
{
	Calc* p = new Adder;
	p->run();
	p = new Subtract;
	p->run();
	p = new Multiple;
	p->run();
	p = new Divide;
	p->run();
}