#include <iostream>
using namespace std;

// Adder�� Subtractor�� ���� ��ӹ޴� Calculator�� �ۼ��϶�.
// *, % �� Ŭ������ ����� �߰��ϱ�
class Adder {
protected:
	int add(int a, int b) { return a + b; }
};
class Subtractor {
protected:
	int minus(int a, int b) { return a - b; }
};
class Mul {
protected:
	int mul(int a, int b) { return a * b; }
};
class Divide {
protected:
	int div(int a, int b) { return a % b; }
};
class Calculator :public Adder, public Subtractor,public Mul,public Divide {
public:
	int calc(char op, int a, int b);
};
int Calculator::calc(char op, int a, int b) {
	switch (op) {
	case '+':
		return add(a, b);
	case '-':
		return minus(a, b);
	case '*':
		return mul(a, b);
	case '%':
		return div(a, b);
	}
}
int main()
{
	Calculator cal;
	cout << "2 + 4 = " << cal.calc('+', 2, 4) << endl;
	cout << "100 - 8 = " << cal.calc('-', 100, 8) << endl;
	cout << "2 * 4 = " << cal.calc('*', 2, 4) << endl;
	cout << "100 % 8 = " << cal.calc('%', 100, 8) << endl;
}